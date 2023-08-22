# generated from rosidl_generator_py/resource/_idl.py.em
# with input from uuv_thruster_manager:srv/GetThrusterManagerConfig.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetThrusterManagerConfig_Request(type):
    """Metaclass of message 'GetThrusterManagerConfig_Request'."""

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
                'uuv_thruster_manager.srv.GetThrusterManagerConfig_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_thruster_manager_config__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_thruster_manager_config__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_thruster_manager_config__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_thruster_manager_config__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_thruster_manager_config__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetThrusterManagerConfig_Request(metaclass=Metaclass_GetThrusterManagerConfig_Request):
    """Message class 'GetThrusterManagerConfig_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# Member 'allocation_matrix'
import array  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetThrusterManagerConfig_Response(type):
    """Metaclass of message 'GetThrusterManagerConfig_Response'."""

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
                'uuv_thruster_manager.srv.GetThrusterManagerConfig_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_thruster_manager_config__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_thruster_manager_config__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_thruster_manager_config__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_thruster_manager_config__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_thruster_manager_config__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetThrusterManagerConfig_Response(metaclass=Metaclass_GetThrusterManagerConfig_Response):
    """Message class 'GetThrusterManagerConfig_Response'."""

    __slots__ = [
        '_tf_prefix',
        '_base_link',
        '_thruster_frame_base',
        '_thruster_topic_prefix',
        '_thruster_topic_suffix',
        '_timeout',
        '_max_thrust',
        '_n_thrusters',
        '_allocation_matrix',
    ]

    _fields_and_field_types = {
        'tf_prefix': 'string',
        'base_link': 'string',
        'thruster_frame_base': 'string',
        'thruster_topic_prefix': 'string',
        'thruster_topic_suffix': 'string',
        'timeout': 'double',
        'max_thrust': 'double',
        'n_thrusters': 'int32',
        'allocation_matrix': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.tf_prefix = kwargs.get('tf_prefix', str())
        self.base_link = kwargs.get('base_link', str())
        self.thruster_frame_base = kwargs.get('thruster_frame_base', str())
        self.thruster_topic_prefix = kwargs.get('thruster_topic_prefix', str())
        self.thruster_topic_suffix = kwargs.get('thruster_topic_suffix', str())
        self.timeout = kwargs.get('timeout', float())
        self.max_thrust = kwargs.get('max_thrust', float())
        self.n_thrusters = kwargs.get('n_thrusters', int())
        self.allocation_matrix = array.array('d', kwargs.get('allocation_matrix', []))

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
        if self.tf_prefix != other.tf_prefix:
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
        if self.n_thrusters != other.n_thrusters:
            return False
        if self.allocation_matrix != other.allocation_matrix:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def tf_prefix(self):
        """Message field 'tf_prefix'."""
        return self._tf_prefix

    @tf_prefix.setter
    def tf_prefix(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'tf_prefix' field must be of type 'str'"
        self._tf_prefix = value

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

    @property
    def n_thrusters(self):
        """Message field 'n_thrusters'."""
        return self._n_thrusters

    @n_thrusters.setter
    def n_thrusters(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'n_thrusters' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'n_thrusters' field must be an integer in [-2147483648, 2147483647]"
        self._n_thrusters = value

    @property
    def allocation_matrix(self):
        """Message field 'allocation_matrix'."""
        return self._allocation_matrix

    @allocation_matrix.setter
    def allocation_matrix(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'allocation_matrix' array.array() must have the type code of 'd'"
            self._allocation_matrix = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'allocation_matrix' field must be a set or sequence and each value of type 'float'"
        self._allocation_matrix = array.array('d', value)


class Metaclass_GetThrusterManagerConfig(type):
    """Metaclass of service 'GetThrusterManagerConfig'."""

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
                'uuv_thruster_manager.srv.GetThrusterManagerConfig')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_thruster_manager_config

            from uuv_thruster_manager.srv import _get_thruster_manager_config
            if _get_thruster_manager_config.Metaclass_GetThrusterManagerConfig_Request._TYPE_SUPPORT is None:
                _get_thruster_manager_config.Metaclass_GetThrusterManagerConfig_Request.__import_type_support__()
            if _get_thruster_manager_config.Metaclass_GetThrusterManagerConfig_Response._TYPE_SUPPORT is None:
                _get_thruster_manager_config.Metaclass_GetThrusterManagerConfig_Response.__import_type_support__()


class GetThrusterManagerConfig(metaclass=Metaclass_GetThrusterManagerConfig):
    from uuv_thruster_manager.srv._get_thruster_manager_config import GetThrusterManagerConfig_Request as Request
    from uuv_thruster_manager.srv._get_thruster_manager_config import GetThrusterManagerConfig_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
