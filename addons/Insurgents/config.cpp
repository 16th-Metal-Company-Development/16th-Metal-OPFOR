class CfgPatches
{
	class MET_MLA_Faction
	{
		units[] = { "MET_MLA_Rifleman_E5","MET_MLA_Rifleman_DC15S","MET_MLA_Autorifleman_DC15L","MET_MLA_Autorifleman_E5C","MET_MLA_Marksman_DC15X","MET_MLA_Marksman_E5S","MET_MLA_Grenadier","MET_MLA_Light_AntiTank_E60R","MET_MLA_Light_AntiTank_RPS6","MET_MLA_Crewman","MET_MLA_AAT","MET_MLA_ISP" };
		weapons[] = { "MET_MLA_DC15L","MET_MLA_DC15X" };
		requiredVersion = 0.1;
		skipWhenMissingDependencies=1;
		requiredAddons[] = {};
	};
};

class CfgFactionClasses
{
	class MET_MLA
	{
		displayName = "[16th] Mimbanese Liberation Army";
		side = 0;
		flag = "";
		icon = "";
		priority = 1;
	};
};

class CfgEditorSubcategories
{
	class MET_MLA_Infantry
	{
		displayName = "Men";
	};
	class MET_MLA_Armor
	{
		displayName = "Armor";
	};
};

class cfgWeapons
{
	class 3AS_DC15L_F;
	class 3AS_DC15X_F;

	class MET_MLA_DC15L : 3AS_DC15L_F
	{
	  displayName = "[MLA] DC-15L";
	  scope = 1;
	  class LinkedItems
	  {
		class LinkedItemsOptic
		{
		  slot = "CowsSlot";
		  item = "3AS_optic_DC15L_F";
		};
		class LinkedItemsUnder
		{
		  slot = "UnderBarrelSlot";
		  item = "3AS_bipod_DC15L_F";
		};
	  };
	};

	class MET_MLA_DC15X : 3AS_DC15X_F
	{
	  displayName = "[MLA] DC-15X";
	  scope = 1;
	  class LinkedItems
	  {
		class LinkedItemsOptic
		{
		  slot = "CowsSlot";
		  item = "3AS_optic_DC15X_F";
		};
		class LinkedItemsUnder
		{
		  slot = "UnderBarrelSlot";
		  item = "3AS_bipod_DC15X_F";
		};
	  };
	};
};

class cfgVehicles
{
	class ls_orsfBackpack_trooper;
	class 3AS_AAT_Arid;
	class 3AS_ISP;

	class B_Soldier_base_F;
	class Mimbanese_Man_Base : B_Soldier_base_F	// Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
	{
		author = "CommanderChet";			// The name of the author of the asset, which is displayed in the editor.
		scope = 1;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 1;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 1;					// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		identityTypes[] = { "Male03PER","ls_zeltron_male1_red","G_NATO_default" };		// Identity Types are explained in the Headgear section of this guide.
		displayName = "Mimbanese_Man_Base"; // The name of the soldier, which is displayed in the editor.
		cost = 200000;						// How likely the enemies attack this character among some others.
		camouflage = 1.5;					// How likely this character is spotted (smaller number = more stealthy).
		sensitivity = 2.5;					// How likely this character spots enemies when controlled by AI.
		threat[] = { 1, 1, 0.8 };			// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";			// The path to the uniform model this character uses.
		uniformClass = "U_B_soldier_new";							// This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = { "camo" };							// List of model selections which can be changed with hiddenSelectionTextures[]
		hiddenSelectionsTextures[] = { "\A3\Characters_F_New\BLUFOR\Data\b_soldier_new.paa" };	// The textures for the selections defined above.
		canDeactivateMines = 0;					// Can this character deactivate mines?
		engineer = 0;							// Can this character repair vehicles?
		attendant = 0;							// Can this character heal soldiers?
		icon = "iconMan";				// If a character has a special role, a special icon shall be used.
		backpack = "";		// Which backpack the character is wearing.
		weapons[] = { "Throw", "Put" };		// Which weapons the character has.
		respawnWeapons[] = { "Throw", "Put" };	// Which weapons the character respawns with.
		Items[] = {};			// Which items the character has.
		RespawnItems[] = {};		// Which items the character respawns with.
		magazines[] = {};			// What ammunition the character has.
		respawnMagazines[] = {};	// What ammunition the character respawns with.
		linkedItems[] = {};		// Which items the character has.
		respawnLinkedItems[] = {};	// Which items the character respawns with.
	};

