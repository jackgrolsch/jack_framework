// Credits: Based on the F3 framework (http://www.ferstaberinde.com/f3/en/)
// Modifications and additions by Jack Grolsch

//********************************   Global vars init   *************************************

if(isServer) then {
	f_script_setLocalVars = [] execVM "f\common\f_setLocalVars.sqf";
};

//*******************************   TFAR configuration

[] execVM "f\radios\radio_init.sqf";

//************************************    No Saves   ****************************************

enableSaving [false, false];


//**************************   Friendly AIs shall not be annoying   **************************

{_x setSpeaker "NoVoice"} forEach playableUnits;

//********************************   Cold weapons start   ************************************

[] execVM "f\safeStart\f_safeStart.sqf";

//*********************************   Groups management   ************************************

f_script_setGroupIDs = [] execVM "f\setGroupID\f_setGroupIDs.sqf";
f_script_setGroupMarkers = [] execVM "f\groupMarkers\f_setLocalGroupMarkers.sqf";
f_script_setTeamColours = [] execVM "f\setTeamColours\f_setTeamColours.sqf";

// *********************************   Briefing Script  **************************************

f_script_briefing = [] execVM "briefing.sqf";


// **********************************    ORBAT script   **************************************

[] execVM "f\briefing\f_orbatNotes.sqf";

// *****************************   Loadout check at briefing   *******************************

[] execVM "f\briefing\f_loadoutNotes.sqf";
