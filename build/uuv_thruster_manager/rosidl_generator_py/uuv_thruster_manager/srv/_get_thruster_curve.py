# generated from rosidl_generator_py/resource/_idl.py.em
# with input from uuv_thruster_manager:srv/GetThrusterCurve.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetThrusterCurve_Request(type):
    """Metaclass of message 'GetThrusterCurve_Request'."""

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
                'uuv_thruster_manager.srv.GetThrusterCurve_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_thruster_curve__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_thruster_curve__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_thruster_curve__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_thruster_curve__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_thruster_curve__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetThrusterCurve_Request(metaclass=Metaclass_GetThrusterCurve_Request):
    """Message class 'GetThrusterCurve_Request'."""

    __slots__ = [
        '_min',
        '_max',
        '_n_points',
    ]

    _fields_and_field_types = {
        'min': 'double',
        'max': 'double',
        'n_points': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.min = kwargs.get('min', float())
        self.max = kwargs.get('max', float())
        self.n_points = kwargs.get('n_points', int())

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
        if self.min != other.min:
            return False
        if self.max != other.max:
            return False
        if self.n_points != other.n_points:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def min(self):  # noqa: A003
        """Message field 'min'."""
        return self._min

    @min.setter  # noqa: A003
    def min(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min' field must be of type 'float'"
        self._min = value

    @property  # noqa: A003
    def max(self):  # noqa: A003
        """Message field 'max'."""
        return self._max

    @max.setter  # noqa: A003
    def max(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max' field must be of type 'float'"
        self._max = value

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


# Import statements for member types

# Member 'input'
# Member 'thrust'
import array  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetThrusterCurve_Response(type):
    """Metaclass of message 'GetThrusterCurve_Response'."""

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
                'uuv_thruster_manager.srv.GetThrusterCurve_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_thruster_curve__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_thruster_curve__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_thruster_curve__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_thruster_curve__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_thruster_curve__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetThrusterCurve_Response(metaclass=Metaclass_GetThrusterCurve_Response):
    """Message class 'GetThrusterCurve_Response'."""

    __slots__ = [
        '_input',
        '_thrust',
    ]

    _fields_and_field_types = {
        'input': 'sequence<double>',
        'thrust': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.input = array.array('d', kwargs.get('input', []))
        self.thrust = array.array('d', kwargs.get('thrust', []))

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
        if self.input != other.input:
            return False
        if self.thrust != other.thrust:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def input(self):  # noqa: A003
        """Message field 'input'."""
        return self._input

    @input.setter  # noqa: A003
    def input(self, value):  # noqa: A003
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'input' array.array() must have the type code of 'd'"
            self._input = value
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
                "The 'input' field must be a set or sequence and each value of type 'float'"
        self._input = array.array('d', value)

    @property
    def thrust(self):
        """Message field 'thrust'."""
        return self._thrust

    @thrust.setter
    def thrust(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'thrust' array.array() must have the type code of 'd'"
            self._thrust = value
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
                "The 'thrust' field must be a set or sequence and each value of type 'float'"
        self._thrust = array.array('d', value)


class Metaclass_GetThrusterCurve(type):
    """Metaclass of service 'GetThrusterCurve'."""

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
                'uuv_thruster_manager.srv.GetThrusterCurve')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_thruster_curve

            from uuv_thruster_manager.srv import _get_thruster_curve
            if _get_thruster_curve.Metaclass_GetThrusterCurve_Request._TYPE_SUPPORT is None:
                _get_thruster_curve.Metaclass_GetThrusterCurve_Request.__import_type_support__()
            if _get_thruster_curve.Metaclass_GetThrusterCurve_Response._TYPE_SUPPORT is None:
                _get_thruster_curve.Metaclass_GetThrusterCurve_Response.__import_type_support__()


class GetThrusterCurve(metaclass=Metaclass_GetThrusterCurve):
    from uuv_thruster_manager.srv._get_thruster_curve import GetThrusterCurve_Request as Request
    from uuv_thruster_manager.srv._get_thruster_curve import GetThrusterCurve_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
