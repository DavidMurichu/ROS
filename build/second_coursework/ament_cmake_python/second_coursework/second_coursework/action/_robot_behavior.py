# generated from rosidl_generator_py/resource/_idl.py.em
# with input from second_coursework:action/RobotBehavior.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotBehavior_Goal(type):
    """Metaclass of message 'RobotBehavior_Goal'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('second_coursework')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'second_coursework.action.RobotBehavior_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__robot_behavior__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__robot_behavior__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__robot_behavior__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__robot_behavior__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__robot_behavior__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotBehavior_Goal(metaclass=Metaclass_RobotBehavior_Goal):
    """Message class 'RobotBehavior_Goal'."""

    __slots__ = [
        '_duration',
    ]

    _fields_and_field_types = {
        'duration': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.duration = kwargs.get('duration', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.duration != other.duration:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def duration(self):
        """Message field 'duration'."""
        return self._duration

    @duration.setter
    def duration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'duration' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'duration' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._duration = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotBehavior_Result(type):
    """Metaclass of message 'RobotBehavior_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('second_coursework')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'second_coursework.action.RobotBehavior_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__robot_behavior__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__robot_behavior__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__robot_behavior__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__robot_behavior__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__robot_behavior__result

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotBehavior_Result(metaclass=Metaclass_RobotBehavior_Result):
    """Message class 'RobotBehavior_Result'."""

    __slots__ = [
        '_people_positions',
        '_dogs_positions',
        '_cats_positions',
    ]

    _fields_and_field_types = {
        'people_positions': 'sequence<geometry_msgs/Pose>',
        'dogs_positions': 'sequence<geometry_msgs/Pose>',
        'cats_positions': 'sequence<geometry_msgs/Pose>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.people_positions = kwargs.get('people_positions', [])
        self.dogs_positions = kwargs.get('dogs_positions', [])
        self.cats_positions = kwargs.get('cats_positions', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.people_positions != other.people_positions:
            return False
        if self.dogs_positions != other.dogs_positions:
            return False
        if self.cats_positions != other.cats_positions:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def people_positions(self):
        """Message field 'people_positions'."""
        return self._people_positions

    @people_positions.setter
    def people_positions(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Pose) for v in value) and
                 True), \
                "The 'people_positions' field must be a set or sequence and each value of type 'Pose'"
        self._people_positions = value

    @builtins.property
    def dogs_positions(self):
        """Message field 'dogs_positions'."""
        return self._dogs_positions

    @dogs_positions.setter
    def dogs_positions(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Pose) for v in value) and
                 True), \
                "The 'dogs_positions' field must be a set or sequence and each value of type 'Pose'"
        self._dogs_positions = value

    @builtins.property
    def cats_positions(self):
        """Message field 'cats_positions'."""
        return self._cats_positions

    @cats_positions.setter
    def cats_positions(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Pose) for v in value) and
                 True), \
                "The 'cats_positions' field must be a set or sequence and each value of type 'Pose'"
        self._cats_positions = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotBehavior_Feedback(type):
    """Metaclass of message 'RobotBehavior_Feedback'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('second_coursework')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'second_coursework.action.RobotBehavior_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__robot_behavior__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__robot_behavior__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__robot_behavior__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__robot_behavior__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__robot_behavior__feedback

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotBehavior_Feedback(metaclass=Metaclass_RobotBehavior_Feedback):
    """Message class 'RobotBehavior_Feedback'."""

    __slots__ = [
        '_people_found',
        '_dogs_found',
        '_cats_found',
        '_last_seen_position',
    ]

    _fields_and_field_types = {
        'people_found': 'int32',
        'dogs_found': 'int32',
        'cats_found': 'int32',
        'last_seen_position': 'geometry_msgs/Pose',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.people_found = kwargs.get('people_found', int())
        self.dogs_found = kwargs.get('dogs_found', int())
        self.cats_found = kwargs.get('cats_found', int())
        from geometry_msgs.msg import Pose
        self.last_seen_position = kwargs.get('last_seen_position', Pose())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.people_found != other.people_found:
            return False
        if self.dogs_found != other.dogs_found:
            return False
        if self.cats_found != other.cats_found:
            return False
        if self.last_seen_position != other.last_seen_position:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def people_found(self):
        """Message field 'people_found'."""
        return self._people_found

    @people_found.setter
    def people_found(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'people_found' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'people_found' field must be an integer in [-2147483648, 2147483647]"
        self._people_found = value

    @builtins.property
    def dogs_found(self):
        """Message field 'dogs_found'."""
        return self._dogs_found

    @dogs_found.setter
    def dogs_found(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dogs_found' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'dogs_found' field must be an integer in [-2147483648, 2147483647]"
        self._dogs_found = value

    @builtins.property
    def cats_found(self):
        """Message field 'cats_found'."""
        return self._cats_found

    @cats_found.setter
    def cats_found(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cats_found' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cats_found' field must be an integer in [-2147483648, 2147483647]"
        self._cats_found = value

    @builtins.property
    def last_seen_position(self):
        """Message field 'last_seen_position'."""
        return self._last_seen_position

    @last_seen_position.setter
    def last_seen_position(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'last_seen_position' field must be a sub message of type 'Pose'"
        self._last_seen_position = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotBehavior_SendGoal_Request(type):
    """Metaclass of message 'RobotBehavior_SendGoal_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('second_coursework')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'second_coursework.action.RobotBehavior_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__robot_behavior__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__robot_behavior__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__robot_behavior__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__robot_behavior__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__robot_behavior__send_goal__request

            from second_coursework.action import RobotBehavior
            if RobotBehavior.Goal.__class__._TYPE_SUPPORT is None:
                RobotBehavior.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotBehavior_SendGoal_Request(metaclass=Metaclass_RobotBehavior_SendGoal_Request):
    """Message class 'RobotBehavior_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'second_coursework/RobotBehavior_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['second_coursework', 'action'], 'RobotBehavior_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from second_coursework.action._robot_behavior import RobotBehavior_Goal
        self.goal = kwargs.get('goal', RobotBehavior_Goal())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from second_coursework.action._robot_behavior import RobotBehavior_Goal
            assert \
                isinstance(value, RobotBehavior_Goal), \
                "The 'goal' field must be a sub message of type 'RobotBehavior_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotBehavior_SendGoal_Response(type):
    """Metaclass of message 'RobotBehavior_SendGoal_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('second_coursework')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'second_coursework.action.RobotBehavior_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__robot_behavior__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__robot_behavior__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__robot_behavior__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__robot_behavior__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__robot_behavior__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotBehavior_SendGoal_Response(metaclass=Metaclass_RobotBehavior_SendGoal_Response):
    """Message class 'RobotBehavior_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_RobotBehavior_SendGoal(type):
    """Metaclass of service 'RobotBehavior_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('second_coursework')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'second_coursework.action.RobotBehavior_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__robot_behavior__send_goal

            from second_coursework.action import _robot_behavior
            if _robot_behavior.Metaclass_RobotBehavior_SendGoal_Request._TYPE_SUPPORT is None:
                _robot_behavior.Metaclass_RobotBehavior_SendGoal_Request.__import_type_support__()
            if _robot_behavior.Metaclass_RobotBehavior_SendGoal_Response._TYPE_SUPPORT is None:
                _robot_behavior.Metaclass_RobotBehavior_SendGoal_Response.__import_type_support__()