	class MET_MLA_Rifleman_E5 : Mimbanese_Man_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "MET_MLA";
		side = 0;
		displayName = "Rifleman (E5)";
		editorSubcategory = "MET_MLA_Infantry";
		uniformClass = "U_C_WorkerCoverallsGloves_orange";
		weapons[] = { "212th_RangeFinder_Unmarked","3AS_E5_F","Put","Throw" };
		respawnWeapons[] = { "212th_RangeFinder_Unmarked","3AS_E5_F","Put","Throw" };
		items[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		respawnItems[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		magazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","3AS_60Rnd_EM50_RedPlasma","3AS_60Rnd_EM50_RedPlasma","3AS_60Rnd_EM50_RedPlasma","3AS_60Rnd_EM50_RedPlasma","3AS_60Rnd_EM50_RedPlasma","3AS_60Rnd_EM50_RedPlasma","3AS_60Rnd_EM50_RedPlasma","3AS_60Rnd_EM50_RedPlasma" };
		respawnMagazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","3AS_60Rnd_EM50_RedPlasma","3AS_60Rnd_EM50_RedPlasma","3AS_60Rnd_EM50_RedPlasma","3AS_60Rnd_EM50_RedPlasma","3AS_60Rnd_EM50_RedPlasma","3AS_60Rnd_EM50_RedPlasma","3AS_60Rnd_EM50_RedPlasma","3AS_60Rnd_EM50_RedPlasma" };
		linkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","H_Watchcap_red","V_Chestrig_blk_noHydrator","ls_rebel_chestPouches","ls_nvg_goggles" };
		respawnLinkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","H_Watchcap_red","V_Chestrig_blk_noHydrator","ls_rebel_chestPouches","ls_nvg_goggles" };
		backpack = "ls_orsfBackpack_trooper";
	};

	class MET_MLA_Rifleman_DC15S : Mimbanese_Man_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "MET_MLA";
		side = 0;
		displayName = "Rifleman (DC15S)";
		editorSubcategory = "MET_MLA_Infantry";
		uniformClass = "U_C_WorkerCoverallsGloves_orange";
		weapons[] = { "212th_RangeFinder_Unmarked","3AS_DC15S_F","Put","Throw" };
		respawnWeapons[] = { "212th_RangeFinder_Unmarked","3AS_DC15S_F","Put","Throw" };
		items[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		respawnItems[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		magazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag" };
		respawnMagazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag" };
		linkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","SC_Turban_Black","V_Chestrig_blk_noHydrator","ls_rebel_chestPouches","ls_nvg_goggles" };
		respawnLinkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","SC_Turban_Black","V_Chestrig_blk_noHydrator","ls_rebel_chestPouches","ls_nvg_goggles" };
		backpack = "ls_orsfBackpack_trooper";
	};

	class MET_MLA_Autorifleman_DC15L : Mimbanese_Man_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "MET_MLA";
		side = 0;
		displayName = "Autorifleman (DC15L)";
		editorSubcategory = "MET_MLA_Infantry";
		icon = "iconManMG";
		uniformClass = "U_C_WorkerCoverallsGloves_orange";
		weapons[] = { "212th_RangeFinder_Unmarked","MET_MLA_DC15L","Put","Throw" };
		respawnWeapons[] = { "212th_RangeFinder_Unmarked","MET_MLA_DC15L","Put","Throw" };
		items[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		respawnItems[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		magazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","3AS_200Rnd_EM40_Mag","3AS_200Rnd_EM40_Mag","3AS_200Rnd_EM40_Mag","3AS_200Rnd_EM40_Mag" };
		respawnMagazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","3AS_200Rnd_EM40_Mag","3AS_200Rnd_EM40_Mag","3AS_200Rnd_EM40_Mag","3AS_200Rnd_EM40_Mag" };
		linkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","ls_helmet_m1","V_PlateCarrier1_blk","ls_glasses_coif","ls_nvg_goggles" };
		respawnLinkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","ls_helmet_m1","V_PlateCarrier1_blk","ls_glasses_coif","ls_nvg_goggles" };
		backpack = "MET_MLA_Autorifleman_DC15L_pack";
	};

	class MET_MLA_Autorifleman_E5C : Mimbanese_Man_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "MET_MLA";
		side = 0;
		displayName = "Autorifleman (E5C)";
		editorSubcategory = "MET_MLA_Infantry";
		icon = "iconManMG";
		uniformClass = "U_C_WorkerCoverallsGloves_orange";
		weapons[] = { "212th_RangeFinder_Unmarked","E5C_F","Put","Throw" };
		respawnWeapons[] = { "212th_RangeFinder_Unmarked","E5C_F","Put","Throw" };
		items[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		respawnItems[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		magazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","3AS_130Rnd_EM50_RedPlasma","3AS_130Rnd_EM50_RedPlasma","3AS_130Rnd_EM50_RedPlasma","3AS_130Rnd_EM50_RedPlasma","3AS_130Rnd_EM50_RedPlasma","3AS_130Rnd_EM50_RedPlasma" };
		respawnMagazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","3AS_130Rnd_EM50_RedPlasma","3AS_130Rnd_EM50_RedPlasma","3AS_130Rnd_EM50_RedPlasma","3AS_130Rnd_EM50_RedPlasma","3AS_130Rnd_EM50_RedPlasma","3AS_130Rnd_EM50_RedPlasma" };
		linkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","ls_helmet_m1_light","V_PlateCarrier1_blk","ls_glasses_coif","ls_nvg_goggles" };
		respawnLinkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","ls_helmet_m1_light","V_PlateCarrier1_blk","ls_glasses_coif","ls_nvg_goggles" };
		backpack = "MET_MLA_Autorifleman_E5C_pack";
	};

	class MET_MLA_Marksman_DC15X : Mimbanese_Man_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "MET_MLA";
		side = 0;
		displayName = "Marksman (DC15X)";
		editorSubcategory = "MET_MLA_Infantry";
		uniformClass = "U_C_WorkerCoverallsGloves_orange";
		weapons[] = { "212th_RangeFinder_Unmarked","MET_MLA_DC15X","Put","Throw" };
		respawnWeapons[] = { "212th_RangeFinder_Unmarked","MET_MLA_DC15X","Put","Throw" };
		items[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		respawnItems[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		magazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","3AS_10Rnd_EM100_Mag","3AS_10Rnd_EM100_Mag","3AS_10Rnd_EM100_Mag","3AS_10Rnd_EM100_Mag","3AS_10Rnd_EM100_Mag","3AS_10Rnd_EM100_Mag","3AS_10Rnd_EM100_Mag","3AS_10Rnd_EM100_Mag" };
		respawnMagazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","3AS_10Rnd_EM100_Mag","3AS_10Rnd_EM100_Mag","3AS_10Rnd_EM100_Mag","3AS_10Rnd_EM100_Mag","3AS_10Rnd_EM100_Mag","3AS_10Rnd_EM100_Mag","3AS_10Rnd_EM100_Mag","3AS_10Rnd_EM100_Mag" };
		linkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","H_PASGT_basic_black_F","ls_vest_flakJacket_open","ls_glasses_coif","ls_nvg_goggles" };
		respawnLinkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","H_PASGT_basic_black_F","ls_vest_flakJacket_open","ls_glasses_coif","ls_nvg_goggles" };
		backpack = "JMM_B_TacBelt_blk";
	};

	class MET_MLA_Marksman_E5S : Mimbanese_Man_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "MET_MLA";
		side = 0;
		displayName = "Marksman (E5S)";
		editorSubcategory = "MET_MLA_Infantry";
		uniformClass = "U_C_WorkerCoverallsGloves_orange";
		weapons[] = { "212th_RangeFinder_Unmarked","3AS_E5S_F","Put","Throw" };
		respawnWeapons[] = { "212th_RangeFinder_Unmarked","3AS_E5S_F","Put","Throw" };
		items[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		respawnItems[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		magazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","3AS_10Rnd_EM90_Mag","3AS_10Rnd_EM90_Mag","3AS_10Rnd_EM90_Mag","3AS_10Rnd_EM90_Mag","3AS_10Rnd_EM90_Mag","3AS_10Rnd_EM90_Mag","3AS_10Rnd_EM90_Mag","3AS_10Rnd_EM90_Mag" };
		respawnMagazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","3AS_10Rnd_EM90_Mag","3AS_10Rnd_EM90_Mag","3AS_10Rnd_EM90_Mag","3AS_10Rnd_EM90_Mag","3AS_10Rnd_EM90_Mag","3AS_10Rnd_EM90_Mag","3AS_10Rnd_EM90_Mag","3AS_10Rnd_EM90_Mag" };
		linkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","212th_RangeFinder_Unmarked","ls_vest_flakJacket_open","ls_glasses_coif" };
		respawnLinkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","212th_RangeFinder_Unmarked","ls_vest_flakJacket_open","ls_glasses_coif" };
		backpack = "JMM_B_TacBelt_blk";
	};

	class MET_MLA_Grenadier : Mimbanese_Man_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "MET_MLA";
		side = 0;
		displayName = "Grenadier";
		editorSubcategory = "MET_MLA_Infantry";
		uniformClass = "U_C_WorkerCoverallsGloves_orange";
		weapons[] = { "212th_RangeFinder_Unmarked","3AS_DC15S_GL","Put","Throw" };
		respawnWeapons[] = { "212th_RangeFinder_Unmarked","3AS_DC15S_GL","Put","Throw" };
		items[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		respawnItems[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		magazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_1UGL_MK54_HE_shell","3AS_1UGL_MK54_HE_shell","3AS_1UGL_MK54_HE_shell","3AS_1UGL_MK54_HE_shell","3AS_1UGL_MK54_HE_shell" };
		respawnMagazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_1UGL_MK54_HE_shell","3AS_1UGL_MK54_HE_shell","3AS_1UGL_MK54_HE_shell","3AS_1UGL_MK54_HE_shell","3AS_1UGL_MK54_HE_shell" };
		linkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","SC_Turban_Black","V_Chestrig_blk_noHydrator","ls_imperial_satchel","ls_nvg_goggles" };
		respawnLinkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","SC_Turban_Black","V_Chestrig_blk_noHydrator","ls_imperial_satchel","ls_nvg_goggles" };
		backpack = "MET_MLA_Grenadier_pack";
	};

	class MET_MLA_Light_AntiTank_E60R : Mimbanese_Man_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "MET_MLA";
		side = 0;
		displayName = "Light AT (E60R)";
		editorSubcategory = "MET_MLA_Infantry";
		uniformClass = "U_C_WorkerCoverallsGloves_orange";
		weapons[] = { "212th_RangeFinder_Unmarked","3AS_E5_F","ls_weapon_e60r_at","Put","Throw" };
		respawnWeapons[] = { "212th_RangeFinder_Unmarked","3AS_E5_F","ls_weapon_e60r_at","Put","Throw" };
		items[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		respawnItems[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		magazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","3AS_60Rnd_EM50_RedPlasma","3AS_60Rnd_EM50_RedPlasma","3AS_60Rnd_EM50_RedPlasma","3AS_60Rnd_EM50_RedPlasma","3AS_60Rnd_EM50_RedPlasma","3AS_60Rnd_EM50_RedPlasma","3AS_60Rnd_EM50_RedPlasma","3AS_60Rnd_EM50_RedPlasma","ls_magazine_e60r_at","ls_magazine_e60r_at","ls_magazine_e60r_at" };
		respawnMagazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","3AS_60Rnd_EM50_RedPlasma","3AS_60Rnd_EM50_RedPlasma","3AS_60Rnd_EM50_RedPlasma","3AS_60Rnd_EM50_RedPlasma","3AS_60Rnd_EM50_RedPlasma","3AS_60Rnd_EM50_RedPlasma","3AS_60Rnd_EM50_RedPlasma","3AS_60Rnd_EM50_RedPlasma","ls_magazine_e60r_at","ls_magazine_e60r_at","ls_magazine_e60r_at" };
		linkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","H_Watchcap_red","V_Chestrig_blk_noHydrator","3AS_G_AT_4_F","ls_nvg_goggles" };
		respawnLinkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","H_Watchcap_red","V_Chestrig_blk_noHydrator","3AS_G_AT_4_F","ls_nvg_goggles" };
		backpack = "MET_MLA_Light_AntiTank_E60R_pack";
	};

	class MET_MLA_Light_AntiTank_RPS6 : Mimbanese_Man_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "MET_MLA";
		side = 0;
		displayName = "Light AT (RPS6)";
		editorSubcategory = "MET_MLA_Infantry";
		uniformClass = "U_C_WorkerCoverallsGloves_orange";
		weapons[] = { "212th_RangeFinder_Unmarked","3AS_DC15S_F","rps_16th","Put","Throw" };
		respawnWeapons[] = { "212th_RangeFinder_Unmarked","3AS_DC15S_F","rps_16th","Put","Throw" };
		items[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		respawnItems[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		magazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","DBA_90mm_IK40_FRAG_x1_mag","DBA_90mm_IK40_FRAG_x1_mag","DBA_90mm_IK40_FRAG_x1_mag","DBA_90mm_IK40_FRAG_x1_mag" };
		respawnMagazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","DBA_90mm_IK40_FRAG_x1_mag","DBA_90mm_IK40_FRAG_x1_mag","DBA_90mm_IK40_FRAG_x1_mag","DBA_90mm_IK40_FRAG_x1_mag" };
		linkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","SC_Turban_Black","V_Chestrig_blk_noHydrator","3AS_G_AT_4_F","ls_nvg_goggles" };
		respawnLinkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","SC_Turban_Black","V_Chestrig_blk_noHydrator","3AS_G_AT_4_F","ls_nvg_goggles" };
		backpack = "MET_MLA_Light_AntiTank_RPS6_pack";
	};

	class MET_MLA_Crewman : Mimbanese_Man_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "MET_MLA";
		side = 0;
		displayName = "Crewman";
		editorSubcategory = "MET_MLA_Infantry";
		uniformClass = "U_C_WorkerCoverallsGloves_orange";
		weapons[] = { "212th_RangeFinder_Unmarked","3AS_DC17S_F","Put","Throw" };
		respawnWeapons[] = { "212th_RangeFinder_Unmarked","3AS_DC17S_F","Put","Throw" };
		items[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal" };
		respawnItems[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal" };
		magazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","Aux212_3AS_DC17S_Mag","Aux212_3AS_DC17S_Mag" };
		respawnMagazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","Aux212_3AS_DC17S_Mag","Aux212_3AS_DC17S_Mag" };
		linkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","V_Rangemaster_belt_black","ls_glasses_coif","ls_nvg_goggles" };
		respawnLinkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","V_Rangemaster_belt_black","ls_glasses_coif","ls_nvg_goggles" };
		backpack = "";
	};

	class MET_MLA_AAT : 3AS_AAT_Arid
	{
	  scope = 2;
	  scopeCurator = 2;
	  scopeArsenal = 2;
	  faction = "MET_MLA";
	  side = 0;
	  displayName = "AAT";
	  editorSubcategory = "MET_MLA_Armor";
	  hiddenSelectionsTextures[] = {"3as\3as_aat\data\arid_aat_co.paa"};
	  crew = "MET_MLA_Crewman";
	  typicalCargo[] = {"MET_MLA_Crewman"};
	};

	class MET_MLA_ISP : 3AS_ISP
	{
	  scope = 2;
	  scopeCurator = 2;
	  scopeArsenal = 2;
	  faction = "MET_MLA";
	  side = 0;
	  displayName = "ISP";
	  editorSubcategory = "MET_MLA_Armor";
	  hiddenSelectionsTextures[] = {"3as\3as_lightvics\3as_isp\textures\isp_base_co.paa","3as\3as_lightvics\3as_isp\textures\isp_screens_co.paa"};
	  crew = "MET_MLA_Rifleman_E5";
	  typicalCargo[] = {"MET_MLA_Rifleman_E5"};
	};

	class MET_MLA_Autorifleman_DC15L_pack : ls_orsfBackpack_trooper
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_3AS_200Rnd_EM40_Mag { count = 4;magazine = "3AS_200Rnd_EM40_Mag"; };
		};
		class TransportItems {};
		class TransportWeapons {};
	};

	class MET_MLA_Autorifleman_E5C_pack : ls_orsfBackpack_trooper
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_3AS_130Rnd_EM50_RedPlasma { count = 6;magazine = "3AS_130Rnd_EM50_RedPlasma"; };
		};
		class TransportItems {};
		class TransportWeapons {};
	};

	class MET_MLA_Grenadier_pack : ls_orsfBackpack_trooper
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_3AS_1UGL_MK54_HE_shell { count = 5;magazine = "3AS_1UGL_MK54_HE_shell"; };
		};
		class TransportItems {};
		class TransportWeapons {};
	};

	class MET_MLA_Light_AntiTank_E60R_pack : ls_orsfBackpack_trooper
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_ls_magazine_e60r_at { count = 3;magazine = "ls_magazine_e60r_at"; };
		};
		class TransportItems {};
		class TransportWeapons {};
	};

	class MET_MLA_Light_AntiTank_RPS6_pack : ls_orsfBackpack_trooper
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_DBA_90mm_IK40_FRAG_x1_mag { count = 4;magazine = "DBA_90mm_IK40_FRAG_x1_mag"; };
		};
		class TransportItems {};
		class TransportWeapons {};
	};

};

