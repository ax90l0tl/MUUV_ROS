# generated from rosidl_generator_py/resource/_idl.py.em
# with input from uuv_control_msgs:srv/GetSMControllerParams.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetSMControllerParams_Request(type):
    """Metaclass of message 'GetSMControllerParams_Request'."""

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
                'uuv_control_msgs.srv.GetSMControllerParams_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_sm_controller_params__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_sm_controller_params__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_sm_controller_params__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_sm_controller_params__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_sm_controller_params__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetSMControllerParams_Request(metaclass=Metaclass_GetSMControllerParams_Request):
    """Message class 'GetSMControllerParams_Request'."""

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

# Member 'k'
# Member 'kd'
# Member 'ki'
# Member 'slope'
import array  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetSMControllerParams_Response(type):
    """Metaclass of message 'GetSMControllerParams_Response'."""

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
                'uuv_control_msgs.srv.GetSMControllerParams_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_sm_controller_params__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_sm_controller_params__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_sm_controller_params__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_sm_controller_params__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_sm_controller_params__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetSMControllerParams_Response(metaclass=Metaclass_GetSMControllerParams_Response):
    """Message class 'GetSMControllerParams_Response'."""

    __slots__ = [
        '_k',
        '_kd',
        '_ki',
        '_slope',
    ]

    _fields_and_field_types = {
        'k': 'sequence<double>',
        'kd': 'sequence<double>',
        'ki': 'sequence<double>',
        'slope': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.k = array.array('d', kwargs.get('k', []))
        self.kd = array.array('d', kwargs.get('kd', []))
        self.ki = array.array('d', kwargs.get('ki', []))
        self.slope = array.array('d', kwargs.get('slope', []))

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
        if self.k != other.k:
            return False
        if self.kd != other.kd:
            return False
        if self.ki != other.ki:
            return False
        if self.slope != other.slope:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def k(self):
        """Message field 'k'."""
        return self._k

    @k.setter
    def k(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'k' array.array() must have the type code of 'd'"
            self._k = value
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
                "The 'k' field must be a set or sequence and each value of type 'float'"
        self._k = array.array('d', value)

    @property
    def kd(self):
        """Message field 'kd'."""
        return self._kd

    @kd.setter
    def kd(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'kd' array.array() must have the type code of 'd'"
            self._kd = value
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
                "The 'kd' field must be a set or sequence and each value of type 'float'"
        self._kd = array.array('d', value)

    @property
    def ki(self):
        """Message field 'ki'."""
        return self._ki

    @ki.setter
    def ki(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'ki' array.array() must have the type code of 'd'"
            self._ki = value
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
                "The 'ki' field must be a set or sequence and each value of type 'float'"
        self._ki = array.array('d', value)

    @property
    def slope(self):
        """Message field 'slope'."""
        return self._slope

    @slope.setter
    def slope(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'slope' array.array() must have the type code of 'd'"
            self._slope = value
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
                "The 'slope' field must be a set or sequence and each value of type 'float'"
        self._slope = array.array('d', value)


class Metaclass_GetSMControllerParams(type):
    """Metaclass of service 'GetSMControllerParams'."""

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
                'uuv_control_msgs.srv.GetSMControllerParams')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_sm_controller_params

            from uuv_control_msgs.srv import _get_sm_controller_params
            if _get_sm_controller_params.Metaclass_GetSMControllerParams_Request._TYPE_SUPPORT is None:
                _get_sm_controller_params.Metaclass_GetSMControllerParams_Request.__import_type_support__()
            if _get_sm_controller_params.Metaclass_GetSMControllerParams_Response._TYPE_SUPPORT is None:
                _get_sm_controller_params.Metaclass_GetSMControllerParams_Response.__import_type_support__()


class GetSMControllerParams(metaclass=Metaclass_GetSMControllerParams):
    from uuv_control_msgs.srv._get_sm_controller_params import GetSMControllerParams_Request as Request
    from uuv_control_msgs.srv._get_sm_controller_params import GetSMControllerParams_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
