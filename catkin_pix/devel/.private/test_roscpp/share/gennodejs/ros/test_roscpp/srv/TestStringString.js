// Auto-generated. Do not edit!

// (in-package test_roscpp.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class TestStringStringRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.str = null;
    }
    else {
      if (initObj.hasOwnProperty('str')) {
        this.str = initObj.str
      }
      else {
        this.str = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type TestStringStringRequest
    // Serialize message field [str]
    bufferOffset = _serializer.string(obj.str, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type TestStringStringRequest
    let len;
    let data = new TestStringStringRequest(null);
    // Deserialize message field [str]
    data.str = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.str);
    return length + 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'test_roscpp/TestStringStringRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '994972b6e03928b2476860ce6c4c8e17';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string str
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new TestStringStringRequest(null);
    if (msg.str !== undefined) {
      resolved.str = msg.str;
    }
    else {
      resolved.str = ''
    }

    return resolved;
    }
};

class TestStringStringResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.str = null;
    }
    else {
      if (initObj.hasOwnProperty('str')) {
        this.str = initObj.str
      }
      else {
        this.str = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type TestStringStringResponse
    // Serialize message field [str]
    bufferOffset = _serializer.string(obj.str, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type TestStringStringResponse
    let len;
    let data = new TestStringStringResponse(null);
    // Deserialize message field [str]
    data.str = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.str);
    return length + 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'test_roscpp/TestStringStringResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '994972b6e03928b2476860ce6c4c8e17';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string str
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new TestStringStringResponse(null);
    if (msg.str !== undefined) {
      resolved.str = msg.str;
    }
    else {
      resolved.str = ''
    }

    return resolved;
    }
};

module.exports = {
  Request: TestStringStringRequest,
  Response: TestStringStringResponse,
  md5sum() { return '671f8e4998eaec79f1c47e339dfd527b'; },
  datatype() { return 'test_roscpp/TestStringString'; }
};
