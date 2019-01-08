#define STDITEMS    "ItemRadio","ACE_EarPlugs","ACE_microDAGR","ACE_MapTools","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_CableTie", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACRE_PRC152", "rhsusf_ANPVS_14", "ACE_Flashlight_MX991"
// MEDICALITEMS is used in addition to STDITEMS for units without backpacks
#define MEDICALITEMS "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine"
#define MEDICALITEMS2 "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine" 

class CfgPatches
{
    class t1_air
    {
        units[] = {
            "T1_Pilot_Standard_F",
            "T1_Pilot_Black_F",
            "T1_Pilot_BlackCamo_F",
            "T1_Pilot_Camo_F",
            "T1_Pilot_Night_F",

            "t1_heli_light_trans",
            "t1_heli_light_attack",
            "t1_heli_medium_rockets",
            "t1_heli_heavy_trans",
            "t1_heli_heavy_attack",
            "t1_fighterjet_oneseat"
        };
        weapons[] = {
            "T1_U_Pilot_Standard",
            "T1_U_Pilot_Black",
            "T1_U_Pilot_BlackCamo",
            "T1_U_Pilot_Camo",
            "T1_U_Pilot_Night"
        };
        magazines[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {
            "t1_units"
        };
    };
};

class SensorTemplatePassiveRadar;  
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;   
class SensorTemplateIR;            
class SensorTemplateVisual;        
class SensorTemplateMan;           
class SensorTemplateLaser;         
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft;
class DefaultVehicleSystemsDisplayManagerRight;

class cfgWeapons
{
    class UniformItem;
    class Uniform_Base;
    class T1_U_Pilot_Standard : Uniform_Base
    {
        scope = 2;
        displayName = "T1 Coveralls";
        picture = "\A3\characters_f\data\ui\icon_U_B_coveralls_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "T1_Pilot_Standard_F";
            containerClass = "Supply120";
            mass = 80;
        };
    };
    class T1_U_Pilot_Black : Uniform_Base
    {
        scope = 2;
        displayName = "T1 Coveralls (Black)";
        picture = "\t1_textures\ui\icon_t1_u_pilot_black.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "T1_Pilot_Black_F";
            containerClass = "Supply120";
            mass = 80;
        };
    };
    class T1_U_Pilot_BlackCamo : Uniform_Base
    {
        scope = 2;
        displayName = "T1 Coveralls (Black Camo)";
        picture = "\t1_textures\ui\icon_t1_u_pilot_blackcamo.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "T1_Pilot_BlackCamo_F";
            containerClass = "Supply120";
            mass = 80;
        };
    };
    class T1_U_Pilot_Camo : Uniform_Base
    {
        scope = 2;
        displayName = "T1 Coveralls (Camo)";
        picture = "\t1_textures\ui\icon_t1_u_pilot_camo.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "T1_Pilot_Camo_F";
            containerClass = "Supply120";
            mass = 80;
        };
    };
    class T1_U_Pilot_Night : Uniform_Base
    {
        scope = 2;
        displayName = "T1 Coveralls (Night)";
        picture = "\t1_textures\ui\icon_t1_u_pilot_night.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "T1_Pilot_Night_F";
            containerClass = "Supply120";
            mass = 80;
        };
    };
};
class cfgVehicles
{
    class B_Helipilot_F;
    class T1_Pilot_Standard_F : B_Helipilot_F
    {
        scope = 2;
        faction = "T1_Units";
        vehicleClass = "Pilot";
        displayName = "T1 Pilot";
        model = "\A3\Characters_F\Common\coveralls.p3d";
        hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\coveralls_sage_co.paa"};
        uniformClass = "T1_U_Pilot_Night";
        backpack = "B_Parachute";
        weapons[] = {
            "T1_weap_mp7",
            "T1_weap_sidearm_m",
            "Throw",
            "Put",
            "ACE_Vector"};
        respawnWeapons[] = {
            "T1_weap_mp7",
            "T1_weap_sidearm_m",
            "Throw",
            "Put",
            "ACE_Vector"};
        magazines[] = {
            "rhsusf_mag_40Rnd_46x30_AP",
            "rhsusf_mag_40Rnd_46x30_AP",
            "rhsusf_mag_40Rnd_46x30_AP",
            "rhsusf_mag_40Rnd_46x30_AP",
            t1_mag_sidearm_l,
            t1_mag_sidearm_l,
            "SmokeShell",
            "SmokeShellGreen",
            "SmokeShellBlue"};
        respawnmagazines[] = {
            "rhsusf_mag_40Rnd_46x30_AP",
            "rhsusf_mag_40Rnd_46x30_AP",
            "rhsusf_mag_40Rnd_46x30_AP",
            "rhsusf_mag_40Rnd_46x30_AP",
            t1_mag_sidearm_l,
            t1_mag_sidearm_l,
            "SmokeShell",
            "SmokeShellGreen",
            "SmokeShellBlue"};
        linkedItems[] = {
            "H_PilotHelmetFighter_B",
            "V_Rangemaster_belt",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch"};
        respawnLinkedItems[] = {
            "H_PilotHelmetFighter_B",
            "V_Rangemaster_belt",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch"};
        // Todo: Evaluate wrt MEDICALITEMS mismatch
        items[] = {
            STDITEMS,
            MEDICALITEMS};
        respawnItems[] = {
            STDITEMS,
            MEDICALITEMS};
        camouflage = 1.4;
        engineer = 1;
    };
    class T1_Pilot_Black_F : T1_Pilot_Standard_F
    {
        displayName = "T1 Pilot (Black)";
        uniformClass = "T1_U_Pilot_Black";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\t1_textures\units\pilot\t1_pilot_black_co.paa"};
    };
    class T1_Pilot_BlackCamo_F : T1_Pilot_Standard_F
    {
        displayName = "T1 Pilot (BlackCamo)";
        uniformClass = "T1_U_Pilot_BlackCamo";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\t1_textures\units\pilot\t1_pilot_BlackCamo_co.paa"};
    };
    class T1_Pilot_Camo_F : T1_Pilot_Standard_F
    {
        displayName = "T1 Pilot (Camo)";
        uniformClass = "T1_U_Pilot_Camo";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\t1_textures\units\pilot\t1_pilot_camo_co.paa"};
    };
    class T1_Pilot_Night_F : T1_Pilot_Standard_F
    {
        displayName = "T1 Pilot (Night Camo)";
        uniformClass = "T1_U_Pilot_Night";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\t1_textures\units\pilot\t1_pilot_night_co.paa"};
    };
    class RHS_MELB_MH6M;
    class t1_heli_light_trans : RHS_MELB_MH6M
    {
        faction = "T1_Units";
        crew = "T1_Pilot_Camo_F";
        reportOwnPosition = 1;
        class TransportBackpacks {
            class repairkit {
                backpack = "T1_Kitbag_camo_Repair";
                count = 1;
            };
        };
    };
    class RHS_MELB_AH6M_M;
    class t1_heli_light_attack : RHS_MELB_AH6M_M
    {
        scope = 2;
        faction = "T1_Units";
        crew = "T1_Pilot_Camo_F";
        reportOwnPosition = 1;
        class TransportBackpacks {
            class repairkit {
                backpack = "T1_Kitbag_camo_Repair";
                count = 1;
            };
        };
    };
    class RHS_UH60M2;
    class rhs_uh60m_esss : RHS_UH60M2
    {
        // This is messy. Really messy. So why is it needed? :shrug:
        class Components;
        class TransportPylonsComponent;
        class pylons;
        class pylon1;
        class pylon2;
        class pylon3;
        class pylon4;
    };
    class t1_heli_medium_rockets : rhs_uh60m_esss
    {
        faction = "T1_Units";
        crew = "T1_Pilot_Camo_F";
        reportOwnPosition = 1;
        class Components : Components
        {
            class TransportPylonsComponent : TransportPylonsComponent
            {
                class pylons : pylons
                {
                    class pylon1 : pylon1
                    {
                        attachment = "rhs_mag_M229_19";
                    };
                    class pylon2 : pylon2
                    {
                    };
                    class pylon3 : pylon3
                    {
                    };
                    class pylon4 : pylon4
                    {
                        attachment = "rhs_mag_M229_19";
                    };
                };
            };
        };
        class TransportBackpacks {
            class repairkit {
                backpack = "T1_Kitbag_camo_Repair";
                count = 1;
            };
            class para {
                backpack = "B_Parachute";
                count = 8;
            };
        };
    };
    class RHS_CH_47F;
    class t1_heli_heavy_trans : RHS_CH_47F
    {
        faction = "T1_Units";
        crew = "T1_Pilot_Camo_F";
        vehicleClass = "Air";
        reportOwnPosition = 1;
        class TransportBackpacks {
            class repairkit {
                backpack = "T1_Kitbag_camo_Repair";
                count = 1;
            };
            class para {
                backpack = "B_Parachute";
                count = 8;
            };
        };
    };
    class UK3CB_BAF_Apache_AH1_DynamicLoadout;
    class t1_heli_heavy_attack : UK3CB_BAF_Apache_AH1_DynamicLoadout
    {
        faction = "T1_Units";
        crew = "T1_Pilot_Camo_F";
        class TransportBackpacks {
            class repairkit {
                backpack = "T1_Kitbag_camo_Repair";
                count = 1;
            };
        };
        reportRemoteTargets = 1;
        reportOwnPosition = 1;
        receiveRemoteTargets = 1;
    };
    class B_Plane_Fighter_01_F;
    class t1_fighterjet_oneseat : B_Plane_Fighter_01_F {
        faction = "T1_Units";
        crew = "T1_Pilot_Camo_F";
        reportRemoteTargets = 1;
        reportOwnPosition = 1;
        receiveRemoteTargets = 1;

#include "fightercomponents.hpp"
    };
};
