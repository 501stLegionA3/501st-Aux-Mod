(_this select 0) params ["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"];

if(_target isEqualTo objNull) exitWith { systemChat "Target is null idk why"; }; 

["rd501_shield_hit", [_ammo, _target], _target] call CBA_fnc_targetEvent;
