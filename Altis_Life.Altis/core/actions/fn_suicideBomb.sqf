/*
    ALAH SNACKBAR! 
    Taken from a DSCHA {Daniel} Is Ass post

[[0,format["%1 has set off their suicide vest.",name player]],"life_fnc_broadcast",true,false] spawn life_fnc_MP;
*/
private["_boom", "_list"];
if(vest player != "V_HarnessOGL_gry") exitWith {};
if(life_isSuicide) exitWith {};
if(life_isDeadman) exitWith {};
life_isSuiciding = true;

player say3d "akbar";
sleep 8;


if(vest player != "V_HarnessOGL_gry") exitWith {life_isSuiciding = false;};
if((player getVariable "restrained")) exitWith {life_isSuiciding = false;}; //He's restrained.
if((player getVariable "tied")) exitWith {life_isSuiciding = false;}; //He's restrained.

//BOOM    
removeVest player;
removeHeadgear player:
removeGoggles player;
removeVest player;
removeBackpack player;
removeUniform player;
removeAllWeapons player:
removeAllAssignedItems player;
_boom = "Bo_Mk82" createVehicle [0,0,9999];
_boom setPos (getPos player);
_boom setVelocity [100,0,0];

if(alive player) then {player setDamage 1;};

life_isSuicide = false;
life_isDeadman = false;
life_isSuiciding = false;

player setVariable["tied", false, true];
player setVariable["restrained", false, true];
player setVariable["eg_cancelRevive", true, true];
[] call SOCK_fnc_updateRequest;

[[0,format["BREAKING NEWS: A suicide vest was detonated by %1!",profileName]],"life_fnc_broadcast",true,false] spawn life_fnc_MP;