class RobotBehavior_SendGoal(metaclass=Metaclass_RobotBehavior_SendGoal):
    from second_coursework.action._robot_behavior import RobotBehavior_SendGoal_Request as Request
    from second_coursework.action._robot_behavior import RobotBehavior_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotBehavior_GetResult_Request(type):
    """Metaclass of message 'RobotBehavior_GetResult_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('second_coursework')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'second_coursework.action.RobotBehavior_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__robot_behavior__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__robot_behavior__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__robot_behavior__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__robot_behavior__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__robot_behavior__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotBehavior_GetResult_Request(metaclass=Metaclass_RobotBehavior_GetResult_Request):
    """Message class 'RobotBehavior_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotBehavior_GetResult_Response(type):
    """Metaclass of message 'RobotBehavior_GetResult_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('second_coursework')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'second_coursework.action.RobotBehavior_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__robot_behavior__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__robot_behavior__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__robot_behavior__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__robot_behavior__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__robot_behavior__get_result__response

            from second_coursework.action import RobotBehavior
            if RobotBehavior.Result.__class__._TYPE_SUPPORT is None:
                RobotBehavior.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotBehavior_GetResult_Response(metaclass=Metaclass_RobotBehavior_GetResult_Response):
    """Message class 'RobotBehavior_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'second_coursework/RobotBehavior_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['second_coursework', 'action'], 'RobotBehavior_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from second_coursework.action._robot_behavior import RobotBehavior_Result
        self.result = kwargs.get('result', RobotBehavior_Result())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from second_coursework.action._robot_behavior import RobotBehavior_Result
            assert \
                isinstance(value, RobotBehavior_Result), \
                "The 'result' field must be a sub message of type 'RobotBehavior_Result'"
        self._result = value


