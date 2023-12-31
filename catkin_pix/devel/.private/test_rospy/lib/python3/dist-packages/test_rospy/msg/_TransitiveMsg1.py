# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from test_rospy/TransitiveMsg1.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import test_rosmaster.msg
import test_rospy.msg

class TransitiveMsg1(genpy.Message):
  _md5sum = "72751523a989ee2c7a44c006464315e9"
  _type = "test_rospy/TransitiveMsg1"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """TransitiveMsg2 msg2


================================================================================
MSG: test_rospy/TransitiveMsg2
test_rosmaster/Composite data

================================================================================
MSG: test_rosmaster/Composite
# composite message. required for testing import calculation in generators
CompositeA a
CompositeB b

================================================================================
MSG: test_rosmaster/CompositeA
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: test_rosmaster/CompositeB
# copy of geometry_msgs/Point for testing
float64 x
float64 y
float64 z
"""
  __slots__ = ['msg2']
  _slot_types = ['test_rospy/TransitiveMsg2']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       msg2

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(TransitiveMsg1, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.msg2 is None:
        self.msg2 = test_rospy.msg.TransitiveMsg2()
    else:
      self.msg2 = test_rospy.msg.TransitiveMsg2()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_7d().pack(_x.msg2.data.a.x, _x.msg2.data.a.y, _x.msg2.data.a.z, _x.msg2.data.a.w, _x.msg2.data.b.x, _x.msg2.data.b.y, _x.msg2.data.b.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.msg2 is None:
        self.msg2 = test_rospy.msg.TransitiveMsg2()
      end = 0
      _x = self
      start = end
      end += 56
      (_x.msg2.data.a.x, _x.msg2.data.a.y, _x.msg2.data.a.z, _x.msg2.data.a.w, _x.msg2.data.b.x, _x.msg2.data.b.y, _x.msg2.data.b.z,) = _get_struct_7d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_7d().pack(_x.msg2.data.a.x, _x.msg2.data.a.y, _x.msg2.data.a.z, _x.msg2.data.a.w, _x.msg2.data.b.x, _x.msg2.data.b.y, _x.msg2.data.b.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.msg2 is None:
        self.msg2 = test_rospy.msg.TransitiveMsg2()
      end = 0
      _x = self
      start = end
      end += 56
      (_x.msg2.data.a.x, _x.msg2.data.a.y, _x.msg2.data.a.z, _x.msg2.data.a.w, _x.msg2.data.b.x, _x.msg2.data.b.y, _x.msg2.data.b.z,) = _get_struct_7d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_7d = None
def _get_struct_7d():
    global _struct_7d
    if _struct_7d is None:
        _struct_7d = struct.Struct("<7d")
    return _struct_7d
