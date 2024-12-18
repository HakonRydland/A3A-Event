/*---------------------------------------------------------------------------
The code in this file is executed every time the player respawns. If the respawnOnStart mission parameter is not -1 it will execute at the mission start as well.

For more info see https://community.bistudio.com/wiki/Event_Scripts#onPlayerRespawn.sqf

Parameters:
	0. OBJECT: The new unit of the player
---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------
You can use the AET_fnc_setFaces function to change the player's face. It will change the face of any player in _listOfPlayers_1 to a random face of the faces in _listOfFaces_1
-----------------------------------------------------------------------------
    Example:
		private _listOfPlayers_1 = ["P_1", "P_2", "P_3"] call HR_fnc_ValidateObjects;
		private _listOfFaces_1 = ["PersianHead_A3_04_a", "PersianHead_A3_04_l", "PersianHead_A3_04_sa"];
		[player, _listOfPlayers_1, _listOfFaces_1] call AET_fnc_setFaces;
*/

/*---------------------------------------------------------------------------
You can use the AET_fnc_statInVehicle function to start a player inside a vehicle. It will teleport any player in _listOfPlayers_2 into the next available cargo seat of HELI_2, and if the vehicle is full or is no longer alive then the player will instead be teleported to the "LZ" marker.
-----------------------------------------------------------------------------
    Example:
		private _listOfPlayers_2 = ["P_1", "P_2", "P_3"] call HR_fnc_ValidateObjects;
		[player, _listOfPlayers_2, HELI_2, "LZ"] call AET_fnc_startInVehicle;
*/
params ["_newUnit", "_oldUnit", "_respawn", "_respawnDelay"];