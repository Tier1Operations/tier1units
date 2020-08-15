// Reset vars when ending mission.

#include "\T1AM\Defines.hpp"

T1AM_ControlledAssetLocal setVariable ["T1AM_endMission", true, true];
T1AM_ControlledAssetLocal setVariable ["T1AM_exactPos", nil, true];
T1AM_ControlledAssetLocal setVariable ["T1AM_controlledBy", nil, true];
T1AM_ControlledAssets = T1AM_ControlledAssets - [T1AM_ControlledAssetLocal];
publicVariable "T1AM_ControlledAssets";
T1AM_ControlledAssetLocal = grpNull;
T1AM_LastDialog = "ASSETS";
T1AM_HaveAimpoint = false;
T1AM_PrePlotted = false;
T1AM_FireMissionCurrent = [];
T1AM_SelectedTube = objNull;
T1AM_SelectedTubeIndex = 0;
T1AM_LastMission = "SPOT";
T1AM_LastAngle = "LOW";
T1AM_LastRounds = 1;
T1AM_LastWarhead = "";
T1AM_LastFuse = "";
T1AM_LastAirburstHeight = "";
T1AM_LastSheaf = "";
T1AM_LastSheafX = 100;
T1AM_LastSheafY = 100;
T1AM_LastSheafDir = 0;
T1AM_LastSheafDist = 0;
T1AM_LastAdjustSpotterX = 0;
T1AM_LastAdjustSpotterY = 0;
T1AM_LastAdjustImpactX = 0;
T1AM_LastAdjustImpactY = 0;
T1AM_LastAdjustImpactRefX = 0;
T1AM_LastAdjustImpactRefY = 0;
T1AM_LastTRPX = 0;
T1AM_LastTRPY = 0;
T1AM_LastGPSX = -999999;
T1AM_LastGPSY = -999999;
T1AM_LastGPSZ_AGL = 0;
T1AM_LastAdjustCheckbox = 0;
T1AM_LastAdjustX = 0;
T1AM_LastAdjustY = 0;
T1AM_LastRemarks = "";