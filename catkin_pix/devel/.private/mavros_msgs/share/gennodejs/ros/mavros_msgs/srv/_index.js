
"use strict";

let WaypointPull = require('./WaypointPull.js')
let FileChecksum = require('./FileChecksum.js')
let LogRequestEnd = require('./LogRequestEnd.js')
let FileList = require('./FileList.js')
let ParamSet = require('./ParamSet.js')
let StreamRate = require('./StreamRate.js')
let MessageInterval = require('./MessageInterval.js')
let FileTruncate = require('./FileTruncate.js')
let CommandVtolTransition = require('./CommandVtolTransition.js')
let FileClose = require('./FileClose.js')
let CommandAck = require('./CommandAck.js')
let SetMavFrame = require('./SetMavFrame.js')
let FileMakeDir = require('./FileMakeDir.js')
let FileRead = require('./FileRead.js')
let CommandInt = require('./CommandInt.js')
let CommandTOL = require('./CommandTOL.js')
let WaypointSetCurrent = require('./WaypointSetCurrent.js')
let CommandBool = require('./CommandBool.js')
let FileWrite = require('./FileWrite.js')
let LogRequestList = require('./LogRequestList.js')
let WaypointClear = require('./WaypointClear.js')
let SetMode = require('./SetMode.js')
let ParamPull = require('./ParamPull.js')
let CommandHome = require('./CommandHome.js')
let ParamPush = require('./ParamPush.js')
let LogRequestData = require('./LogRequestData.js')
let FileOpen = require('./FileOpen.js')
let FileRemoveDir = require('./FileRemoveDir.js')
let ParamGet = require('./ParamGet.js')
let CommandTriggerInterval = require('./CommandTriggerInterval.js')
let CommandTriggerControl = require('./CommandTriggerControl.js')
let MountConfigure = require('./MountConfigure.js')
let FileRemove = require('./FileRemove.js')
let FileRename = require('./FileRename.js')
let WaypointPush = require('./WaypointPush.js')
let VehicleInfoGet = require('./VehicleInfoGet.js')
let CommandLong = require('./CommandLong.js')

module.exports = {
  WaypointPull: WaypointPull,
  FileChecksum: FileChecksum,
  LogRequestEnd: LogRequestEnd,
  FileList: FileList,
  ParamSet: ParamSet,
  StreamRate: StreamRate,
  MessageInterval: MessageInterval,
  FileTruncate: FileTruncate,
  CommandVtolTransition: CommandVtolTransition,
  FileClose: FileClose,
  CommandAck: CommandAck,
  SetMavFrame: SetMavFrame,
  FileMakeDir: FileMakeDir,
  FileRead: FileRead,
  CommandInt: CommandInt,
  CommandTOL: CommandTOL,
  WaypointSetCurrent: WaypointSetCurrent,
  CommandBool: CommandBool,
  FileWrite: FileWrite,
  LogRequestList: LogRequestList,
  WaypointClear: WaypointClear,
  SetMode: SetMode,
  ParamPull: ParamPull,
  CommandHome: CommandHome,
  ParamPush: ParamPush,
  LogRequestData: LogRequestData,
  FileOpen: FileOpen,
  FileRemoveDir: FileRemoveDir,
  ParamGet: ParamGet,
  CommandTriggerInterval: CommandTriggerInterval,
  CommandTriggerControl: CommandTriggerControl,
  MountConfigure: MountConfigure,
  FileRemove: FileRemove,
  FileRename: FileRename,
  WaypointPush: WaypointPush,
  VehicleInfoGet: VehicleInfoGet,
  CommandLong: CommandLong,
};
