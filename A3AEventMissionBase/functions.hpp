class CfgFunctions {
    class FFPP
    {
        class Punishment
        {
            class punishment_dataGet {};
            class punishment_dataNamespace {};
            class punishment_dataRem {};
            class punishment_dataSet {};
            class punishment_FF_addEH {};
            class punishment_FF {};
            class punishment {};
        };
        class UI
        {
            class customHint {};
        };
        class Utility
        {
            class getAdmin {};
            class log {};
        };
    };

    class HR
    {
        class Create
        {
            class LGAirstrike {};
        };

        class Diary {
            class briefing {};
            class credits {};
        };

        class Init
        {
            class detector {};
            class initPlayerLocal {};
            class postInit {
                postInit = 1;
            };
            class preInit {
                preInit = 1;
            };
        };

        class Logistics
        {
            class logistics_addLoadAction {};
            class logistics_getVehCapacity {};
            class logistics_initNodes {};
        };

        class LogisticsFunctions
        {
            file = "functions\Logistics\functions";
            class logistics_addAction {};
            class logistics_addOrRemoveObjectMass {};
            class logistics_addWeaponAction {};
            class logistics_canLoad {};
            class logistics_generateHardPoints {};
            class logistics_getCargoNodeType {};
            class logistics_getCargoOffsetAndDir {};
            class logistics_getVehicleNodes {};
            class logistics_initMountedWeapon {};
            class logistics_load {};
            class logistics_refreshVehicleLoad {};
            class logistics_removeWeaponAction {};
            class logistics_toggleAceActions {};
            class logistics_toggleLock {};
            class logistics_tryLoad {};
            class logistics_unload {};
        };

        class Organisation
        {
            class HealAndRepair {};
        };

        class Players
        {
            class dressUp {};
            class onEntityRespawn {};
        };

        class String {
            class pad_2Digits {};
            class pad_3Digits {};
        };

        class Time {
            class dateToTimeString {};
            class secondsToTimeSpan {};
            class systemTime_format_S {};
            class timeSpan_format {};
        };

        class UI
        {
            class customHint {};
        };

        class Utility
        {
            class classNameToModel {};
            class localLog {};
            class ValidateObjects {};
        };
    };

    #include "Garage\functions.hpp"
};
