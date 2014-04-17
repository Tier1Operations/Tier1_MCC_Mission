// Ollem: added option to allow for delayed weather change 
//==================================================================MCC_fnc_setWeather======================================================================================
// Sets weather  on all clients  - skip time by one hour to make the weather change
// Example: [[[ Overcast, WindForce, Waves, Rain, Lightnings,fog]],"MCC_fnc_setWeather",true,false] spawn BIS_fnc_MP;
// Params: 
//	Overcast: number, 0-1
//	WindForce: number, 0-1
//	Waves: number, 0-1
//	Rain: number, 0-1
//	Lightnings: number, 0-1
//	Fog: array, [fogValue, fogDecay, fogBase]
//==============================================================================================================================================================================	
private ["_weather","_fogBase","_changeWeatherDelay"];
	
_weather = _this select 0;

skipTime -24;

if ( count _weather < 6 ) then 
{
	_changeWeatherDelay	= 86400;
}
else
{
	_changeWeatherDelay = (_weather select 6) + 86400;
};

_changeWeatherDelay setOvercast		(_weather select 0);	sleep 0.1;
_changeWeatherDelay setWindForce 	(_weather select 1);	sleep 0.1;
_changeWeatherDelay setWaves 		(_weather select 2);	sleep 0.1;
_changeWeatherDelay setRain 		(_weather select 3);	sleep 0.1;
_changeWeatherDelay setLightnings	(_weather select 4);	sleep 0.1;

skipTime 24;

//if ((count _weather) > 5) then { (_changeWeatherDelay - 86400) setFog [(_weather select 5), 0.03,10];};
if ((count _weather) > 5) then { (_changeWeatherDelay - 86400) setFog (_weather select 5); };

sleep 0.5;

simulWeatherSync;

