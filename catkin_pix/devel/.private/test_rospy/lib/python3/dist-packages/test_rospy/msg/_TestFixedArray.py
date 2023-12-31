# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from test_rospy/TestFixedArray.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class TestFixedArray(genpy.Message):
  _md5sum = "1557473dc09f1a01a00123a713c822a7"
  _type = "test_rospy/TestFixedArray"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """float32[1] f32_1
float32[3] f32_3
float64[1] f64_1
float64[3] f64_3
int8[1] i8_1
int8[3] i8_3
uint8[1] u8_1
uint8[3] u8_3
int32[1] i32_1
int32[3] i32_3
uint32[1] u32_1
uint32[3] u32_3
string[1] s_1
string[3] s_3
bool[1] b_1
bool[3] b_3"""
  __slots__ = ['f32_1','f32_3','f64_1','f64_3','i8_1','i8_3','u8_1','u8_3','i32_1','i32_3','u32_1','u32_3','s_1','s_3','b_1','b_3']
  _slot_types = ['float32[1]','float32[3]','float64[1]','float64[3]','int8[1]','int8[3]','uint8[1]','uint8[3]','int32[1]','int32[3]','uint32[1]','uint32[3]','string[1]','string[3]','bool[1]','bool[3]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       f32_1,f32_3,f64_1,f64_3,i8_1,i8_3,u8_1,u8_3,i32_1,i32_3,u32_1,u32_3,s_1,s_3,b_1,b_3

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(TestFixedArray, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.f32_1 is None:
        self.f32_1 = [0.] * 1
      if self.f32_3 is None:
        self.f32_3 = [0.] * 3
      if self.f64_1 is None:
        self.f64_1 = [0.] * 1
      if self.f64_3 is None:
        self.f64_3 = [0.] * 3
      if self.i8_1 is None:
        self.i8_1 = [0] * 1
      if self.i8_3 is None:
        self.i8_3 = [0] * 3
      if self.u8_1 is None:
        self.u8_1 = b'\0'*1
      if self.u8_3 is None:
        self.u8_3 = b'\0'*3
      if self.i32_1 is None:
        self.i32_1 = [0] * 1
      if self.i32_3 is None:
        self.i32_3 = [0] * 3
      if self.u32_1 is None:
        self.u32_1 = [0] * 1
      if self.u32_3 is None:
        self.u32_3 = [0] * 3
      if self.s_1 is None:
        self.s_1 = [''] * 1
      if self.s_3 is None:
        self.s_3 = [''] * 3
      if self.b_1 is None:
        self.b_1 = [False] * 1
      if self.b_3 is None:
        self.b_3 = [False] * 3
    else:
      self.f32_1 = [0.] * 1
      self.f32_3 = [0.] * 3
      self.f64_1 = [0.] * 1
      self.f64_3 = [0.] * 3
      self.i8_1 = [0] * 1
      self.i8_3 = [0] * 3
      self.u8_1 = b'\0'*1
      self.u8_3 = b'\0'*3
      self.i32_1 = [0] * 1
      self.i32_3 = [0] * 3
      self.u32_1 = [0] * 1
      self.u32_3 = [0] * 3
      self.s_1 = [''] * 1
      self.s_3 = [''] * 3
      self.b_1 = [False] * 1
      self.b_3 = [False] * 3

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
      buff.write(_get_struct_1f().pack(*self.f32_1))
      buff.write(_get_struct_3f().pack(*self.f32_3))
      buff.write(_get_struct_1d().pack(*self.f64_1))
      buff.write(_get_struct_3d().pack(*self.f64_3))
      buff.write(_get_struct_1b().pack(*self.i8_1))
      buff.write(_get_struct_3b().pack(*self.i8_3))
      _x = self.u8_1
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(_get_struct_1B().pack(*_x))
      else:
        buff.write(_get_struct_1s().pack(_x))
      _x = self.u8_3
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(_get_struct_3B().pack(*_x))
      else:
        buff.write(_get_struct_3s().pack(_x))
      buff.write(_get_struct_1i().pack(*self.i32_1))
      buff.write(_get_struct_3i().pack(*self.i32_3))
      buff.write(_get_struct_1I().pack(*self.u32_1))
      buff.write(_get_struct_3I().pack(*self.u32_3))
      if len(self.s_1) != 1:
        self._check_types(ValueError("Expecting %s items but found %s when writing '%s'" % (1, len(self.s_1), 'self.s_1')))
      for val1 in self.s_1:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        buff.write(struct.Struct('<I%ss'%length).pack(length, val1))
      if len(self.s_3) != 3:
        self._check_types(ValueError("Expecting %s items but found %s when writing '%s'" % (3, len(self.s_3), 'self.s_3')))
      for val1 in self.s_3:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        buff.write(struct.Struct('<I%ss'%length).pack(length, val1))
      buff.write(_get_struct_1B().pack(*self.b_1))
      buff.write(_get_struct_3B().pack(*self.b_3))
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
      end = 0
      start = end
      end += 4
      self.f32_1 = _get_struct_1f().unpack(str[start:end])
      start = end
      end += 12
      self.f32_3 = _get_struct_3f().unpack(str[start:end])
      start = end
      end += 8
      self.f64_1 = _get_struct_1d().unpack(str[start:end])
      start = end
      end += 24
      self.f64_3 = _get_struct_3d().unpack(str[start:end])
      start = end
      end += 1
      self.i8_1 = _get_struct_1b().unpack(str[start:end])
      start = end
      end += 3
      self.i8_3 = _get_struct_3b().unpack(str[start:end])
      start = end
      end += 1
      self.u8_1 = str[start:end]
      start = end
      end += 3
      self.u8_3 = str[start:end]
      start = end
      end += 4
      self.i32_1 = _get_struct_1i().unpack(str[start:end])
      start = end
      end += 12
      self.i32_3 = _get_struct_3i().unpack(str[start:end])
      start = end
      end += 4
      self.u32_1 = _get_struct_1I().unpack(str[start:end])
      start = end
      end += 12
      self.u32_3 = _get_struct_3I().unpack(str[start:end])
      self.s_1 = []
      for i in range(0, 1):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1 = str[start:end]
        self.s_1.append(val1)
      self.s_3 = []
      for i in range(0, 3):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1 = str[start:end]
        self.s_3.append(val1)
      start = end
      end += 1
      self.b_1 = _get_struct_1B().unpack(str[start:end])
      self.b_1 = list(map(bool, self.b_1))
      start = end
      end += 3
      self.b_3 = _get_struct_3B().unpack(str[start:end])
      self.b_3 = list(map(bool, self.b_3))
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
      buff.write(self.f32_1.tostring())
      buff.write(self.f32_3.tostring())
      buff.write(self.f64_1.tostring())
      buff.write(self.f64_3.tostring())
      buff.write(self.i8_1.tostring())
      buff.write(self.i8_3.tostring())
      _x = self.u8_1
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(_get_struct_1B().pack(*_x))
      else:
        buff.write(_get_struct_1s().pack(_x))
      _x = self.u8_3
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(_get_struct_3B().pack(*_x))
      else:
        buff.write(_get_struct_3s().pack(_x))
      buff.write(self.i32_1.tostring())
      buff.write(self.i32_3.tostring())
      buff.write(self.u32_1.tostring())
      buff.write(self.u32_3.tostring())
      if len(self.s_1) != 1:
        self._check_types(ValueError("Expecting %s items but found %s when writing '%s'" % (1, len(self.s_1), 'self.s_1')))
      for val1 in self.s_1:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        buff.write(struct.Struct('<I%ss'%length).pack(length, val1))
      if len(self.s_3) != 3:
        self._check_types(ValueError("Expecting %s items but found %s when writing '%s'" % (3, len(self.s_3), 'self.s_3')))
      for val1 in self.s_3:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        buff.write(struct.Struct('<I%ss'%length).pack(length, val1))
      buff.write(self.b_1.tostring())
      buff.write(self.b_3.tostring())
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
      end = 0
      start = end
      end += 4
      self.f32_1 = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=1)
      start = end
      end += 12
      self.f32_3 = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=3)
      start = end
      end += 8
      self.f64_1 = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=1)
      start = end
      end += 24
      self.f64_3 = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=3)
      start = end
      end += 1
      self.i8_1 = numpy.frombuffer(str[start:end], dtype=numpy.int8, count=1)
      start = end
      end += 3
      self.i8_3 = numpy.frombuffer(str[start:end], dtype=numpy.int8, count=3)
      start = end
      end += 1
      self.u8_1 = str[start:end]
      start = end
      end += 3
      self.u8_3 = str[start:end]
      start = end
      end += 4
      self.i32_1 = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=1)
      start = end
      end += 12
      self.i32_3 = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=3)
      start = end
      end += 4
      self.u32_1 = numpy.frombuffer(str[start:end], dtype=numpy.uint32, count=1)
      start = end
      end += 12
      self.u32_3 = numpy.frombuffer(str[start:end], dtype=numpy.uint32, count=3)
      self.s_1 = []
      for i in range(0, 1):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1 = str[start:end]
        self.s_1.append(val1)
      self.s_3 = []
      for i in range(0, 3):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1 = str[start:end]
        self.s_3.append(val1)
      start = end
      end += 1
      self.b_1 = numpy.frombuffer(str[start:end], dtype=numpy.bool, count=1)
      self.b_1 = list(map(bool, self.b_1))
      start = end
      end += 3
      self.b_3 = numpy.frombuffer(str[start:end], dtype=numpy.bool, count=3)
      self.b_3 = list(map(bool, self.b_3))
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_1B = None
def _get_struct_1B():
    global _struct_1B
    if _struct_1B is None:
        _struct_1B = struct.Struct("<1B")
    return _struct_1B
