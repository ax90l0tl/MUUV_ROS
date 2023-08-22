# generated from rosidl_generator_py/resource/_idl.py.em
# with input from uuv_control_msgs:srv/InitWaypointsFromFile.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InitWaypointsFromFile_Request(type):
    """Metaclass of message 'InitWaypointsFromFile_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'LIPB': 'lipb',
        'CUBIC': 'cubic',
        'DUBINS': 'dubins',
        'LINEAR': 'linear',
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
                'uuv_control_msgs.srv.InitWaypointsFromFile_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__init_waypoints_from_file__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__init_waypoints_from_file__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__init_waypoints_from_file__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__init_waypoints_from_file__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__init_waypoints_from_file__request

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from std_msgs.msg import String
            if String.__class__._TYPE_SUPPORT is None:
                String.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'LIPB': cls.__constants['LIPB'],
            'CUBIC': cls.__constants['CUBIC'],
            'DUBINS': cls.__constants['DUBINS'],
            'LINEAR': cls.__constants['LINEAR'],
        }

    @property
    def LIPB(self):
        """Message constant 'LIPB'."""
        return Metaclass_InitWaypointsFromFile_Request.__constants['LIPB']

    @property
    def CUBIC(self):
        """Message constant 'CUBIC'."""
        return Metaclass_InitWaypointsFromFile_Request.__constants['CUBIC']

    @property
    def DUBINS(self):
        """Message constant 'DUBINS'."""
        return Metaclass_InitWaypointsFromFile_Request.__constants['DUBINS']

    @property
    def LINEAR(self):
        """Message constant 'LINEAR'."""
        return Metaclass_InitWaypointsFromFile_Request.__constants['LINEAR']


class InitWaypointsFromFile_Request(metaclass=Metaclass_InitWaypointsFromFile_Request):
    """
    Message class 'InitWaypointsFromFile_Request'.

    Constants:
      LIPB
      CUBIC
      DUBINS
      LINEAR
    """

    __slots__ = [
        '_start_time',
        '_start_now',
        '_filename',
        '_interpolator',
    ]

    _fields_and_field_types = {
        'start_time': 'builtin_interfaces/Time',
        'start_now': 'boolean',
        'filename': 'std_msgs/String',
        'interpolator': 'std_msgs/String',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.start_time = kwargs.get('start_time', Time())
        self.start_now = kwargs.get('start_now', bool())
        from std_msgs.msg import String
        self.filename = kwargs.get('filename', String())
        from std_msgs.msg import String
        self.interpolator = kwargs.get('interpolator', String())

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
        if self.filename != other.filename:
            return False
        if self.interpolator != other.interpolator:
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
    def filename(self):
        """Message field 'filename'."""
        return self._filename

    @filename.setter
    def filename(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'filename' field must be a sub message of type 'String'"
        self._filename = value

    @property
    def interpolator(self):
        """Message field 'interpolator'."""
        return self._interpolator

    @interpolator.setter
    def interpolator(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'interpolator' field must be a sub message of type 'String'"
        self._interpolator = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_InitWaypointsFromFile_Response(type):
    """Metaclass of message 'InitWaypointsFromFile_Response'."""

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
                'uuv_control_msgs.srv.InitWaypointsFromFile_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__init_waypoints_from_file__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__init_waypoints_from_file__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__init_waypoints_from_file__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__init_waypoints_from_file__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__init_waypoints_from_file__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InitWaypointsFromFile_Response(metaclass=Metaclass_InitWaypointsFromFile_Response):
    """Message class 'InitWaypointsFromFile_Response'."""

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


class Metaclass_InitWaypointsFromFile(type):
    """Metaclass of service 'InitWaypointsFromFile'."""

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
                'uuv_control_msgs.srv.InitWaypointsFromFile')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__init_waypoints_from_file

            from uuv_control_msgs.srv import _init_waypoints_from_file
            if _init_waypoints_from_file.Metaclass_InitWaypointsFromFile_Request._TYPE_SUPPORT is None:
                _init_waypoints_from_file.Metaclass_InitWaypointsFromFile_Request.__import_type_support__()
            if _init_waypoints_from_file.Metaclass_InitWaypointsFromFile_Response._TYPE_SUPPORT is None:
                _init_waypoints_from_file.Metaclass_InitWaypointsFromFile_Response.__import_type_support__()


class InitWaypointsFromFile(metaclass=Metaclass_InitWaypointsFromFile):
    from uuv_control_msgs.srv._init_waypoints_from_file import InitWaypointsFromFile_Request as Request
    from uuv_control_msgs.srv._init_waypoints_from_file import InitWaypointsFromFile_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
