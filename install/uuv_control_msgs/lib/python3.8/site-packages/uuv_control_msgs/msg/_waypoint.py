# generated from rosidl_generator_py/resource/_idl.py.em
# with input from uuv_control_msgs:msg/Waypoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Waypoint(type):
    """Metaclass of message 'Waypoint'."""

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
                'uuv_control_msgs.msg.Waypoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__waypoint
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__waypoint
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__waypoint
            cls._TYPE_SUPPORT = module.type_support_msg__msg__waypoint
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__waypoint

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Waypoint(metaclass=Metaclass_Waypoint):
    """Message class 'Waypoint'."""

    __slots__ = [
        '_header',
        '_point',
        '_max_forward_speed',
        '_heading_offset',
        '_use_fixed_heading',
        '_radius_of_acceptance',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'point': 'geometry_msgs/Point',
        'max_forward_speed': 'double',
        'heading_offset': 'double',
        'use_fixed_heading': 'boolean',
        'radius_of_acceptance': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from geometry_msgs.msg import Point
        self.point = kwargs.get('point', Point())
        self.max_forward_speed = kwargs.get('max_forward_speed', float())
        self.heading_offset = kwargs.get('heading_offset', float())
        self.use_fixed_heading = kwargs.get('use_fixed_heading', bool())
        self.radius_of_acceptance = kwargs.get('radius_of_acceptance', float())

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
        if self.header != other.header:
            return False
        if self.point != other.point:
            return False
        if self.max_forward_speed != other.max_forward_speed:
            return False
        if self.heading_offset != other.heading_offset:
            return False
        if self.use_fixed_heading != other.use_fixed_heading:
            return False
        if self.radius_of_acceptance != other.radius_of_acceptance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def point(self):
        """Message field 'point'."""
        return self._point

    @point.setter
    def point(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'point' field must be a sub message of type 'Point'"
        self._point = value

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
    def use_fixed_heading(self):
        """Message field 'use_fixed_heading'."""
        return self._use_fixed_heading

    @use_fixed_heading.setter
    def use_fixed_heading(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'use_fixed_heading' field must be of type 'bool'"
        self._use_fixed_heading = value

    @property
    def radius_of_acceptance(self):
        """Message field 'radius_of_acceptance'."""
        return self._radius_of_acceptance

    @radius_of_acceptance.setter
    def radius_of_acceptance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'radius_of_acceptance' field must be of type 'float'"
        self._radius_of_acceptance = value