_struct_1I = None
def _get_struct_1I():
    global _struct_1I
    if _struct_1I is None:
        _struct_1I = struct.Struct("<1I")
    return _struct_1I
_struct_1b = None
def _get_struct_1b():
    global _struct_1b
    if _struct_1b is None:
        _struct_1b = struct.Struct("<1b")
    return _struct_1b
_struct_1d = None
def _get_struct_1d():
    global _struct_1d
    if _struct_1d is None:
        _struct_1d = struct.Struct("<1d")
    return _struct_1d
_struct_1f = None
def _get_struct_1f():
    global _struct_1f
    if _struct_1f is None:
        _struct_1f = struct.Struct("<1f")
    return _struct_1f
_struct_1i = None
def _get_struct_1i():
    global _struct_1i
    if _struct_1i is None:
        _struct_1i = struct.Struct("<1i")
    return _struct_1i
_struct_1s = None
def _get_struct_1s():
    global _struct_1s
    if _struct_1s is None:
        _struct_1s = struct.Struct("<1s")
    return _struct_1s
_struct_3B = None
def _get_struct_3B():
    global _struct_3B
    if _struct_3B is None:
        _struct_3B = struct.Struct("<3B")
    return _struct_3B
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_3b = None
def _get_struct_3b():
    global _struct_3b
    if _struct_3b is None:
        _struct_3b = struct.Struct("<3b")
    return _struct_3b
_struct_3d = None
def _get_struct_3d():
    global _struct_3d
    if _struct_3d is None:
        _struct_3d = struct.Struct("<3d")
    return _struct_3d
_struct_3f = None
def _get_struct_3f():
    global _struct_3f
    if _struct_3f is None:
        _struct_3f = struct.Struct("<3f")
    return _struct_3f
_struct_3i = None
def _get_struct_3i():
    global _struct_3i
    if _struct_3i is None:
        _struct_3i = struct.Struct("<3i")
    return _struct_3i
_struct_3s = None
def _get_struct_3s():
    global _struct_3s
    if _struct_3s is None:
        _struct_3s = struct.Struct("<3s")
    return _struct_3s
