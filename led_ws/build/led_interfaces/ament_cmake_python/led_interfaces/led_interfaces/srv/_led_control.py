# generated from rosidl_generator_py/resource/_idl.py.em
# with input from led_interfaces:srv/LedControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LedControl_Request(type):
    """Metaclass of message 'LedControl_Request'."""

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
            module = import_type_support('led_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'led_interfaces.srv.LedControl_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__led_control__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__led_control__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__led_control__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__led_control__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__led_control__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LedControl_Request(metaclass=Metaclass_LedControl_Request):
    """Message class 'LedControl_Request'."""

    __slots__ = [
        '_pattern',
        '_color_r',
        '_color_g',
        '_color_b',
    ]

    _fields_and_field_types = {
        'pattern': 'string',
        'color_r': 'int32',
        'color_g': 'int32',
        'color_b': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pattern = kwargs.get('pattern', str())
        self.color_r = kwargs.get('color_r', int())
        self.color_g = kwargs.get('color_g', int())
        self.color_b = kwargs.get('color_b', int())

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
        if self.pattern != other.pattern:
            return False
        if self.color_r != other.color_r:
            return False
        if self.color_g != other.color_g:
            return False
        if self.color_b != other.color_b:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pattern(self):
        """Message field 'pattern'."""
        return self._pattern

    @pattern.setter
    def pattern(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'pattern' field must be of type 'str'"
        self._pattern = value

    @builtins.property
    def color_r(self):
        """Message field 'color_r'."""
        return self._color_r

    @color_r.setter
    def color_r(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'color_r' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'color_r' field must be an integer in [-2147483648, 2147483647]"
        self._color_r = value

    @builtins.property
    def color_g(self):
        """Message field 'color_g'."""
        return self._color_g

    @color_g.setter
    def color_g(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'color_g' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'color_g' field must be an integer in [-2147483648, 2147483647]"
        self._color_g = value

    @builtins.property
    def color_b(self):
        """Message field 'color_b'."""
        return self._color_b

    @color_b.setter
    def color_b(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'color_b' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'color_b' field must be an integer in [-2147483648, 2147483647]"
        self._color_b = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_LedControl_Response(type):
    """Metaclass of message 'LedControl_Response'."""

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
            module = import_type_support('led_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'led_interfaces.srv.LedControl_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__led_control__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__led_control__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__led_control__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__led_control__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__led_control__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LedControl_Response(metaclass=Metaclass_LedControl_Response):
    """Message class 'LedControl_Response'."""

    __slots__ = [
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

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
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
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

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_LedControl(type):
    """Metaclass of service 'LedControl'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('led_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'led_interfaces.srv.LedControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__led_control

            from led_interfaces.srv import _led_control
            if _led_control.Metaclass_LedControl_Request._TYPE_SUPPORT is None:
                _led_control.Metaclass_LedControl_Request.__import_type_support__()
            if _led_control.Metaclass_LedControl_Response._TYPE_SUPPORT is None:
                _led_control.Metaclass_LedControl_Response.__import_type_support__()


class LedControl(metaclass=Metaclass_LedControl):
    from led_interfaces.srv._led_control import LedControl_Request as Request
    from led_interfaces.srv._led_control import LedControl_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
