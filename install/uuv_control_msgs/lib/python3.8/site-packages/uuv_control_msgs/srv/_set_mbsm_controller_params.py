# generated from rosidl_generator_py/resource/_idl.py.em
# with input from uuv_control_msgs:srv/SetMBSMControllerParams.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'lambda_array'
# Member 'rho_constant'
# Member 'k'
# Member 'c'
# Member 'adapt_slope'
# Member 'rho_0'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetMBSMControllerParams_Request(type):
    """Metaclass of message 'SetMBSMControllerParams_Request'."""

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
                'uuv_control_msgs.srv.SetMBSMControllerParams_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_mbsm_controller_params__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_mbsm_controller_params__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_mbsm_controller_params__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_mbsm_controller_params__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_mbsm_controller_params__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetMBSMControllerParams_Request(metaclass=Metaclass_SetMBSMControllerParams_Request):
    """Message class 'SetMBSMControllerParams_Request'."""

    __slots__ = [
        '_lambda_array',
        '_rho_constant',
        '_k',
        '_c',
        '_adapt_slope',
        '_rho_0',
        '_drift_prevent',
    ]

    _fields_and_field_types = {
        'lambda_array': 'sequence<double>',
        'rho_constant': 'sequence<double>',
        'k': 'sequence<double>',
        'c': 'sequence<double>',
        'adapt_slope': 'sequence<double>',
        'rho_0': 'sequence<double>',
        'drift_prevent': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.lambda_array = array.array('d', kwargs.get('lambda_array', []))
        self.rho_constant = array.array('d', kwargs.get('rho_constant', []))
        self.k = array.array('d', kwargs.get('k', []))
        self.c = array.array('d', kwargs.get('c', []))
        self.adapt_slope = array.array('d', kwargs.get('adapt_slope', []))
        self.rho_0 = array.array('d', kwargs.get('rho_0', []))
        self.drift_prevent = kwargs.get('drift_prevent', float())

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
        if self.lambda_array != other.lambda_array:
            return False
        if self.rho_constant != other.rho_constant:
            return False
        if self.k != other.k:
            return False
        if self.c != other.c:
            return False
        if self.adapt_slope != other.adapt_slope:
            return False
        if self.rho_0 != other.rho_0:
            return False
        if self.drift_prevent != other.drift_prevent:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def lambda_array(self):
        """Message field 'lambda_array'."""
        return self._lambda_array

    @lambda_array.setter
    def lambda_array(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'lambda_array' array.array() must have the type code of 'd'"
            self._lambda_array = value
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
                "The 'lambda_array' field must be a set or sequence and each value of type 'float'"
        self._lambda_array = array.array('d', value)

    @property
    def rho_constant(self):
        """Message field 'rho_constant'."""
        return self._rho_constant

    @rho_constant.setter
    def rho_constant(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'rho_constant' array.array() must have the type code of 'd'"
            self._rho_constant = value
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
                "The 'rho_constant' field must be a set or sequence and each value of type 'float'"
        self._rho_constant = array.array('d', value)

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
    def c(self):
        """Message field 'c'."""
        return self._c

    @c.setter
    def c(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'c' array.array() must have the type code of 'd'"
            self._c = value
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
                "The 'c' field must be a set or sequence and each value of type 'float'"
        self._c = array.array('d', value)

    @property
    def adapt_slope(self):
        """Message field 'adapt_slope'."""
        return self._adapt_slope

    @adapt_slope.setter
    def adapt_slope(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'adapt_slope' array.array() must have the type code of 'd'"
            self._adapt_slope = value
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
                "The 'adapt_slope' field must be a set or sequence and each value of type 'float'"
        self._adapt_slope = array.array('d', value)

    @property
    def rho_0(self):
        """Message field 'rho_0'."""
        return self._rho_0

    @rho_0.setter
    def rho_0(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'rho_0' array.array() must have the type code of 'd'"
            self._rho_0 = value
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
                "The 'rho_0' field must be a set or sequence and each value of type 'float'"
        self._rho_0 = array.array('d', value)

    @property
    def drift_prevent(self):
        """Message field 'drift_prevent'."""
        return self._drift_prevent

    @drift_prevent.setter
    def drift_prevent(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'drift_prevent' field must be of type 'float'"
        self._drift_prevent = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SetMBSMControllerParams_Response(type):
    """Metaclass of message 'SetMBSMControllerParams_Response'."""

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
                'uuv_control_msgs.srv.SetMBSMControllerParams_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_mbsm_controller_params__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_mbsm_controller_params__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_mbsm_controller_params__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_mbsm_controller_params__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_mbsm_controller_params__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetMBSMControllerParams_Response(metaclass=Metaclass_SetMBSMControllerParams_Response):
    """Message class 'SetMBSMControllerParams_Response'."""

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


class Metaclass_SetMBSMControllerParams(type):
    """Metaclass of service 'SetMBSMControllerParams'."""

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
                'uuv_control_msgs.srv.SetMBSMControllerParams')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_mbsm_controller_params

            from uuv_control_msgs.srv import _set_mbsm_controller_params
            if _set_mbsm_controller_params.Metaclass_SetMBSMControllerParams_Request._TYPE_SUPPORT is None:
                _set_mbsm_controller_params.Metaclass_SetMBSMControllerParams_Request.__import_type_support__()
            if _set_mbsm_controller_params.Metaclass_SetMBSMControllerParams_Response._TYPE_SUPPORT is None:
                _set_mbsm_controller_params.Metaclass_SetMBSMControllerParams_Response.__import_type_support__()


class SetMBSMControllerParams(metaclass=Metaclass_SetMBSMControllerParams):
    from uuv_control_msgs.srv._set_mbsm_controller_params import SetMBSMControllerParams_Request as Request
    from uuv_control_msgs.srv._set_mbsm_controller_params import SetMBSMControllerParams_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