//////////////////////////////////////////////////////////////////////////////////
// Config Automatically Generated by ALiVE ORBAT Creator
// Generated with Arma 3 version 220.152984 on Stable branch
// Generated with ALiVE version 2.1.9.2501091
//////////////////////////////////////////////////////////////////////////////////

class CfgGroups {
	class EAST {

		class MET_MLA {
			name = "Mimbanese Liberation Army";

			class Infantry {
				name = "Infantry";

				class MET_MLA_Sentry {
					name = "Sentry";
					side = 0;
					faction = "MET_MLA";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = { 0,0,0 };
						rank = "SERGEANT";
						side = 0;
						vehicle = "MET_MLA_Rifleman_DC15S";
					};
					class Unit1 {
						position[] = { 5,-5,0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "MET_MLA_Autorifleman_E5C";
					};
				};

				class MET_MLA_Sniper_Team {
					name = "Sniper Team";
					side = 0;
					faction = "MET_MLA";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = { 0,0,0 };
						rank = "SERGEANT";
						side = 0;
						vehicle = "MET_MLA_Marksman_DC15X";
					};
					class Unit1 {
						position[] = { 5,-5,0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "MET_MLA_Marksman_E5S";
					};
				};

				class MET_MLA_Fireteam {
					name = "Fireteam";
					side = 0;
					faction = "MET_MLA";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = { 0,0,0 };
						rank = "SERGEANT";
						side = 0;
						vehicle = "MET_MLA_Rifleman_E5";
					};
					class Unit1 {
						position[] = { 5,-5,0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "MET_MLA_Rifleman_DC15S";
					};
					class Unit2 {
						position[] = { -5,-5,0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "MET_MLA_Autorifleman_DC15L";
					};
					class Unit3 {
						position[] = { 10,-10,0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "MET_MLA_Rifleman_DC15S";
					};
				};

