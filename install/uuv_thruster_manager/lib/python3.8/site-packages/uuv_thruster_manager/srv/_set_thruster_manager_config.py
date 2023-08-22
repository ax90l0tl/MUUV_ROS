# generated from rosidl_generator_py/resource/_idl.py.em
# with input from uuv_thruster_manager:srv/SetThrusterManagerConfig.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetThrusterManagerConfig_Request(type):
    """Metaclass of message 'SetThrusterManagerConfig_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DEFAULT_BASE_LINK': '/base_link',
        'DEFAULT_THRUSTER_FRAME_BASE': '/thruster_',
        'DEFAULT_PREFIX': 'thrusters/',
        'DEFAULT_SUFFIX': '/input',
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('uuv_thruster_manager')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'uuv_thruster_manager.srv.SetThrusterManagerConfig_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_thruster_manager_config__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_thruster_manager_config__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_thruster_manager_config__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_thruster_manager_config__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_thruster_manager_config__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DEFAULT_BASE_LINK': cls.__constants['DEFAULT_BASE_LINK'],
            'DEFAULT_THRUSTER_FRAME_BASE': cls.__constants['DEFAULT_THRUSTER_FRAME_BASE'],
            'DEFAULT_PREFIX': cls.__constants['DEFAULT_PREFIX'],
            'DEFAULT_SUFFIX': cls.__constants['DEFAULT_SUFFIX'],
        }

    @property
    def DEFAULT_BASE_LINK(self):
        """Message constant 'DEFAULT_BASE_LINK'."""
        return Metaclass_SetThrusterManagerConfig_Request.__constants['DEFAULT_BASE_LINK']

    @property
    def DEFAULT_THRUSTER_FRAME_BASE(self):
        """Message constant 'DEFAULT_THRUSTER_FRAME_BASE'."""
        return Metaclass_SetThrusterManagerConfig_Request.__constants['DEFAULT_THRUSTER_FRAME_BASE']

    @property
    def DEFAULT_PREFIX(self):
        """Message constant 'DEFAULT_PREFIX'."""
        return Metaclass_SetThrusterManagerConfig_Request.__constants['DEFAULT_PREFIX']

    @property
    def DEFAULT_SUFFIX(self):
        """Message constant 'DEFAULT_SUFFIX'."""
        return Metaclass_SetThrusterManagerConfig_Request.__constants['DEFAULT_SUFFIX']


class SetThrusterManagerConfig_Request(metaclass=Metaclass_SetThrusterManagerConfig_Request):
    """
    Message class 'SetThrusterManagerConfig_Request'.

    Constants:
      DEFAULT_BASE_LINK
      DEFAULT_THRUSTER_FRAME_BASE
      DEFAULT_PREFIX
      DEFAULT_SUFFIX
    """

    __slots__ = [
        '_base_link',
        '_thruster_frame_base',
        '_thruster_topic_prefix',
        '_thruster_topic_suffix',
        '_timeout',
        '_max_thrust',
    ]

    _fields_and_field_types = {
        'base_link': 'string',
        'thruster_frame_base': 'string',
        'thruster_topic_prefix': 'string',
        'thruster_topic_suffix': 'string',
        'timeout': 'double',
        'max_thrust': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.base_link = kwargs.get('base_link', str())
        self.thruster_frame_base = kwargs.get('thruster_frame_base', str())
        self.thruster_topic_prefix = kwargs.get('thruster_topic_prefix', str())
        self.thruster_topic_suffix = kwargs.get('thruster_topic_suffix', str())
        self.timeout = kwargs.get('timeout', float())
        self.max_thrust = kwargs.get('max_thrust', float())

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
        if self.base_link != other.base_link:
            return False
        if self.thruster_frame_base != other.thruster_frame_base:
            return False
        if self.thruster_topic_prefix != other.thruster_topic_prefix:
            return False
        if self.thruster_topic_suffix != other.thruster_topic_suffix:
            return False
        if self.timeout != other.timeout:
            return False
        if self.max_thrust != other.max_thrust:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def base_link(self):
        """Message field 'base_link'."""
        return self._base_link

    @base_link.setter
    def base_link(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'base_link' field must be of type 'str'"
        self._base_link = value

    @property
    def thruster_frame_base(self):
        """Message field 'thruster_frame_base'."""
        return self._thruster_frame_base

    @thruster_frame_base.setter
    def thruster_frame_base(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'thruster_frame_base' field must be of type 'str'"
        self._thruster_frame_base = value

    @property
    def thruster_topic_prefix(self):
        """Message field 'thruster_topic_prefix'."""
        return self._thruster_topic_prefix

    @thruster_topic_prefix.setter
    def thruster_topic_prefix(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'thruster_topic_prefix' field must be of type 'str'"
        self._thruster_topic_prefix = value

    @property
    def thruster_topic_suffix(self):
        """Message field 'thruster_topic_suffix'."""
        return self._thruster_topic_suffix

    @thruster_topic_suffix.setter
    def thruster_topic_suffix(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'thruster_topic_suffix' field must be of type 'str'"
        self._thruster_topic_suffix = value

    @property
    def timeout(self):
        """Message field 'timeout'."""
        return self._timeout

    @timeout.setter
    def timeout(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'timeout' field must be of type 'float'"
        self._timeout = value

    @property
    def max_thrust(self):
        """Message field 'max_thrust'."""
        return self._max_thrust

    @max_thrust.setter
    def max_thrust(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_thrust' field must be of type 'float'"
        self._max_thrust = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SetThrusterManagerConfig_Response(type):
    """Metaclass of message 'SetThrusterManagerConfig_Response'."""

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
            module = import_type_support('uuv_thruster_manager')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'uuv_thruster_manager.srv.SetThrusterManagerConfig_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_thruster_manager_config__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_thruster_manager_config__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_thruster_manager_config__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_thruster_manager_config__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_thruster_manager_config__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetThrusterManagerConfig_Response(metaclass=Metaclass_SetThrusterManagerConfig_Response):
    """Message class 'SetThrusterManagerConfig_Response'."""

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


class Metaclass_SetThrusterManagerConfig(type):
    """Metaclass of service 'SetThrusterManagerConfig'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('uuv_thruster_manager')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'uuv_thruster_manager.srv.SetThrusterManagerConfig')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_thruster_manager_config

            from uuv_thruster_manager.srv import _set_thruster_manager_config
            if _set_thruster_manager_config.Metaclass_SetThrusterManagerConfig_Request._TYPE_SUPPORT is None:
                _set_thruster_manager_config.Metaclass_SetThrusterManagerConfig_Request.__import_type_support__()
            if _set_thruster_manager_config.Metaclass_SetThrusterManagerConfig_Response._TYPE_SUPPORT is None:
                _set_thruster_manager_config.Metaclass_SetThrusterManagerConfig_Response.__import_type_support__()


class SetThrusterManagerConfig(metaclass=Metaclass_SetThrusterManagerConfig):
    from uuv_thruster_manager.srv._set_thruster_manager_config import SetThrusterManagerConfig_Request as Request
    from uuv_thruster_manager.srv._set_thruster_manager_config import SetThrusterManagerConfig_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
