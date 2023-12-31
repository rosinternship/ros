# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from test_rospy/EmbedTest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg
import test_rospy.msg

class EmbedTest(genpy.Message):
  _md5sum = "f8b1fc6a0f70f541c9d6bd2886b9e249"
  _type = "test_rospy/EmbedTest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """std_msgs/String str1
std_msgs/Int32 int1
std_msgs/Int32[] ints
Val val
Val[] vals
ArrayVal[] arrayval

================================================================================
MSG: std_msgs/String
string data

================================================================================
MSG: std_msgs/Int32
int32 data
================================================================================
MSG: test_rospy/Val
string val
================================================================================
MSG: test_rospy/ArrayVal
Val[] vals
#Val[10] vals_fixed
"""
  __slots__ = ['str1','int1','ints','val','vals','arrayval']
  _slot_types = ['std_msgs/String','std_msgs/Int32','std_msgs/Int32[]','test_rospy/Val','test_rospy/Val[]','test_rospy/ArrayVal[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       str1,int1,ints,val,vals,arrayval

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(EmbedTest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.str1 is None:
        self.str1 = std_msgs.msg.String()
      if self.int1 is None:
        self.int1 = std_msgs.msg.Int32()
      if self.ints is None:
        self.ints = []
      if self.val is None:
        self.val = test_rospy.msg.Val()
      if self.vals is None:
        self.vals = []
      if self.arrayval is None:
        self.arrayval = []
    else:
      self.str1 = std_msgs.msg.String()
      self.int1 = std_msgs.msg.Int32()
      self.ints = []
      self.val = test_rospy.msg.Val()
      self.vals = []
      self.arrayval = []

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
      _x = self.str1.data
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.int1.data
      buff.write(_get_struct_i().pack(_x))
      length = len(self.ints)
      buff.write(_struct_I.pack(length))
      for val1 in self.ints:
        _x = val1.data
        buff.write(_get_struct_i().pack(_x))
      _x = self.val.val
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.vals)
      buff.write(_struct_I.pack(length))
      for val1 in self.vals:
        _x = val1.val
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.arrayval)
      buff.write(_struct_I.pack(length))
      for val1 in self.arrayval:
        length = len(val1.vals)
        buff.write(_struct_I.pack(length))
        for val2 in val1.vals:
          _x = val2.val
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
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
      if self.str1 is None:
        self.str1 = std_msgs.msg.String()
      if self.int1 is None:
        self.int1 = std_msgs.msg.Int32()
      if self.ints is None:
        self.ints = None
      if self.val is None:
        self.val = test_rospy.msg.Val()
      if self.vals is None:
        self.vals = None
      if self.arrayval is None:
        self.arrayval = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.str1.data = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.str1.data = str[start:end]
      start = end
      end += 4
      (self.int1.data,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.ints = []
      for i in range(0, length):
        val1 = std_msgs.msg.Int32()
        start = end
        end += 4
        (val1.data,) = _get_struct_i().unpack(str[start:end])
        self.ints.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.val.val = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.val.val = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.vals = []
      for i in range(0, length):
        val1 = test_rospy.msg.Val()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.val = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.val = str[start:end]
        self.vals.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.arrayval = []
      for i in range(0, length):
        val1 = test_rospy.msg.ArrayVal()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.vals = []
        for i in range(0, length):
          val2 = test_rospy.msg.Val()
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2.val = str[start:end].decode('utf-8', 'rosmsg')
          else:
            val2.val = str[start:end]
          val1.vals.append(val2)
        self.arrayval.append(val1)
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
      _x = self.str1.data
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.int1.data
      buff.write(_get_struct_i().pack(_x))
      length = len(self.ints)
      buff.write(_struct_I.pack(length))
      for val1 in self.ints:
        _x = val1.data
        buff.write(_get_struct_i().pack(_x))
      _x = self.val.val
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.vals)
      buff.write(_struct_I.pack(length))
      for val1 in self.vals:
        _x = val1.val
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.arrayval)
      buff.write(_struct_I.pack(length))
      for val1 in self.arrayval:
        length = len(val1.vals)
        buff.write(_struct_I.pack(length))
        for val2 in val1.vals:
          _x = val2.val
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
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
      if self.str1 is None:
        self.str1 = std_msgs.msg.String()
      if self.int1 is None:
        self.int1 = std_msgs.msg.Int32()
      if self.ints is None:
        self.ints = None
      if self.val is None:
        self.val = test_rospy.msg.Val()
      if self.vals is None:
        self.vals = None
      if self.arrayval is None:
        self.arrayval = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.str1.data = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.str1.data = str[start:end]
      start = end
      end += 4
      (self.int1.data,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.ints = []
      for i in range(0, length):
        val1 = std_msgs.msg.Int32()
        start = end
        end += 4
        (val1.data,) = _get_struct_i().unpack(str[start:end])
        self.ints.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.val.val = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.val.val = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.vals = []
      for i in range(0, length):
        val1 = test_rospy.msg.Val()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.val = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.val = str[start:end]
        self.vals.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.arrayval = []
      for i in range(0, length):
        val1 = test_rospy.msg.ArrayVal()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.vals = []
        for i in range(0, length):
          val2 = test_rospy.msg.Val()
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2.val = str[start:end].decode('utf-8', 'rosmsg')
          else:
            val2.val = str[start:end]
          val1.vals.append(val2)
        self.arrayval.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_i = None
def _get_struct_i():
    global _struct_i
    if _struct_i is None:
        _struct_i = struct.Struct("<i")
    return _struct_i
