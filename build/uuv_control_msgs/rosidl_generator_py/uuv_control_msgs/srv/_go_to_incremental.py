# generated from rosidl_generator_py/resource/_idl.py.em
# with input from uuv_control_msgs:srv/GoToIncremental.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GoToIncremental_Request(type):
    """Metaclass of message 'GoToIncremental_Request'."""

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
                'uuv_control_msgs.srv.GoToIncremental_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__go_to_incremental__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__go_to_incremental__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__go_to_incremental__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__go_to_incremental__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__go_to_incremental__request

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

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
        return Metaclass_GoToIncremental_Request.__constants['LIPB']

    @property
    def CUBIC(self):
        """Message constant 'CUBIC'."""
        return Metaclass_GoToIncremental_Request.__constants['CUBIC']

    @property
    def DUBINS(self):
        """Message constant 'DUBINS'."""
        return Metaclass_GoToIncremental_Request.__constants['DUBINS']

    @property
    def LINEAR(self):
        """Message constant 'LINEAR'."""
        return Metaclass_GoToIncremental_Request.__constants['LINEAR']


class GoToIncremental_Request(metaclass=Metaclass_GoToIncremental_Request):
    """
    Message class 'GoToIncremental_Request'.

    Constants:
      LIPB
      CUBIC
      DUBINS
      LINEAR
    """

    __slots__ = [
        '_step',
        '_max_forward_speed',
        '_interpolator',
    ]

    _fields_and_field_types = {
        'step': 'geometry_msgs/Point',
        'max_forward_speed': 'double',
        'interpolator': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Point
        self.step = kwargs.get('step', Point())
        self.max_forward_speed = kwargs.get('max_forward_speed', float())
        self.interpolator = kwargs.get('interpolator', str())

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
        if self.step != other.step:
            return False
        if self.max_forward_speed != other.max_forward_speed:
            return False
        if self.interpolator != other.interpolator:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def step(self):
        """Message field 'step'."""
        return self._step

    @step.setter
    def step(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'step' field must be a sub message of type 'Point'"
        self._step = value

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
    def interpolator(self):
        """Message field 'interpolator'."""
        return self._interpolator

    @interpolator.setter
    def interpolator(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'interpolator' field must be of type 'str'"
        self._interpolator = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GoToIncremental_Response(type):
    """Metaclass of message 'GoToIncremental_Response'."""

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
                'uuv_control_msgs.srv.GoToIncremental_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__go_to_incremental__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__go_to_incremental__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__go_to_incremental__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__go_to_incremental__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__go_to_incremental__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GoToIncremental_Response(metaclass=Metaclass_GoToIncremental_Response):
    """Message class 'GoToIncremental_Response'."""

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


class Metaclass_GoToIncremental(type):
    """Metaclass of service 'GoToIncremental'."""

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
                'uuv_control_msgs.srv.GoToIncremental')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__go_to_incremental

            from uuv_control_msgs.srv import _go_to_incremental
            if _go_to_incremental.Metaclass_GoToIncremental_Request._TYPE_SUPPORT is None:
                _go_to_incremental.Metaclass_GoToIncremental_Request.__import_type_support__()
            if _go_to_incremental.Metaclass_GoToIncremental_Response._TYPE_SUPPORT is None:
                _go_to_incremental.Metaclass_GoToIncremental_Response.__import_type_support__()


class GoToIncremental(metaclass=Metaclass_GoToIncremental):
    from uuv_control_msgs.srv._go_to_incremental import GoToIncremental_Request as Request
    from uuv_control_msgs.srv._go_to_incremental import GoToIncremental_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