				class MET_MLA_AT_Team {
					name = "Anti-Armor Team";
					side = 0;
					faction = "MET_MLA";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = { 0,0,0 };
						rank = "SERGEANT";
						side = 0;
						vehicle = "MET_MLA_Rifleman_DC15S";
					};
					class Unit1 {
						position[] = { 5,-5,0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "MET_MLA_Autorifleman_E5C";
					};
					class Unit2 {
						position[] = { -5,-5,0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "MET_MLA_Light_AntiTank_E60R";
					};
					class Unit3 {
						position[] = { 10,-10,0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "MET_MLA_Light_AntiTank_RPS6";
					};
				};

				class MET_MLA_Squad {
					name = "Squad";
					side = 0;
					faction = "MET_MLA";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = { 0,0,0 };
						rank = "SERGEANT";
						side = 0;
						vehicle = "MET_MLA_Rifleman_E5";
					};
					class Unit1 {
						position[] = { 5,-5,0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "MET_MLA_Rifleman_DC15S";
					};
					class Unit2 {
						position[] = { -5,-5,0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "MET_MLA_Rifleman_DC15S";
					};
					class Unit3 {
						position[] = { 10,-10,0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "MET_MLA_Rifleman_E5";
					};
					class Unit4 {
						position[] = { -10,-10,0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "MET_MLA_Light_AntiTank_RPS6";
					};
					class Unit5 {
						position[] = { 15,-15,0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "MET_MLA_Autorifleman_E5C";
					};
					class Unit6 {
						position[] = { -15,-15,0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "MET_MLA_Autorifleman_DC15L";
					};
					class Unit7 {
						position[] = { 20,-20,0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "MET_MLA_Marksman_E5S";
					};
				};
			};
		};
	};
};

