
params["_ammo", "_target"];

private _health = _target getVariable ["rd501_shield_currentHealth", false];

if(_health isEqualTo false) exitWith { systemChat "[RD501][Shield][Hit Handler] Health not found"; };

_ammo params ["_directHit", "_indirectHit", "_indirectRange", "_explosionHit", "_ammoClass"];
private _hit = _directHit + (_indirectHit/(_indirectRange max 0.1)) + _explosionHit;
private _result = _health - _hit;


if(_result <= 0) then {
	_target setVariable ["rd501_shield_currentHealth", _result, true];
	private _ehId = _target getVariable ["rd501_shield_ehId", -1];
	["rd501_shield_destroy", [_target], _target] call cba_fnc_targetEvent;
	_target  removeEventHandler ["HitPart", _ehId];
}
else
{
	// Set locally only to reduce network traffic
	_target setVariable ["rd501_shield_currentHealth", _result];
	[_target] call rd501_fnc_shield_checkState;
	private _delay = _target getVariable["rd501_shield_regenDelay", 5];
	_target setVariable ["rd501_shield_regenStartsAt", diag_tickTime + _delay];
};