

//	Check mission parameter settings and execute parameter code.
for [ { _i = 0 }, { _i < count(paramsArray) }, { _i = _i + 1 } ] do
{
	_paramName =(configName ((missionConfigFile >> "Params") select _i));
	_paramValue = (paramsArray select _i);
	_paramCode = ( getText (missionConfigFile >> "Params" >> _paramName >> "code"));
		
	diag_log format ["INIT Params: [%1] - [%2] -[%3]", _paramName, _paramCode, _paramValue];
	
	if !( _paramCode == "" ) then 
	{
		_code = format[_paramCode, _paramValue];
		call compile _code;
	};
};

MCC_isMode = isClass (configFile >> "CfgPatches" >> "mcc_sandbox");	//check if MCC is mod version
if (MCC_isMode) then 
{
	MCC_path = "\mcc_sandbox_mod\";
} 
else 
{
	MCC_path = "";
};

diag_log format ["T1_Revive: '%1'", T1_Revive];
//	Initialize T1 Revive system.
if ( T1_Revive == 1 ) then
{
	call compile preprocessFile "=BTC=_revive\=BTC=_revive_init.sqf";
} else {
	call compile preprocessFile "FAR_Revive\FAR_revive_init.sqf";
};

// started in mcc_init.sqf
//	Init UPSMON script (must be run on all clients)
//call compile preprocessFileLineNumbers "scripts\Init_UPSMON.sqf";	


startLoadingScreen ["Loading Tier1 Mission, please wait..."];


// Run MCC.
//execVM "MCC\initMCC.sqf";
[] execVM "mccLite_init.sqf";

endLoadingScreen;
//player sideChat "End Starting MCC sync...."; 


//	Initialize UPSMON.
if ((!isServer) && (player != player)) then
{
  waitUntil {player == player};
};

//	Finish world initialization before mission is launched. 
finishMissionInit;



//	The following code is executed after the briefing screen.
sleep 0.5;



//	Client-side scripts.
if ( hasInterface ) then 
{	
	//	Add map markers to all player groups.
	[] execVM "Tier1\UnitMarkers\setgroupmarkers.sqf";
	
	//	Disable AI radio chatter.
	player setVariable ["BIS_noCoreConversations", true];
	enableSentences false;
	
	// Vehicle crew HUD
	hud_teamlist = compile preprocessFileLineNumbers ("Tier1\VehicleHud\hud_teamlist.sqf");
	[] spawn hud_teamlist;
};

// Start garbage collection
if ( (isServer) && (T1_garbageCollection == 1) ) then
{
	[] execVM "Tier1\Garbage\OLM_GCmp_init.sqf"; 
};


//	TPWCAS AI Suppression.
if !(isNil "tpwcas_enable") then 
{
	if ( tpwcas_enable == 1 ) then
	{
		diag_log format ["%1 - starting TPWCAS_A3 with tpwcas_mode [%2]", time, (tpwcas_mode)];
		[tpwcas_mode] execVM "tpwcas\tpwcas_script_init.sqf";
	};

	// enable AI Supression statistics logging (once every 60 seconds)
	if ( (tpwcas_enable == 1) && ( tpwcas_mode == 2 || !(hasInterface) ) ) then
	{
		waitUntil { !(isNil "bdetect_init_done") };
	
		[] spawn tpwcas_fnc_log_benchmark;
	};
};

