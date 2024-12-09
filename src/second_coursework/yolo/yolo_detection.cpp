#include <opencv2/opencv.hpp>
#include <opencv2/dnn.hpp>
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace cv;
using namespace cv::dnn;
using namespace std;

Net load_yolo() {
    Net net;
    try {
        net = readNet("config/yolov4.weights", "config/yolov4.cfg", "Darknet");
    } catch (const cv::Exception& e) {
        cerr << "Error loading YOLO model: " << e.what() << endl;
        exit(-1);
    }
    return net;
}

vector<string> get_classes() {
    vector<string> classes;
    ifstream ifs("config/coco.names");
    if (!ifs.is_open()) {
        cerr << "Error opening class names file." << endl;
        exit(-1);
    }
    string line;
    while (getline(ifs, line)) {
        classes.push_back(line);
    }
    return classes;
}

vector<Mat> detect_objects(Mat& img, Net& net) {
    Mat blob;
    blobFromImage(img, blob, 1 / 255.0, Size(416, 416), Scalar(), true, false);
    net.setInput(blob);
    vector<Mat> outs;
    net.forward(outs, net.getUnconnectedOutLayersNames());
    return outs;
}

vector<Rect> get_boxes(Mat& img, vector<Mat>& outs) {
    vector<int> class_ids;
    vector<float> confidences;
    vector<Rect> boxes;
    for (size_t i = 0; i < outs.size(); ++i) {
        float* data = (float*)outs[i].data;
        for (int j = 0; j < outs[i].rows; ++j, data += outs[i].cols) {
            Mat scores = outs[i].row(j).colRange(5, outs[i].cols);
            Point class_id_point;
            double confidence;
            minMaxLoc(scores, 0, &confidence, 0, &class_id_point);
            if (confidence > 0.5) {
                int center_x = (int)(data[0] * img.cols);
                int center_y = (int)(data[1] * img.rows);
                int width = (int)(data[2] * img.cols);
                int height = (int)(data[3] * img.rows);
                int x = center_x - width / 2;
                int y = center_y - height / 2;
                boxes.push_back(Rect(x, y, width, height));
                class_ids.push_back(class_id_point.x);
                confidences.push_back((float)confidence);
            }
        }
    }
    return boxes;
}

vector<Rect> filter_duplicates(vector<Rect>& boxes, float distance_threshold = 100.0) {
    vector<Rect> filtered_boxes;
    for (const auto& box : boxes) {
        bool duplicate = false;
        for (const auto& f_box : filtered_boxes) {
            if ((abs(box.x - f_box.x) < distance_threshold) && (abs(box.y - f_box.y) < distance_threshold)) {
                duplicate = true;
                break;
            }
        }
        if (!duplicate) {
            filtered_boxes.push_back(box);
        }
    }
    return filtered_boxes;
}

void process_image(const string& image_path, Net& net) {
    Mat img = imread(image_path);
    if (img.empty()) {
        cerr << "Could not read the image: " << image_path << endl;
        return;
    }

    vector<Mat> outs = detect_objects(img, net);
    vector<Rect> boxes = get_boxes(img, outs);
    vector<Rect> filtered_boxes = filter_duplicates(boxes);

    for (const auto& box : filtered_boxes) {
        rectangle(img, box, Scalar(0, 255, 0), 2);
    }

    imshow("Image Detection", img);
    waitKey(0);
    destroyAllWindows();
}

void process_video(const string& video_path, Net& net) {
    VideoCapture cap(video_path);
    if (!cap.isOpened()) {
        cerr << "Error opening video stream or file: " << video_path << endl;
        return;
    }

    Mat frame;
    while (cap.read(frame)) {
        vector<Mat> outs = detect_objects(frame, net);
        vector<Rect> boxes = get_boxes(frame, outs);
        vector<Rect> filtered_boxes = filter_duplicates(boxes);

        for (const auto& box : filtered_boxes) {
            rectangle(frame, box, Scalar(0, 255, 0), 2);
        }

        imshow("Video Detection", frame);
        if (waitKey(1) == 27) {
            break;  // Stop if 'Esc' key is pressed
        }
    }

    cap.release();
    destroyAllWindows();
}

int main(int argc, char** argv) {
    if (argc != 3) {
        cerr << "Usage: " << argv[0] << " <image|video> <path>" << endl;
        return -1;
    }

    string mode = argv[1];
    string path = argv[2];

    Net net = load_yolo();
    vector<string> classes = get_classes();

    if (mode == "image") {
        process_image(path, net);
    } else if (mode == "video") {
        process_video(path, net);
    } else {
        cerr << "Invalid mode. Use 'image' or 'video'." << endl;
        return -1;
    }

    return 0;
}