class Metaclass_RobotBehavior_GetResult(type):
    """Metaclass of service 'RobotBehavior_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('second_coursework')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'second_coursework.action.RobotBehavior_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__robot_behavior__get_result

            from second_coursework.action import _robot_behavior
            if _robot_behavior.Metaclass_RobotBehavior_GetResult_Request._TYPE_SUPPORT is None:
                _robot_behavior.Metaclass_RobotBehavior_GetResult_Request.__import_type_support__()
            if _robot_behavior.Metaclass_RobotBehavior_GetResult_Response._TYPE_SUPPORT is None:
                _robot_behavior.Metaclass_RobotBehavior_GetResult_Response.__import_type_support__()


class RobotBehavior_GetResult(metaclass=Metaclass_RobotBehavior_GetResult):
    from second_coursework.action._robot_behavior import RobotBehavior_GetResult_Request as Request
    from second_coursework.action._robot_behavior import RobotBehavior_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotBehavior_FeedbackMessage(type):
    """Metaclass of message 'RobotBehavior_FeedbackMessage'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('second_coursework')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'second_coursework.action.RobotBehavior_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__robot_behavior__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__robot_behavior__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__robot_behavior__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__robot_behavior__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__robot_behavior__feedback_message

            from second_coursework.action import RobotBehavior
            if RobotBehavior.Feedback.__class__._TYPE_SUPPORT is None:
                RobotBehavior.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotBehavior_FeedbackMessage(metaclass=Metaclass_RobotBehavior_FeedbackMessage):
    """Message class 'RobotBehavior_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'second_coursework/RobotBehavior_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['second_coursework', 'action'], 'RobotBehavior_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from second_coursework.action._robot_behavior import RobotBehavior_Feedback
        self.feedback = kwargs.get('feedback', RobotBehavior_Feedback())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from second_coursework.action._robot_behavior import RobotBehavior_Feedback
            assert \
                isinstance(value, RobotBehavior_Feedback), \
                "The 'feedback' field must be a sub message of type 'RobotBehavior_Feedback'"
        self._feedback = value


class Metaclass_RobotBehavior(type):
    """Metaclass of action 'RobotBehavior'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('second_coursework')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'second_coursework.action.RobotBehavior')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__robot_behavior

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from second_coursework.action import _robot_behavior
            if _robot_behavior.Metaclass_RobotBehavior_SendGoal._TYPE_SUPPORT is None:
                _robot_behavior.Metaclass_RobotBehavior_SendGoal.__import_type_support__()
            if _robot_behavior.Metaclass_RobotBehavior_GetResult._TYPE_SUPPORT is None:
                _robot_behavior.Metaclass_RobotBehavior_GetResult.__import_type_support__()
            if _robot_behavior.Metaclass_RobotBehavior_FeedbackMessage._TYPE_SUPPORT is None:
                _robot_behavior.Metaclass_RobotBehavior_FeedbackMessage.__import_type_support__()


class RobotBehavior(metaclass=Metaclass_RobotBehavior):

    # The goal message defined in the action definition.
    from second_coursework.action._robot_behavior import RobotBehavior_Goal as Goal
    # The result message defined in the action definition.
    from second_coursework.action._robot_behavior import RobotBehavior_Result as Result
    # The feedback message defined in the action definition.
    from second_coursework.action._robot_behavior import RobotBehavior_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from second_coursework.action._robot_behavior import RobotBehavior_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from second_coursework.action._robot_behavior import RobotBehavior_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from second_coursework.action._robot_behavior import RobotBehavior_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
