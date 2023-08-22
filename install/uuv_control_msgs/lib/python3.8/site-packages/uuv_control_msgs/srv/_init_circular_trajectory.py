# generated from rosidl_generator_py/resource/_idl.py.em
# with input from uuv_control_msgs:srv/InitCircularTrajectory.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InitCircularTrajectory_Request(type):
    """Metaclass of message 'InitCircularTrajectory_Request'."""

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
            module = import_type_support('uuv_control_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'uuv_control_msgs.srv.InitCircularTrajectory_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__init_circular_trajectory__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__init_circular_trajectory__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__init_circular_trajectory__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__init_circular_trajectory__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__init_circular_trajectory__request

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InitCircularTrajectory_Request(metaclass=Metaclass_InitCircularTrajectory_Request):
    """Message class 'InitCircularTrajectory_Request'."""

    __slots__ = [
        '_start_time',
        '_start_now',
        '_radius',
        '_center',
        '_is_clockwise',
        '_angle_offset',
        '_n_points',
        '_heading_offset',
        '_max_forward_speed',
        '_duration',
    ]

    _fields_and_field_types = {
        'start_time': 'builtin_interfaces/Time',
        'start_now': 'boolean',
        'radius': 'double',
        'center': 'geometry_msgs/Point',
        'is_clockwise': 'boolean',
        'angle_offset': 'double',
        'n_points': 'int32',
        'heading_offset': 'double',
        'max_forward_speed': 'double',
        'duration': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.start_time = kwargs.get('start_time', Time())
        self.start_now = kwargs.get('start_now', bool())
        self.radius = kwargs.get('radius', float())
        from geometry_msgs.msg import Point
        self.center = kwargs.get('center', Point())
        self.is_clockwise = kwargs.get('is_clockwise', bool())
        self.angle_offset = kwargs.get('angle_offset', float())
        self.n_points = kwargs.get('n_points', int())
        self.heading_offset = kwargs.get('heading_offset', float())
        self.max_forward_speed = kwargs.get('max_forward_speed', float())
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
        if self.start_time != other.start_time:
            return False
        if self.start_now != other.start_now:
            return False
        if self.radius != other.radius:
            return False
        if self.center != other.center:
            return False
        if self.is_clockwise != other.is_clockwise:
            return False
        if self.angle_offset != other.angle_offset:
            return False
        if self.n_points != other.n_points:
            return False
        if self.heading_offset != other.heading_offset:
            return False
        if self.max_forward_speed != other.max_forward_speed:
            return False
        if self.duration != other.duration:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def start_time(self):
        """Message field 'start_time'."""
        return self._start_time

    @start_time.setter
    def start_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'start_time' field must be a sub message of type 'Time'"
        self._start_time = value

    @property
    def start_now(self):
        """Message field 'start_now'."""
        return self._start_now

    @start_now.setter
    def start_now(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'start_now' field must be of type 'bool'"
        self._start_now = value

    @property
    def radius(self):
        """Message field 'radius'."""
        return self._radius

    @radius.setter
    def radius(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'radius' field must be of type 'float'"
        self._radius = value

    @property
    def center(self):
        """Message field 'center'."""
        return self._center

    @center.setter
    def center(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'center' field must be a sub message of type 'Point'"
        self._center = value

    @property
    def is_clockwise(self):
        """Message field 'is_clockwise'."""
        return self._is_clockwise

    @is_clockwise.setter
    def is_clockwise(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_clockwise' field must be of type 'bool'"
        self._is_clockwise = value

    @property
    def angle_offset(self):
        """Message field 'angle_offset'."""
        return self._angle_offset

    @angle_offset.setter
    def angle_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_offset' field must be of type 'float'"
        self._angle_offset = value

    @property
    def n_points(self):
        """Message field 'n_points'."""
        return self._n_points

    @n_points.setter
    def n_points(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'n_points' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'n_points' field must be an integer in [-2147483648, 2147483647]"
        self._n_points = value

    @property
    def heading_offset(self):
        """Message field 'heading_offset'."""
        return self._heading_offset

    @heading_offset.setter
    def heading_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading_offset' field must be of type 'float'"
        self._heading_offset = value

    @property
    def max_forward_speed(self):
        """Message field 'max_forward_speed'."""
        return self._max_forward_speed

    @max_forward_speed.setter
    def max_forward_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_forward_speed' field must be of type 'float'"
        self._max_forward_speed = value

    @property
    def duration(self):
        """Message field 'duration'."""
        return self._duration

    @duration.setter
    def duration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'duration' field must be of type 'float'"
        self._duration = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_InitCircularTrajectory_Response(type):
    """Metaclass of message 'InitCircularTrajectory_Response'."""

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
            module = import_type_support('uuv_control_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'uuv_control_msgs.srv.InitCircularTrajectory_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__init_circular_trajectory__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__init_circular_trajectory__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__init_circular_trajectory__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__init_circular_trajectory__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__init_circular_trajectory__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InitCircularTrajectory_Response(metaclass=Metaclass_InitCircularTrajectory_Response):
    """Message class 'InitCircularTrajectory_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_InitCircularTrajectory(type):
    """Metaclass of service 'InitCircularTrajectory'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('uuv_control_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'uuv_control_msgs.srv.InitCircularTrajectory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__init_circular_trajectory

            from uuv_control_msgs.srv import _init_circular_trajectory
            if _init_circular_trajectory.Metaclass_InitCircularTrajectory_Request._TYPE_SUPPORT is None:
                _init_circular_trajectory.Metaclass_InitCircularTrajectory_Request.__import_type_support__()
            if _init_circular_trajectory.Metaclass_InitCircularTrajectory_Response._TYPE_SUPPORT is None:
                _init_circular_trajectory.Metaclass_InitCircularTrajectory_Response.__import_type_support__()


class InitCircularTrajectory(metaclass=Metaclass_InitCircularTrajectory):
    from uuv_control_msgs.srv._init_circular_trajectory import InitCircularTrajectory_Request as Request
    from uuv_control_msgs.srv._init_circular_trajectory import InitCircularTrajectory_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
