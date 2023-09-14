
"use strict";

let TestStringInt = require('./TestStringInt.js');
let TestEmpty = require('./TestEmpty.js');
let TestWithHeader = require('./TestWithHeader.js');
let TestArray = require('./TestArray.js');
let ArrayOfFixedLength = require('./ArrayOfFixedLength.js');
let WithHeader = require('./WithHeader.js');
let WithDuration = require('./WithDuration.js');
let EmbeddedVariableLength = require('./EmbeddedVariableLength.js');
let FixedLengthStringArray = require('./FixedLengthStringArray.js');
let CustomHeader = require('./CustomHeader.js');
let EmbeddedExternal = require('./EmbeddedExternal.js');
let VariableLengthArrayOfExternal = require('./VariableLengthArrayOfExternal.js');
let WithMemberNamedHeaderThatIsNotAHeader = require('./WithMemberNamedHeaderThatIsNotAHeader.js');
let HeaderNotFirstMember = require('./HeaderNotFirstMember.js');
let VariableLength = require('./VariableLength.js');
let ArrayOfVariableLength = require('./ArrayOfVariableLength.js');
let FixedLengthArrayOfExternal = require('./FixedLengthArrayOfExternal.js');
let Constants = require('./Constants.js');
let FixedLength = require('./FixedLength.js');
let VariableLengthStringArray = require('./VariableLengthStringArray.js');
let WithTime = require('./WithTime.js');
let EmbeddedFixedLength = require('./EmbeddedFixedLength.js');
let LatencyMessage = require('./LatencyMessage.js');
let ThroughputMessage = require('./ThroughputMessage.js');
let Point32 = require('./Point32.js');
let PointCloud = require('./PointCloud.js');
let ChannelFloat32 = require('./ChannelFloat32.js');

module.exports = {
  TestStringInt: TestStringInt,
  TestEmpty: TestEmpty,
  TestWithHeader: TestWithHeader,
  TestArray: TestArray,
  ArrayOfFixedLength: ArrayOfFixedLength,
  WithHeader: WithHeader,
  WithDuration: WithDuration,
  EmbeddedVariableLength: EmbeddedVariableLength,
  FixedLengthStringArray: FixedLengthStringArray,
  CustomHeader: CustomHeader,
  EmbeddedExternal: EmbeddedExternal,
  VariableLengthArrayOfExternal: VariableLengthArrayOfExternal,
  WithMemberNamedHeaderThatIsNotAHeader: WithMemberNamedHeaderThatIsNotAHeader,
  HeaderNotFirstMember: HeaderNotFirstMember,
  VariableLength: VariableLength,
  ArrayOfVariableLength: ArrayOfVariableLength,
  FixedLengthArrayOfExternal: FixedLengthArrayOfExternal,
  Constants: Constants,
  FixedLength: FixedLength,
  VariableLengthStringArray: VariableLengthStringArray,
  WithTime: WithTime,
  EmbeddedFixedLength: EmbeddedFixedLength,
  LatencyMessage: LatencyMessage,
  ThroughputMessage: ThroughputMessage,
  Point32: Point32,
  PointCloud: PointCloud,
  ChannelFloat32: ChannelFloat32,
};
