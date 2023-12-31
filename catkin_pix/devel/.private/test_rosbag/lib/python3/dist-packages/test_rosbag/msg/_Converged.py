# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from test_rosbag/Converged.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import test_rosbag.msg

class Converged(genpy.Message):
  _md5sum = "fb364bc8a2a4b0b810763576f44bc36d"
  _type = "test_rosbag/Converged"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """float32[4]           field1 # [1.2, 3.4, 5.6, 7.8]
SimpleMigrated[4]    field2 # [11, 22, 33, 44]
================================================================================
MSG: test_rosbag/SimpleMigrated
int32 data # 42"""
  __slots__ = ['field1','field2']
  _slot_types = ['float32[4]','test_rosbag/SimpleMigrated[4]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       field1,field2

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Converged, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.field1 is None:
        self.field1 = [0.] * 4
      if self.field2 is None:
        self.field2 = [test_rosbag.msg.SimpleMigrated() for _ in range(4)]
    else:
      self.field1 = [0.] * 4
      self.field2 = [test_rosbag.msg.SimpleMigrated() for _ in range(4)]

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
      buff.write(_get_struct_4f().pack(*self.field1))
      if len(self.field2) != 4:
        self._check_types(ValueError("Expecting %s items but found %s when writing '%s'" % (4, len(self.field2), 'self.field2')))
      for val1 in self.field2:
        _x = val1.data
        buff.write(_get_struct_i().pack(_x))
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
      if self.field2 is None:
        self.field2 = None
      end = 0
      start = end
      end += 16
      self.field1 = _get_struct_4f().unpack(str[start:end])
      self.field2 = []
      for i in range(0, 4):
        val1 = test_rosbag.msg.SimpleMigrated()
        start = end
        end += 4
        (val1.data,) = _get_struct_i().unpack(str[start:end])
        self.field2.append(val1)
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
      buff.write(self.field1.tostring())
      if len(self.field2) != 4:
        self._check_types(ValueError("Expecting %s items but found %s when writing '%s'" % (4, len(self.field2), 'self.field2')))
      for val1 in self.field2:
        _x = val1.data
        buff.write(_get_struct_i().pack(_x))
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
      if self.field2 is None:
        self.field2 = None
      end = 0
      start = end
      end += 16
      self.field1 = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=4)
      self.field2 = []
      for i in range(0, 4):
        val1 = test_rosbag.msg.SimpleMigrated()
        start = end
        end += 4
        (val1.data,) = _get_struct_i().unpack(str[start:end])
        self.field2.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_4f = None
def _get_struct_4f():
    global _struct_4f
    if _struct_4f is None:
        _struct_4f = struct.Struct("<4f")
    return _struct_4f
_struct_i = None
def _get_struct_i():
    global _struct_i
    if _struct_i is None:
        _struct_i = struct.Struct("<i")
    return _struct_i
