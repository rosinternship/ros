
"use strict";

let MigratedAddSub = require('./MigratedAddSub.js');
let Simple = require('./Simple.js');
let Unmigrated = require('./Unmigrated.js');
let SubUnmigrated = require('./SubUnmigrated.js');
let Converged = require('./Converged.js');
let Constants = require('./Constants.js');
let SimpleMigrated = require('./SimpleMigrated.js');
let MigratedMixed = require('./MigratedMixed.js');
let Renamed5 = require('./Renamed5.js');
let PartiallyMigrated = require('./PartiallyMigrated.js');
let MigratedImplicit = require('./MigratedImplicit.js');
let MigratedExplicit = require('./MigratedExplicit.js');

module.exports = {
  MigratedAddSub: MigratedAddSub,
  Simple: Simple,
  Unmigrated: Unmigrated,
  SubUnmigrated: SubUnmigrated,
  Converged: Converged,
  Constants: Constants,
  SimpleMigrated: SimpleMigrated,
  MigratedMixed: MigratedMixed,
  Renamed5: Renamed5,
  PartiallyMigrated: PartiallyMigrated,
  MigratedImplicit: MigratedImplicit,
  MigratedExplicit: MigratedExplicit,
};
