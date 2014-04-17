class DefaultEventhandlers;
class CfgPatches
{
	class t1_units
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","A3_Characters_F_BLUFOR"};
	};
};
class UniformSlotInfo;
class CfgFactionClasses
{
	class T1_Units
	{
		displayName = "T1 Units";
		side = 1;
		priority = 10;
		icon = "\t1_units\data\cfgFactionClasses_T1_ca.paa";
	};
};
class CfgVehicleClasses
{
	class Squad
	{
		displayName = "Men (Squad)";
	};
	class SF
	{
		displayName = "Men (SF)";
	};
	class Diver
	{
		displayName = "Men (Diver)";
	};
	class Special
	{
		displayName = "Men (Special)";
	};
	class Pilot
	{
		displayName = "Men (Pilot)";
	};
};
class CfgVehicles
{
	class B_Soldier_F;
	class B_Soldier_base_F;
	class B_RangeMaster_F;
	class B_Helipilot_F;
	class B_Spotter_F;
	class B_Sniper_F;
	class B_Bergen_sgg;
	class T1_Bergen_sgg_Exp: B_Bergen_sgg
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_ATMine_Range_Mag
			{
				count = 1;
				magazine = "ATMine_Range_Mag";
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				count = 2;
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
			};
			class _xx_APERSTripMine_Wire_Mag
			{
				count = 1;
				magazine = "APERSTripMine_Wire_Mag";
			};
			class _xx_APERSBoundingMine_Range_Mag
			{
				count = 2;
				magazine = "APERSBoundingMine_Range_Mag";
			};
			class _xx_SatchelCarge_Remote_Mag
			{
				count = 1;
				magazine = "SatchelCharge_Remote_Mag";
			};
			class _xx_DemoCharge_Remote_Mag
			{
				count = 1;
				magazine = "DemoCharge_Remote_Mag";
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				count = 1;
				name = "ToolKit";
			};
			class _xx_MineDetector
			{
				count = 1;
				name = "MineDetector";
			};
		};
	};
	class B_FieldPack_blk;
	class T1_FieldPack_blk_Exp: B_FieldPack_blk
	{
		scope = 1;
		maximumload = 250;
		class TransportMagazines
		{
			class _xx_ATMine_Range_Mag
			{
				count = 1;
				magazine = "ATMine_Range_Mag";
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				count = 2;
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
			};
			class _xx_APERSTripMine_Wire_Mag
			{
				count = 1;
				magazine = "APERSTripMine_Wire_Mag";
			};
			class _xx_APERSBoundingMine_Range_Mag
			{
				count = 2;
				magazine = "APERSBoundingMine_Range_Mag";
			};
			class _xx_SatchelCarge_Remote_Mag
			{
				count = 1;
				magazine = "SatchelCharge_Remote_Mag";
			};
			class _xx_DemoCharge_Remote_Mag
			{
				count = 1;
				magazine = "DemoCharge_Remote_Mag";
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				count = 1;
				name = "ToolKit";
			};
			class _xx_MineDetector
			{
				count = 1;
				name = "MineDetector";
			};
		};
	};
	class B_Kitbag_mcamo;
	class T1_Kitbag_mcamo_AMG: B_Kitbag_mcamo
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_T1_150Rnd_762x51_Box_Tracer
			{
				count = 8;
				magazine = "T1_150Rnd_762x51_Box_Tracer";
			};
		};
	};
	class B_AssaultPack_blk;
	class T1_AssaultPack_blk_Medic: B_AssaultPack_blk
	{
		scope = 1;
		class TransportItems
		{
			class _xx_Medikit
			{
				count = 1;
				name = "Medikit";
			};
			class _xx_FirstAidKit
			{
				count = 10;
				name = "FirstAidKit";
			};
		};
	};
	class T1_AssaultPack_blk_LAT: B_AssaultPack_blk
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
		};
	};
	class T1_Instructor_Polo_Black_F: B_RangeMaster_F
	{
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 Instructor (Black)";
		uniformClass = "T1_U_Instructor_Polo_Black";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\t1_units\data\units\instructor\t1_poloinstructor_b_co.paa"};
		weapons[] = {"SMG_01_F","hgun_P07_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"SMG_01_F","hgun_P07_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		linkedItems[] = {"H_Cap_headphones","V_Rangemaster_belt","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"H_Cap_headphones","V_Rangemaster_belt","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		items[] = {"FirstAidKit","FirstAidKit","ACRE_PRC152"};
		respawnItems[] = {"FirstAidKit","FirstAidKit","ACRE_PRC152"};
		camouflage = 1.4;
	};
	class T1_Instructor_Polo_Orange_F: T1_Instructor_Polo_Black_F
	{
		displayName = "T1 Instructor (Orange)";
		uniformClass = "T1_U_Instructor_Polo_Orange";
		hiddenSelectionsTextures[] = {"\t1_units\data\units\instructor\t1_poloinstructor_o_co.paa"};
	};
	class T1_Squad_Soldier_F: B_Soldier_F
	{
		scope = 1;
		uniformClass = "T1_U_Squad_Standard";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\t1_units\data\units\t1_clothing1_camo_co.paa"};
		camouflage = 1.4;
		items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
	};
	class T1_Squad_FTL_Standard_F: T1_Squad_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Squad";
		displayName = "T1 Squad FTL";
		weapons[] = {"arifle_MX_GL_ACO_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_GL_ACO_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell"};
		linkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		icon = "iconManLeader";
	};
	class T1_Squad_RTO_Standard_F: T1_Squad_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Squad";
		displayName = "T1 Squad Radioman";
		weapons[] = {"arifle_MX_GL_ACO_pointer_F","hgun_P07_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MX_GL_ACO_pointer_F","hgun_P07_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell"};
		linkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		items[] = {"FirstAidKit","FirstAidKit","ACRE_PRC152"};
		respawnItems[] = {"FirstAidKit","FirstAidKit","ACRE_PRC152"};
	};
	class T1_Squad_AR_Standard_F: T1_Squad_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Squad";
		displayName = "T1 Squad AR";
		weapons[] = {"arifle_MX_SW_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MX_SW_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		linkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		icon = "iconManMG";
	};
	class T1_Squad_AR_LongRange_F: T1_Squad_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Squad";
		displayName = "T1 Squad AR (LR)";
		weapons[] = {"arifle_MX_SW_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_SW_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
		magazines[] = {"100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		linkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		icon = "iconManMG";
	};
	class T1_Squad_AAR_Standard_F: T1_Squad_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Squad";
		displayName = "T1 Squad AAR";
		weapons[] = {"arifle_MX_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MX_Hamr_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer","100Rnd_65x39_caseless_mag_Tracer"};
		linkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
	};
	class T1_Squad_AT_Standard_F: T1_Squad_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Squad";
		displayName = "T1 Squad AT";
		weapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Throw","Put","launch_NLAW_F"};
		respawnWeapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Throw","Put","launch_NLAW_F"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","NLAW_F"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","NLAW_F"};
		linkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		icon = "iconManAT";
	};
	class T1_Squad_AT_LongRange_F: T1_Squad_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Squad";
		displayName = "T1 Squad AT (LR)";
		weapons[] = {"arifle_MX_Hamr_pointer_F","hgun_P07_F","Throw","Put","launch_NLAW_F"};
		respawnWeapons[] = {"arifle_MX_Hamr_pointer_F","hgun_P07_F","Throw","Put","launch_NLAW_F"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","NLAW_F"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","NLAW_F"};
		linkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		icon = "iconManAT";
	};
	class T1_Squad_SL_Standard_F: T1_Squad_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Squad";
		displayName = "T1 Squad SL";
		weapons[] = {"arifle_MX_GL_Hamr_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_MX_GL_Hamr_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell"};
		linkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		icon = "iconManLeader";
	};
	class T1_Squad_PL_Standard_F: T1_Squad_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Squad";
		displayName = "T1 Squad PL";
		weapons[] = {"arifle_MX_Hamr_pointer_F","hgun_P07_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MX_Hamr_pointer_F","hgun_P07_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		linkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		icon = "iconManLeader";
		items[] = {"FirstAidKit","FirstAidKit","ACRE_PRC152"};
		respawnItems[] = {"FirstAidKit","FirstAidKit","ACRE_PRC152"};
	};
	class T1_Squad_Marksman_ARCO_Standard_F: T1_Squad_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Squad";
		displayName = "T1 Squad Marksman (ARCO)";
		weapons[] = {"srifle_EBR_ARCO_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"srifle_EBR_ARCO_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		linkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
	};
	class T1_Squad_Marksman_SOS_Standard_F: T1_Squad_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Squad";
		displayName = "T1 Squad Marksman (SOS)";
		weapons[] = {"srifle_EBR_SOS_F","hgun_P07_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"srifle_EBR_SOS_F","hgun_P07_F","Throw","Put","Binocular"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		linkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
	};
	class T1_Squad_Medic_Standard_F: T1_Squad_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Squad";
		displayName = "T1 Squad Medic";
		weapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen"};
		linkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		icon = "iconManMedic";
		backpack = "B_AssaultPack_rgr_Medic";
		attendant = 1;
	};
	class T1_Squad_Repair_Standard_F: T1_Squad_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Squad";
		displayName = "T1 Squad Repair Specialist";
		weapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		linkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		icon = "iconManEngineer";
		backpack = "B_AssaultPack_rgr_Repair";
		engineer = 1;
		detectSkill = 40;
	};
	class T1_Squad_Explosive_Standard_F: T1_Squad_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Squad";
		displayName = "T1 Squad Explosive Specialist";
		weapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		linkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		icon = "iconManExplosive";
		backpack = "T1_Bergen_sgg_Exp";
		canDeactivateMines = 1;
		detectSkill = 80;
	};
	class T1_SF_Marksman_SOS_Standard_F: T1_Squad_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "SF";
		displayName = "T1 SF Marksman (SOS)";
		weapons[] = {"T1_srifle_EBR_SOS_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"T1_srifle_EBR_SOS_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put","Binocular"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		linkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		camouflage = 1.0;
	};
	class T1_SF_Explosive_Standard_F: T1_Squad_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "SF";
		displayName = "T1 SF Explosive Specialist";
		weapons[] = {"T1_arifle_Mk20_ACO_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put"};
		respawnWeapons[] = {"T1_arifle_Mk20_ACO_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		linkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		icon = "iconManExplosive";
		backpack = "T1_Bergen_sgg_Exp";
		canDeactivateMines = 1;
		detectSkill = 80;
		camouflage = 1.0;
	};
	class T1_SF_Medic_Standard_F: T1_Squad_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "SF";
		displayName = "T1 SF Medic";
		weapons[] = {"T1_arifle_Mk20_ACO_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put"};
		respawnWeapons[] = {"T1_arifle_Mk20_ACO_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen"};
		linkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		icon = "iconManMedic";
		backpack = "B_AssaultPack_rgr_Medic";
		attendant = 1;
		camouflage = 1.0;
	};
	class T1_SF_FTL_Standard_F: T1_Squad_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "SF";
		displayName = "T1 SF FTL";
		weapons[] = {"T1_arifle_Mk20_GL_Hamr_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"T1_arifle_Mk20_GL_Hamr_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell"};
		linkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		icon = "iconManLeader";
		camouflage = 1.0;
	};
	class T1_SF_AT_Standard_F: T1_Squad_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "SF";
		displayName = "T1 SF Radioman";
		weapons[] = {"T1_arifle_Mk20_ACO_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put","launch_NLAW_F","Rangefinder"};
		respawnWeapons[] = {"T1_arifle_Mk20_ACO_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put","launch_NLAW_F","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","NLAW_F"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","NLAW_F"};
		linkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		items[] = {"FirstAidKit","FirstAidKit","ACRE_PRC152"};
		respawnItems[] = {"FirstAidKit","FirstAidKit","ACRE_PRC152"};
		icon = "iconManAT";
		camouflage = 1.0;
	};
	class T1_SF_AR_Standard_F: T1_Squad_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "SF";
		displayName = "T1 SF AR";
		weapons[] = {"T1_LMG_Zafir_pointer_F","hgun_ACPC2_snds_F","Throw","Put"};
		respawnWeapons[] = {"T1_LMG_Zafir_pointer_F","hgun_ACPC2_snds_F","Throw","Put"};
		magazines[] = {"T1_150Rnd_762x51_Box_Tracer","T1_150Rnd_762x51_Box_Tracer","T1_150Rnd_762x51_Box_Tracer","T1_150Rnd_762x51_Box_Tracer","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"T1_150Rnd_762x51_Box_Tracer","T1_150Rnd_762x51_Box_Tracer","T1_150Rnd_762x51_Box_Tracer","T1_150Rnd_762x51_Box_Tracer","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		linkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		icon = "iconManMG";
		camouflage = 1.0;
	};
	class T1_Diver_Soldier_F: B_Soldier_F
	{
		scope = 1;
		uniformClass = "T1_U_Diver_Standard";
		model = "\A3\characters_F\Common\diver_slotable";
		modelsides[] = {3,1};
		hiddenselections[] = {"Camo1","Camo2"};
		hiddenselectionstextures[] = {"\A3\Characters_F\Common\Data\diver_suit_nato_co.paa","\A3\Characters_F\Common\Data\diver_equip_nato_co.paa"};
		hiddenunderwaterselections[] = {"hide"};
		hiddenunderwaterselectionstextures[] = {"\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\data\visors_ca.paa"};
		shownunderwaterselections[] = {"unhide","unhide2"};
		camouflage = 1.0;
		class Wounds
		{
			mat[] = {"A3\Characters_F\Common\Data\diver_suit.rvmat","A3\Characters_F\Common\Data\diver_suit_injury.rvmat","A3\Characters_F\Common\Data\diver_suit_injury.rvmat"};
			tex[] = {};
		};
		items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
	};
	class T1_Diver_Marksman_SOS_Standard_F: T1_Diver_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Diver";
		displayName = "T1 Diver Marksman (SOS)";
		weapons[] = {"T1_srifle_EBR_SOS_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"T1_srifle_EBR_SOS_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put","Binocular"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		linkedItems[] = {"V_RebreatherB","G_Diving","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"V_RebreatherB","G_Diving","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
	};
	class T1_Diver_Explosive_Standard_F: T1_Diver_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Diver";
		displayName = "T1 Diver Explosive Specialist";
		weapons[] = {"T1_arifle_Mk20_ACO_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put"};
		respawnWeapons[] = {"T1_arifle_Mk20_ACO_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		linkedItems[] = {"V_RebreatherB","G_Diving","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_RebreatherB","G_Diving","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		icon = "iconManExplosive";
		backpack = "T1_FieldPack_blk_Exp";
		canDeactivateMines = 1;
		detectSkill = 80;
	};
	class T1_Diver_Medic_Standard_F: T1_Diver_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Diver";
		displayName = "T1 Diver Medic";
		weapons[] = {"T1_arifle_Mk20_ACO_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put"};
		respawnWeapons[] = {"T1_arifle_Mk20_ACO_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen"};
		linkedItems[] = {"V_RebreatherB","G_Diving","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_RebreatherB","G_Diving","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		icon = "iconManMedic";
		backpack = "T1_AssaultPack_blk_Medic";
		attendant = 1;
	};
	class T1_Diver_FTL_Standard_F: T1_Diver_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Diver";
		displayName = "T1 Diver FTL";
		weapons[] = {"T1_arifle_Mk20_GL_Hamr_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"T1_arifle_Mk20_GL_Hamr_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell"};
		linkedItems[] = {"V_RebreatherB","G_Diving","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"V_RebreatherB","G_Diving","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		icon = "iconManLeader";
	};
	class T1_Diver_AT_Standard_F: T1_Diver_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Diver";
		displayName = "T1 Diver Radioman";
		weapons[] = {"T1_arifle_Mk20_ACO_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put","launch_NLAW_F","Rangefinder"};
		respawnWeapons[] = {"T1_arifle_Mk20_ACO_pointer_snds_F","hgun_ACPC2_snds_F","Throw","Put","launch_NLAW_F","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","NLAW_F"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","NLAW_F"};
		linkedItems[] = {"V_RebreatherB","G_Diving","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_RebreatherB","G_Diving","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		items[] = {"FirstAidKit","FirstAidKit","ACRE_PRC152"};
		respawnItems[] = {"FirstAidKit","FirstAidKit","ACRE_PRC152"};
		icon = "iconManAT";
	};
	class T1_Diver_AR_Standard_F: T1_Diver_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Diver";
		displayName = "T1 Diver AR";
		weapons[] = {"T1_LMG_Zafir_pointer_F","hgun_ACPC2_snds_F","Throw","Put"};
		respawnWeapons[] = {"T1_LMG_Zafir_pointer_F","hgun_ACPC2_snds_F","Throw","Put"};
		magazines[] = {"T1_150Rnd_762x51_Box_Tracer","T1_150Rnd_762x51_Box_Tracer","T1_150Rnd_762x51_Box_Tracer","T1_150Rnd_762x51_Box_Tracer","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"T1_150Rnd_762x51_Box_Tracer","T1_150Rnd_762x51_Box_Tracer","T1_150Rnd_762x51_Box_Tracer","T1_150Rnd_762x51_Box_Tracer","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		linkedItems[] = {"V_RebreatherB","G_Diving","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"V_RebreatherB","G_Diving","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
		icon = "iconManMG";
	};
	class T1_Pilot_Standard_F: B_Helipilot_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Pilot";
		displayName = "T1 Pilot";
		uniformClass = "T1_U_Pilot_Standard";
		weapons[] = {"SMG_01_F","hgun_P07_snds_F","Throw","Put"};
		respawnWeapons[] = {"SMG_01_F","hgun_P07_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","30Rnd_45ACP_Mag_SMG_01","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen"};
		linkedItems[] = {"H_PilotHelmetHeli_B","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"H_PilotHelmetHeli_B","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		items[] = {"FirstAidKit","FirstAidKit","ACRE_PRC152"};
		respawnItems[] = {"FirstAidKit","FirstAidKit","ACRE_PRC152"};
		camouflage = 1.4;
	};
	class T1_Pilot_Black_F: T1_Pilot_Standard_F
	{
		displayName = "T1 Pilot (Black)";
		uniformClass = "T1_U_Pilot_Black";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\t1_units\data\units\pilot\t1_pilot_black_co.paa"};
	};
	class T1_Pilot_BlackCamo_F: T1_Pilot_Standard_F
	{
		displayName = "T1 Pilot (Black Camo)";
		uniformClass = "T1_U_Pilot_BlackCamo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\t1_units\data\units\pilot\t1_pilot_BlackCamo_co.paa"};
	};
	class T1_Pilot_Camo_F: T1_Pilot_Standard_F
	{
		displayName = "T1 Pilot (Camo)";
		uniformClass = "T1_U_Pilot_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\t1_units\data\units\pilot\t1_pilot_camo_co.paa"};
	};
	class T1_Pilot_Night_F: T1_Pilot_Standard_F
	{
		displayName = "T1 Pilot (Night)";
		uniformClass = "T1_U_Pilot_Night";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\t1_units\data\units\pilot\t1_pilot_night_co.paa"};
	};
	class T1_Spotter_Standard_F: B_Spotter_F
	{
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 Spotter";
		uniformClass = "T1_U_Sniper_Standard";
		weapons[] = {"arifle_MX_Hamr_pointer_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MX_Hamr_pointer_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
		linkedItems[] = {"V_PlateCarrier2_rgr","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"V_PlateCarrier2_rgr","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		items[] = {"FirstAidKit","FirstAidKit","ACRE_PRC152"};
		respawnItems[] = {"FirstAidKit","FirstAidKit","ACRE_PRC152"};
		camouflage = 0.6;
	};
	class T1_Sniper_Standard_F: B_Sniper_F
	{
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 Sniper";
		uniformClass = "T1_U_Sniper_Standard";
		weapons[] = {"srifle_LRR_SOS_F","hgun_P07_snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"srifle_LRR_SOS_F","hgun_P07_snds_F","Throw","Put","Binocular"};
		magazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
		respawnMagazines[] = {"7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","7Rnd_408_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
		linkedItems[] = {"V_PlateCarrier2_rgr","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"V_PlateCarrier2_rgr","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		items[] = {"FirstAidKit","FirstAidKit"};
		respawnItems[] = {"FirstAidKit","FirstAidKit"};
		camouflage = 0.6;
	};
	class T1_Specialist_AT_Standard_F: T1_Squad_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 AT Specialist";
		weapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Throw","Put","launch_Titan_short_F"};
		respawnWeapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Throw","Put","launch_Titan_short_F"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Titan_AT"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Titan_AT"};
		linkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		icon = "iconManAT";
		backpack = "B_AssaultPack_mcamo_AT";
	};
	class T1_Specialist_AAT_Standard_F: T1_Squad_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 AAT Specialist";
		weapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		linkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		items[] = {"FirstAidKit","FirstAidKit","ACRE_PRC152"};
		respawnItems[] = {"FirstAidKit","FirstAidKit","ACRE_PRC152"};
		backpack = "B_Carryall_mcamo_AAT";
	};
	class T1_Specialist_AA_Standard_F: T1_Squad_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 AA Specialist";
		weapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Throw","Put","launch_Titan_F"};
		respawnWeapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Throw","Put","launch_Titan_F"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Titan_AA"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Titan_AA"};
		linkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		icon = "iconManAT";
		backpack = "B_AssaultPack_mcamo_AA";
	};
	class T1_Specialist_AAA_Standard_F: T1_Squad_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 AAA Specialist";
		weapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		linkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		items[] = {"FirstAidKit","FirstAidKit","ACRE_PRC152"};
		respawnItems[] = {"FirstAidKit","FirstAidKit","ACRE_PRC152"};
		backpack = "B_Carryall_mcamo_AAA";
	};
	class T1_Specialist_MG_Standard_F: T1_Squad_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 MG Specialist";
		weapons[] = {"T1_LMG_Zafir_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"T1_LMG_Zafir_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"T1_150Rnd_762x51_Box_Tracer","T1_150Rnd_762x51_Box_Tracer","T1_150Rnd_762x51_Box_Tracer","T1_150Rnd_762x51_Box_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"T1_150Rnd_762x51_Box_Tracer","T1_150Rnd_762x51_Box_Tracer","T1_150Rnd_762x51_Box_Tracer","T1_150Rnd_762x51_Box_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		linkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		icon = "iconManMG";
	};
	class T1_Specialist_AMG_Standard_F: T1_Squad_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 AMG Specialist";
		weapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		linkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"V_PlateCarrier2_rgr","H_HelmetB","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		items[] = {"FirstAidKit","FirstAidKit","ACRE_PRC152"};
		respawnItems[] = {"FirstAidKit","FirstAidKit","ACRE_PRC152"};
		backpack = "T1_Kitbag_mcamo_AMG";
	};
	class T1_Scout_Standard_F: T1_Squad_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 Scout";
		weapons[] = {"T1_arifle_MX_ACO_pointer_snds_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"T1_arifle_MX_ACO_pointer_snds_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
		linkedItems[] = {"V_Chestrig_oli","T1_H_Booniehat_mcamo","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"V_Chestrig_oli","T1_H_Booniehat_mcamo","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		items[] = {"FirstAidKit","FirstAidKit","ACRE_PRC152"};
		respawnItems[] = {"FirstAidKit","FirstAidKit","ACRE_PRC152"};
		camouflage = 0.6;
	};
	class T1_Scout_TL_Standard_F: T1_Squad_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 Scout TL";
		weapons[] = {"T1_arifle_MX_Hamr_pointer_snds_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"T1_arifle_MX_Hamr_pointer_snds_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
		linkedItems[] = {"V_Chestrig_oli","T1_H_Booniehat_mcamo","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"V_Chestrig_oli","T1_H_Booniehat_mcamo","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		camouflage = 0.6;
	};
	class T1_Crewman_Standard_F: T1_Squad_Soldier_F
	{
		scope = 2;
		faction = "T1_Units";
		vehicleClass = "Special";
		displayName = "T1 Crewman";
		uniformClass = "T1_U_Pilot_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\t1_units\data\units\pilot\t1_pilot_camo_co.paa"};
		weapons[] = {"arifle_MXC_ACO_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MXC_ACO_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen"};
		linkedItems[] = {"V_BandollierB_rgr","H_HelmetCrew_B","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
		respawnLinkedItems[] = {"V_BandollierB_rgr","H_HelmetCrew_B","NVGoggles","ItemMap","ItemRadio","ItemCompass","ItemWatch","ItemGPS"};
	};
	class B_Heli_Light_01_F;
	class B_Heli_Light_01_armed_F;
	class T1_Heli_Light_01_Camo_F: B_Heli_Light_01_F
	{
		scope = 2;
		faction = "T1_Units";
		displayName = "T1 MH9 (Camo)";
		hiddenSelectionsTextures[] = {"\t1_units\data\vehicles\MH9\t1_mh9_camo_co.paa"};
		crew = "T1_Pilot_Camo_F";
	};
	class T1_Heli_Light_01_armed_Camo_F: B_Heli_Light_01_armed_F
	{
		scope = 2;
		faction = "T1_Units";
		displayName = "T1 AH9 (Camo)";
		hiddenSelectionsTextures[] = {"\t1_units\data\vehicles\MH9\t1_mh9_camo_co.paa"};
		crew = "T1_Pilot_Camo_F";
	};
	class T1_Heli_Light_01_Night_F: B_Heli_Light_01_F
	{
		scope = 2;
		faction = "T1_Units";
		displayName = "T1 MH9 (Night)";
		hiddenSelectionsTextures[] = {"\t1_units\data\vehicles\MH9\t1_mh9_night_co.paa"};
		crew = "T1_Pilot_Night_F";
	};
	class T1_Heli_Light_01_armed_Night_F: B_Heli_Light_01_armed_F
	{
		scope = 2;
		faction = "T1_Units";
		displayName = "T1 AH9 (Night)";
		hiddenSelectionsTextures[] = {"\t1_units\data\vehicles\MH9\t1_mh9_night_co.paa"};
		crew = "T1_Pilot_Night_F";
	};
	class T1_Heli_Light_01_Black_F: B_Heli_Light_01_F
	{
		scope = 2;
		faction = "T1_Units";
		displayName = "T1 MH9 (Black)";
		hiddenSelectionsTextures[] = {"\t1_units\data\vehicles\MH9\t1_mh9_black_co.paa"};
		crew = "T1_Pilot_Black_F";
	};
	class T1_Heli_Light_01_armed_Black_F: B_Heli_Light_01_armed_F
	{
		scope = 2;
		faction = "T1_Units";
		displayName = "T1 AH9 (Black)";
		hiddenSelectionsTextures[] = {"\t1_units\data\vehicles\MH9\t1_mh9_black_co.paa"};
		crew = "T1_Pilot_Black_F";
	};
	class T1_Heli_Light_01_BlackCamo_F: B_Heli_Light_01_F
	{
		scope = 2;
		faction = "T1_Units";
		displayName = "T1 MH9 (Black Camo)";
		hiddenSelectionsTextures[] = {"\t1_units\data\vehicles\MH9\t1_mh9_BlackCamo_co.paa"};
		crew = "T1_Pilot_BlackCamo_F";
	};
	class T1_Heli_Light_01_armed_BlackCamo_F: B_Heli_Light_01_armed_F
	{
		scope = 2;
		faction = "T1_Units";
		displayName = "T1 AH9 (Black Camo)";
		hiddenSelectionsTextures[] = {"\t1_units\data\vehicles\MH9\t1_mh9_BlackCamo_co.paa"};
		crew = "T1_Pilot_BlackCamo_F";
	};
};
class CfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class arifle_MX_F;
	class arifle_Mk20_GL_F;
	class arifle_Mk20_F;
	class srifle_EBR_F;
	class T1_arifle_MX_Hamr_pointer_snds_F: arifle_MX_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_H";
				slot = "MuzzleSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class T1_arifle_MX_ACO_pointer_snds_F: arifle_MX_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ACO";
				slot = "CowsSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_H";
				slot = "MuzzleSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class T1_arifle_Mk20_GL_Hamr_pointer_snds_F: arifle_Mk20_GL_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_M";
				slot = "MuzzleSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class T1_arifle_Mk20_ACO_pointer_snds_F: arifle_Mk20_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ACO";
				slot = "CowsSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_M";
				slot = "MuzzleSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class T1_srifle_EBR_SOS_pointer_snds_F: srifle_EBR_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_SOS";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_B";
				slot = "MuzzleSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class T1_U_Squad_Standard: Uniform_Base
	{
		scope = 2;
		displayName = "T1 Uniform";
		picture = "\t1_units\data\ui\icon_t1_u_squad_standard.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "T1_Squad_Soldier_F";
			containerClass = "Supply130";
			mass = 80;
		};
	};
	class T1_U_Diver_Standard: Uniform_Base
	{
		scope = 2;
		displayName = "T1 Wetsuit";
		picture = "\A3\characters_f\data\ui\icon_U_B_Wetsuit_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "T1_Diver_Soldier_F";
			uniformtype = "Neopren";
			containerClass = "Supply230";
			mass = 80;
		};
	};
	class T1_U_Sniper_Standard: Uniform_Base
	{
		scope = 2;
		displayName = "T1 Ghillie Suit";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "T1_Sniper_Standard_F";
			containerClass = "Supply110";
			mass = 80;
		};
	};
	class T1_U_Instructor_Polo_Black: Uniform_Base
	{
		scope = 2;
		displayName = "T1 Instructor (Black)";
		picture = "\t1_units\data\ui\icon_t1_u_instructor_polo_black.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "T1_Instructor_Polo_Black_F";
			containerClass = "Supply110";
			mass = 80;
		};
	};
	class T1_U_Instructor_Polo_Orange: Uniform_Base
	{
		scope = 2;
		displayName = "T1 Instructor (Orange)";
		picture = "\t1_units\data\ui\icon_t1_u_instructor_polo_orange.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "T1_Instructor_Polo_Orange_F";
			containerClass = "Supply110";
			mass = 80;
		};
	};
	class T1_U_Pilot_Standard: Uniform_Base
	{
		scope = 2;
		displayName = "T1 Coveralls";
		picture = "\A3\characters_f\data\ui\icon_U_B_coveralls_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "T1_Pilot_Standard_F";
			containerClass = "Supply120";
			mass = 80;
		};
	};
	class T1_U_Pilot_Black: Uniform_Base
	{
		scope = 2;
		displayName = "T1 Coveralls (Black)";
		picture = "\t1_units\data\ui\icon_t1_u_pilot_black.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "T1_Pilot_Black_F";
			containerClass = "Supply120";
			mass = 80;
		};
	};
	class T1_U_Pilot_BlackCamo: Uniform_Base
	{
		scope = 2;
		displayName = "T1 Coveralls (Black Camo)";
		picture = "\t1_units\data\ui\icon_t1_u_pilot_blackcamo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "T1_Pilot_BlackCamo_F";
			containerClass = "Supply120";
			mass = 80;
		};
	};
	class T1_U_Pilot_Camo: Uniform_Base
	{
		scope = 2;
		displayName = "T1 Coveralls (Camo)";
		picture = "\t1_units\data\ui\icon_t1_u_pilot_camo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "T1_Pilot_Camo_F";
			containerClass = "Supply120";
			mass = 80;
		};
	};
	class T1_U_Pilot_Night: Uniform_Base
	{
		scope = 2;
		displayName = "T1 Coveralls (Night)";
		picture = "\t1_units\data\ui\icon_t1_u_pilot_night.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "T1_Pilot_Night_F";
			containerClass = "Supply120";
			mass = 80;
		};
	};
	class H_Booniehat_khk;
	class T1_H_Booniehat_mcamo: H_Booniehat_khk
	{
		displayname = "T1 Booniehat";
		hiddenselectionstextures[] = {"\A3\Characters_F\Common\Data\booniehat_mcamo_co.paa"};
	};
	class LMG_Zafir_F;
	class T1_LMG_Zafir_F: LMG_Zafir_F
	{
		magazines[] = {"T1_150Rnd_762x51_Box","T1_150Rnd_762x51_Box_Tracer"};
	};
	class T1_LMG_Zafir_pointer_F: T1_LMG_Zafir_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
};
class CfgAmmo
{
	class B_762x51_Tracer_Green;
	class T1_B_762x51_Tracer_Red: B_762x51_Tracer_Green
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
};
class CfgMagazines
{
	class 150Rnd_762x51_Box;
	class T1_150Rnd_762x51_Box: 150Rnd_762x51_Box
	{
		ammo = "T1_B_762x51_Tracer_Red";
	};
	class T1_150Rnd_762x51_Box_Tracer: T1_150Rnd_762x51_Box
	{
		descriptionshort = "Caliber: 7.62x51 mm Tracer - Red<br/>Rounds: 150<br />Used in: Zafir";
		displayname = "7.62mm 150Rnd Tracer (Red) Box";
		displaynameshort = "Tracer";
		tracersevery = 1;
	};
};
//};
