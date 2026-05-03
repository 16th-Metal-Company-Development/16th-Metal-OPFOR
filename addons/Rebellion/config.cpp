class cfgPatches
{
	class MET_REB_Faction
	{
		units[] = { "MET_REB_Rifleman_1","MET_REB_Rifleman_2","MET_REB_Autorifleman_1","MET_REB_Autorifleman_2","MET_REB_Marksman_1","MET_REB_Marksman_2","MET_REB_Grenadier","MET_REB_Light_Antitank","MET_REB_Crewman","MET_REB_PX_10" };
		weapons[] = { "MET_REB_Pathfinder", "MET_REB_Pathfinder_R", "MET_REB_Pathfinder_Brown", "MET_REB_Pathfinder_Brown_R", "MET_REB_Pathfinder_Navy", "MET_REB_Pathfinder_Navy_R", "MET_REB_Pathfinder_Navy_Alt", "MET_REB_Pathfinder_Navy_Alt_R" };
		requiredVersion = 0.1;
		skipWhenMissingDependencies=1;
		requiredAddons[] = {  };
	};
};

class cfgFactionClasses
{
	class MET_REB
	{
		icon = "";
		displayName = "[16th] Rebellion";
		side = 0;
		priority = 1;
	};
};

class CfgEditorSubcategories
{
	class MET_REB_Infantry
	{
		displayName = "Men";
	};
	class MET_REB_Armor
	{
		displayName = "Armor";
	};
};

#include "gear\CfgWeapons.hpp"

class cfgVehicles
{
	class ls_rebelBackpack_chest_pouch;
	class ls_imperialBackpack_chestRig;
	class ls_gar_beltBag_belt;
	class 3AS_PX10_REB_F;

	class O_Soldier_base_F;
	class MET_REB_Man_Base : O_Soldier_base_F	// Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
	{
		author = "CommanderChet";			// The name of the author of the asset, which is displayed in the editor.
		scope = 1;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 1;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 1;					// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		identityTypes[] = { "LanguageENG_F","Head_NATO","NoGlasses" };	// Identity Types are explained in the Headgear section of this guide.
		displayName = "MET_REB_Man_Base"; // The name of the soldier, which is displayed in the editor.
		cost = 200000;						// How likely the enemies attack this character among some others.
		camouflage = 1.5;					// How likely this character is spotted (smaller number = more stealthy).
		sensitivity = 2.5;					// How likely this character spots enemies when controlled by AI.
		threat[] = { 1, 1, 0.8 };			// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
		model = "\A3\Characters_F\OPFOR\O_soldier_01.p3d";			// The path to the uniform model this character uses.
		uniformClass = "U_O_soldier_new";							// This links this soldier to a particular uniform. For the details, see below.
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


	// Uniform Fixes
	class MET_REB_Pathfinder_Base : MET_REB_Man_Base	// Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
	{
		displayName = "MET_REB_Pathfinder_Base"; // The name of the soldier, which is displayed in the editor.
		model = "\ls\core\addons\characters\uniforms\pathfinder\ls_uniform_pathfinder.p3d";
		uniformClass = "MET_REB_Pathfinder";							// This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = { "camo","camo1","camo2","camo3" };
		hiddenSelectionsTextures[] =
		{
			"\ls\core\addons\characters\uniforms\pathfinder\data\pants_co.paa",
			"\ls\core\addons\characters\uniforms\pathfinder\data\top_co.paa",
			"\ls\core\addons\characters\uniforms\pathfinder\data\pants_co.paa",
			"\ls\core\addons\characters\uniforms\pathfinder\data\pants_co.paa"
		};
	};

	class MET_REB_Pathfinder_Brown_Base : MET_REB_Man_Base	// Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
	{
		displayName = "MET_REB_Pathfinder_Base"; // The name of the soldier, which is displayed in the editor.
		model = "\ls\core\addons\characters\uniforms\pathfinder\ls_uniform_pathfinder.p3d";
		uniformClass = "MET_REB_Pathfinder_Brown";							// This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = { "camo","camo1","camo2","camo3" };
		hiddenSelectionsTextures[] =
		{
			"\ls\core\addons\characters\uniforms\pathfinder\data\pants_lightBrown_co.paa",
			"\ls\core\addons\characters\uniforms\pathfinder\data\top_navy_co.paa",
			"\ls\core\addons\characters\uniforms\pathfinder\data\pants_lightBrown_co.paa",
			"\ls\core\addons\characters\uniforms\pathfinder\data\pants_lightBrown_co.paa"
		};
	};

	class MET_REB_Pathfinder_Navy_Base : MET_REB_Man_Base	// Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
	{
		displayName = "MET_REB_Pathfinder_Base"; // The name of the soldier, which is displayed in the editor.
		model = "\ls\core\addons\characters\uniforms\pathfinder\ls_uniform_pathfinder.p3d";
		uniformClass = "MET_REB_Pathfinder_Navy";							// This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = { "camo","camo1","camo2","camo3" };
		hiddenSelectionsTextures[] =
		{
			"\ls\core\addons\characters\uniforms\pathfinder\data\pants_co.paa",
			"\ls\core\addons\characters\uniforms\pathfinder\data\top_navy_co.paa",
			"\ls\core\addons\characters\uniforms\pathfinder\data\pants_co.paa",
			"\ls\core\addons\characters\uniforms\pathfinder\data\pants_co.paa"
		};
	};

	class MET_REB_Pathfinder_Navy_Alt_Base : MET_REB_Man_Base	// Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
	{
		displayName = "MET_REB_Pathfinder_Base"; // The name of the soldier, which is displayed in the editor.
		model = "\ls\core\addons\characters\uniforms\pathfinder\ls_uniform_pathfinder.p3d";
		uniformClass = "MET_REB_Pathfinder_Navy_Alt";							// This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = { "camo","camo1","camo2","camo3" };
		hiddenSelectionsTextures[] =
		{
			"\ls\core\addons\characters\uniforms\pathfinder\data\pants_navy_co.paa",
			"\ls\core\addons\characters\uniforms\pathfinder\data\top_co.paa",
			"\ls\core\addons\characters\uniforms\pathfinder\data\pants_navy_co.paa",
			"\ls\core\addons\characters\uniforms\pathfinder\data\pants_navy_co.paa"
		};
	};

	class MET_REB_Pathfinder_Base_R : MET_REB_Man_Base	// Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
	{
		displayName = "MET_REB_Pathfinder_Base_R"; // The name of the soldier, which is displayed in the editor.
		model = "\ls\core\addons\characters\uniforms\pathfinder\ls_uniform_pathfinder.p3d";
		uniformClass = "MET_REB_Pathfinder_R";							// This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = { "camo","camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] =
		{
			"\ls\core\addons\characters\uniforms\pathfinder\data\pants_co.paa",
			"\ls\core\addons\characters\uniforms\pathfinder\data\top_co.paa",
			"\ls\core\addons\characters\uniforms\pathfinder\data\pants_co.paa",
			"\ls\core\addons\characters\uniforms\pathfinder\data\pants_co.paa",
			"\ls\core\addons\characters\uniforms\pathfinder\data\rolled_sleeves_co.paa"
		};
	};

	class MET_REB_Pathfinder_Brown_Base_R : MET_REB_Man_Base	// Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
	{
		displayName = "MET_REB_Pathfinder_Base_R"; // The name of the soldier, which is displayed in the editor.
		model = "\ls\core\addons\characters\uniforms\pathfinder\ls_uniform_pathfinder_r.p3d";
		uniformClass = "MET_REB_Pathfinder_Brown_R";							// This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = { "camo","camo1","camo2","camo3","camo4" };
		hiddenSelectionsTextures[] =
		{
			"\ls\core\addons\characters\uniforms\pathfinder\data\pants_lightBrown_co.paa",
			"\ls\core\addons\characters\uniforms\pathfinder\data\top_navy_co.paa",
			"\ls\core\addons\characters\uniforms\pathfinder\data\pants_lightBrown_co.paa",
			"\ls\core\addons\characters\uniforms\pathfinder\data\pants_lightBrown_co.paa",
			"\ls\core\addons\characters\uniforms\pathfinder\data\rolled_sleeves_navy_co.paa"
		};
	};

	class MET_REB_Pathfinder_Navy_Base_R : MET_REB_Man_Base	// Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
	{
		displayName = "MET_REB_Pathfinder_Base_R"; // The name of the soldier, which is displayed in the editor.
		model = "\ls\core\addons\characters\uniforms\pathfinder\ls_uniform_pathfinder_r.p3d";
		uniformClass = "MET_REB_Pathfinder_Navy_R";							// This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = { "camo","camo1","camo2","camo3","camo4" };
		hiddenSelectionsTextures[] =
		{
			"\ls\core\addons\characters\uniforms\pathfinder\data\pants_co.paa",
			"\ls\core\addons\characters\uniforms\pathfinder\data\top_navy_co.paa",
			"\ls\core\addons\characters\uniforms\pathfinder\data\pants_co.paa",
			"\ls\core\addons\characters\uniforms\pathfinder\data\pants_co.paa",
			"\ls\core\addons\characters\uniforms\pathfinder\data\rolled_sleeves_navy_co.paa"
		};
	};

	class MET_REB_Pathfinder_Navy_Alt_Base_R : MET_REB_Man_Base	// Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
	{
		displayName = "MET_REB_Pathfinder_Base_R"; // The name of the soldier, which is displayed in the editor.
		model = "\ls\core\addons\characters\uniforms\pathfinder\ls_uniform_pathfinder_r.p3d";
		uniformClass = "MET_REB_Pathfinder_Navy_Alt_R";							// This links this soldier to a particular uniform. For the details, see below.
		hiddenSelections[] = { "camo","camo1","camo2","camo3","camo4" };
		hiddenSelectionsTextures[] =
		{
			"\ls\core\addons\characters\uniforms\pathfinder\data\pants_navy_co.paa",
			"\ls\core\addons\characters\uniforms\pathfinder\data\top_co.paa",
			"\ls\core\addons\characters\uniforms\pathfinder\data\pants_navy_co.paa",
			"\ls\core\addons\characters\uniforms\pathfinder\data\pants_navy_co.paa",
			"\ls\core\addons\characters\uniforms\pathfinder\data\rolled_sleeves_co.paa"
		};
	};


	// Units
	class MET_REB_Rifleman_1 : MET_REB_Pathfinder_Navy_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "MET_REB";
		side = 0;
		displayName = "Rifleman (E5)";
		editorSubcategory = "MET_REB_Infantry";
		weapons[] = { "212th_RangeFinder_Unmarked","Metal_E5","Put","Throw" };
		respawnWeapons[] = { "212th_RangeFinder_Unmarked","Metal_E5","Put","Throw" };
		items[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		respawnItems[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		magazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","Metal_E5_Mag","Metal_E5_Mag","Metal_E5_Mag","Metal_E5_Mag","Metal_E5_Mag","Metal_E5_Mag","Metal_E5_Mag","Metal_E5_Mag" };
		respawnMagazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","Metal_E5_Mag","Metal_E5_Mag","Metal_E5_Mag","Metal_E5_Mag","Metal_E5_Mag","Metal_E5_Mag","Metal_E5_Mag","Metal_E5_Mag" };
		linkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","ls_helmet_jockey_navy_alt","ls_vest_flakJacket_pouchesAlt","ls_rebel_chestPouches","ls_nvg_goggles" };
		respawnLinkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","ls_helmet_jockey_navy_alt","ls_vest_flakJacket_pouchesAlt","ls_rebel_chestPouches","ls_nvg_goggles" };
		backpack = "B_AssaultPack_blk";
	};

	class MET_REB_Rifleman_2 : MET_REB_Pathfinder_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "MET_REB";
		side = 0;
		displayName = "Rifleman (SPK-12)";
		editorSubcategory = "MET_REB_Infantry";
		weapons[] = { "212th_RangeFinder_Unmarked","IDA_SPK12","Put","Throw" };
		respawnWeapons[] = { "212th_RangeFinder_Unmarked","IDA_SPK12","Put","Throw" };
		items[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		respawnItems[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		magazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red" };
		respawnMagazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red" };
		linkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","ls_helmet_jockey_alt","ls_vest_flakJacket_pouches_brown","ls_rebel_chestPouches","ls_nvg_goggles" };
		respawnLinkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","ls_helmet_jockey_alt","ls_vest_flakJacket_pouches_brown","ls_rebel_chestPouches","ls_nvg_goggles" };
		backpack = "B_AssaultPack_cbr";
	};

	class MET_REB_Autorifleman_1 : MET_REB_Pathfinder_Navy_Alt_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "MET_REB";
		side = 0;
		displayName = "Autorifleman (E5C)";
		icon = "iconManMG";
		editorSubcategory = "MET_REB_Infantry";
		weapons[] = { "212th_RangeFinder_Unmarked","Metal_E5C_stock","Put","Throw" };
		respawnWeapons[] = { "212th_RangeFinder_Unmarked","Metal_E5C_stock","Put","Throw" };
		items[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		respawnItems[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		magazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","Metal_E5C_Mag","Metal_E5C_Mag","Metal_E5C_Mag","Metal_E5C_Mag","Metal_E5C_Mag","Metal_E5C_Mag" };
		respawnMagazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","Metal_E5C_Mag","Metal_E5C_Mag","Metal_E5C_Mag","Metal_E5C_Mag","Metal_E5C_Mag","Metal_E5C_Mag" };
		linkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","ls_helmet_m1_light","ls_vest_flakJacket_pouchesAlt_brown","ls_imperial_satchel","ls_nvg_goggles" };
		respawnLinkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","ls_helmet_m1_light","ls_vest_flakJacket_pouchesAlt_brown","ls_imperial_satchel","ls_nvg_goggles" };
		backpack = "MET_REB_Autorifleman_1_pack";
	};

	class MET_REB_Autorifleman_2 : MET_REB_Pathfinder_Brown_Base_R
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "MET_REB";
		side = 0;
		displayName = "Autorifleman (T-15)";
		editorSubcategory = "MET_REB_Infantry";
		icon = "iconManMG";
		weapons[] = { "212th_RangeFinder_Unmarked","IDA_T15","Put","Throw" };
		respawnWeapons[] = { "212th_RangeFinder_Unmarked","IDA_T15","Put","Throw" };
		items[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		respawnItems[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		magazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","IDA_Blaster_Cell_Power2_100Rnd_Blue","IDA_Blaster_Cell_Power2_100Rnd_Blue","IDA_Blaster_Cell_Power2_100Rnd_Blue","IDA_Blaster_Cell_Power2_100Rnd_Blue" };
		respawnMagazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","IDA_Blaster_Cell_Power2_100Rnd_Blue","IDA_Blaster_Cell_Power2_100Rnd_Blue","IDA_Blaster_Cell_Power2_100Rnd_Blue","IDA_Blaster_Cell_Power2_100Rnd_Blue" };
		linkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","ls_helmet_m1","ls_vest_flakJacket_open","ls_glasses_coif","ls_nvg_goggles" };
		respawnLinkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","ls_helmet_m1","ls_vest_flakJacket_open","ls_glasses_coif","ls_nvg_goggles" };
		backpack = "MET_REB_Autorifleman_2_pack";
	};	

	class MET_REB_Marksman_1 : MET_REB_Man_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "MET_REB";
		side = 0;
		displayName = "Marksman (E5S)";
		editorSubcategory = "MET_REB_Infantry";
		uniformClass = "ls_imperialUniform_army_armored_black";
		weapons[] = { "212th_RangeFinder_Unmarked","Metal_E5S","Put","Throw" };
		respawnWeapons[] = { "212th_RangeFinder_Unmarked","Metal_E5S","Put","Throw" };
		items[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		respawnItems[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		magazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","Metal_E5S_Mag","Metal_E5S_Mag","Metal_E5S_Mag","Metal_E5S_Mag","Metal_E5S_Mag","Metal_E5S_Mag","Metal_E5S_Mag","Metal_E5S_Mag" };
		respawnMagazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","Metal_E5S_Mag","Metal_E5S_Mag","Metal_E5S_Mag","Metal_E5S_Mag","Metal_E5S_Mag","Metal_E5S_Mag","Metal_E5S_Mag","Metal_E5S_Mag" };
		linkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","212th_RangeFinder_Unmarked","ls_vest_flakJacket_open","ls_glasses_coif" };
		respawnLinkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","212th_RangeFinder_Unmarked","ls_vest_flakJacket_open","ls_glasses_coif" };
		backpack = "JMM_B_TacBelt_blk";
	};

	class MET_REB_Marksman_2 : MET_REB_Pathfinder_Base_R
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "MET_REB";
		side = 0;
		displayName = "Marksman (774-CX)";
		editorSubcategory = "MET_REB_Infantry";
		weapons[] = { "212th_RangeFinder_Unmarked","IDA_774CX","Put","Throw" };
		respawnWeapons[] = { "212th_RangeFinder_Unmarked","IDA_774CX","Put","Throw" };
		items[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		respawnItems[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		magazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","IDA_Blaster_Cell_Power4_10Rnd_Red","IDA_Blaster_Cell_Power4_10Rnd_Red","IDA_Blaster_Cell_Power4_10Rnd_Red","IDA_Blaster_Cell_Power4_10Rnd_Red","IDA_Blaster_Cell_Power4_10Rnd_Red","IDA_Blaster_Cell_Power4_10Rnd_Red","IDA_Blaster_Cell_Power4_10Rnd_Red","IDA_Blaster_Cell_Power4_10Rnd_Red" };
		respawnMagazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","IDA_Blaster_Cell_Power4_10Rnd_Red","IDA_Blaster_Cell_Power4_10Rnd_Red","IDA_Blaster_Cell_Power4_10Rnd_Red","IDA_Blaster_Cell_Power4_10Rnd_Red","IDA_Blaster_Cell_Power4_10Rnd_Red","IDA_Blaster_Cell_Power4_10Rnd_Red","IDA_Blaster_Cell_Power4_10Rnd_Red","IDA_Blaster_Cell_Power4_10Rnd_Red" };
		linkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","H_PASGT_basic_black_F","ls_vest_flakJacket_open","ls_glasses_coif","ls_nvg_goggles" };
		respawnLinkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","H_PASGT_basic_black_F","ls_vest_flakJacket_open","ls_glasses_coif","ls_nvg_goggles" };
		backpack = "JMM_B_TacBelt_blk";
	};

	class MET_REB_Grenadier : MET_REB_Pathfinder_Navy_Base_R
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "MET_REB";
		side = 0;
		displayName = "Grenadier";
		editorSubcategory = "MET_REB_Infantry";
		weapons[] = { "212th_RangeFinder_Unmarked","3AS_DC15S_GL","Put","Throw" };
		respawnWeapons[] = { "212th_RangeFinder_Unmarked","3AS_DC15S_GL","Put","Throw" };
		items[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		respawnItems[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		magazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_1UGL_MK54_HE_shell","3AS_1UGL_MK54_HE_shell","3AS_1UGL_MK54_HE_shell","3AS_1UGL_MK54_HE_shell","3AS_1UGL_MK54_HE_shell" };
		respawnMagazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_60Rnd_EM30_mag","3AS_1UGL_MK54_HE_shell","3AS_1UGL_MK54_HE_shell","3AS_1UGL_MK54_HE_shell","3AS_1UGL_MK54_HE_shell","3AS_1UGL_MK54_HE_shell" };
		linkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","ls_helmet_cqcm","ls_imperialVest_army_medium_mudtrooper","ls_imperial_satchel","ls_cloneNVG_phase3Pilot_arc" };
		respawnLinkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","ls_helmet_cqcm","ls_imperialVest_army_medium_mudtrooper","ls_imperial_satchel","ls_cloneNVG_phase3Pilot_arc" };
		backpack = "MET_REB_Grenadier_pack";
	};

	class MET_REB_Light_Antitank : MET_REB_Pathfinder_Brown_Base_R
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "MET_REB";
		side = 0;
		displayName = "Light AT";
		editorSubcategory = "MET_REB_Infantry";
		weapons[] = { "212th_RangeFinder_Unmarked","IDA_SPK12","rps_16th","Put","Throw" };
		respawnWeapons[] = { "212th_RangeFinder_Unmarked","IDA_SPK12","rps_16th","Put","Throw" };
		items[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		respawnItems[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal","kat_chestSeal","kat_larynx","LFP_item_injector_red","LFP_item_injector_red","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_plasmaIV_500" };
		magazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","DBA_90mm_IK40_FRAG_x1_mag","DBA_90mm_IK40_FRAG_x1_mag","DBA_90mm_IK40_FRAG_x1_mag","DBA_90mm_IK40_FRAG_x1_mag" };
		respawnMagazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","ACE_painkillers","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","IDA_Blaster_Cell_Power3_60Rnd_Red","DBA_90mm_IK40_FRAG_x1_mag","DBA_90mm_IK40_FRAG_x1_mag","DBA_90mm_IK40_FRAG_x1_mag","DBA_90mm_IK40_FRAG_x1_mag" };
		linkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","ls_orsfHelmet_trooper","ls_vest_spacer","3AS_G_AT_4_F","ls_nvg_goggles" };
		respawnLinkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","ls_orsfHelmet_trooper","ls_vest_spacer","3AS_G_AT_4_F","ls_nvg_goggles" };
		backpack = "MET_REB_Light_AntiTank_RPS6_pack";
	};

	class MET_REB_Crewman : MET_REB_Pathfinder_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "MET_REB";
		side = 0;
		displayName = "Crewman";
		editorSubcategory = "MET_REB_Infantry";
		weapons[] = { "212th_RangeFinder_Unmarked","IDA_A260P","Put","Throw" };
		respawnWeapons[] = { "212th_RangeFinder_Unmarked","IDA_A260P","Put","Throw" };
		items[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal" };
		respawnItems[] = { "ACE_Flashlight_XL50","ACE_MapTools","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","LFP_item_bacta_bandage","kat_chestSeal" };
		magazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","IDA_Blaster_Cell_Power2_20Rnd_Red","IDA_Blaster_Cell_Power2_20Rnd_Red" };
		respawnMagazines[] = { "MET_Weapons_Mags_Thermal_Detonator","MET_Weapons_Mags_Thermal_Detonator","MET_Smoke_White","MET_Smoke_White","IDA_Blaster_Cell_Power2_20Rnd_Red","IDA_Blaster_Cell_Power2_20Rnd_Red" };
		linkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","ls_imperialVest_army_tacbelt","ls_glasses_coif","ls_nvg_goggles" };
		respawnLinkedItems[] = { "ItemMap","ItemCompass","ItemWatch","ls_radios_hush98_aurebesh","ItemMicroDAGR","ls_nvg_goggles","212th_RangeFinder_Unmarked","ls_imperialVest_army_tacbelt","ls_glasses_coif","ls_nvg_goggles" };
		backpack = "";
	};


	// Vehicles
	class MET_REB_PX_10 : 3AS_PX10_REB_F
	{
	  scope = 2;
	  scopeCurator = 2;
	  scopeArsenal = 2;
	  faction = "MET_REB";
	  side = 0;
	  displayName = "PX-10";
	  editorSubcategory = "MET_REB_Armor";
	  hiddenSelectionsTextures[] = {"3as\3as_rebel_armor\px10_cav\textures\px10cav_co.paa","3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa","3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa","3as\3as_rebel_armor\px10_cav\textures\px10fuel_co.paa","3as\3as_rebel_armor\px10_cav\textures\px10crane_co.paa"};
	  crew = "MET_REB_Crewman";
	  typicalCargo[] = {"MET_REB_Crewman"};
	};
	

	class MET_REB_Autorifleman_1_pack : ls_rebelBackpack_chest_pouch
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Metal_E5C_Mag { count = 6;magazine = "Metal_E5C_Mag"; };
		};
		class TransportItems {};
		class TransportWeapons {};
	};

	class MET_REB_Autorifleman_2_pack : ls_rebelBackpack_chest_pouch
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_IDA_Blaster_Cell_Power2_100Rnd_Blue { count = 4;magazine = "IDA_Blaster_Cell_Power2_100Rnd_Blue"; };
		};
		class TransportItems {};
		class TransportWeapons {};
	};


	class MET_REB_Light_AntiTank_RPS6_pack : ls_imperialBackpack_chestRig
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_DBA_90mm_IK40_FRAG_x1_mag { count = 4;magazine = "DBA_90mm_IK40_FRAG_x1_mag"; };
		};
		class TransportItems {};
		class TransportWeapons {};
	};

	class MET_REB_Grenadier_pack : ls_gar_beltBag_belt
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_3AS_1UGL_MK54_HE_shell { count = 5;magazine = "3AS_1UGL_MK54_HE_shell"; };
		};
		class TransportItems {};
		class TransportWeapons {};
	};
};

class CfgGroups {
	class EAST {

		class MET_REB {
			name = "[16th] Rebellion";

			class Infantry {
				name = "Infantry";

				class MET_REB_Sentry {
					name = "Sentry";
					side = 0;
					faction = "MET_REB";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = { 0,0,0 };
						rank = "SERGEANT";
						side = 0;
						vehicle = "MET_REB_Rifleman_2";
					};
					class Unit1 {
						position[] = { 5,-5,0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "MET_REB_Autorifleman_1";
					};
				};

				class MET_REB_Sniper_Team {
					name = "Sniper Team";
					side = 0;
					faction = "MET_REB";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = { 0,0,0 };
						rank = "SERGEANT";
						side = 0;
						vehicle = "MET_REB_Marksman_2";
					};
					class Unit1 {
						position[] = { 5,-5,0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "MET_REB_Marksman_1";
					};
				};

				class MET_REB_Fireteam {
					name = "Fireteam";
					side = 0;
					faction = "MET_REB";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = { 0,0,0 };
						rank = "SERGEANT";
						side = 0;
						vehicle = "MET_REB_Rifleman_2";
					};
					class Unit1 {
						position[] = { 5,-5,0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "MET_REB_Autorifleman_1";
					};
					class Unit2 {
						position[] = { -5,-5,0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "MET_REB_Autorifleman_2";
					};
					class Unit3 {
						position[] = { 10,-10,0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "MET_REB_Rifleman_1";
					};
				};

				class MET_REB_AT_Team {
					name = "Anti-Armor Team";
					side = 0;
					faction = "MET_REB";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = { 0,0,0 };
						rank = "SERGEANT";
						side = 0;
						vehicle = "MET_REB_Rifleman_1";
					};
					class Unit1 {
						position[] = { 5,-5,0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "MET_REB_Light_Antitank";
					};
					class Unit2 {
						position[] = { -5,-5,0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "MET_REB_Light_Antitank";
					};
					class Unit3 {
						position[] = { 10,-10,0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "MET_REB_Autorifleman_2";
					};
				};

				class MET_REB_Squad {
					name = "Squad";
					side = 0;
					faction = "MET_REB";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup = 0.5;

					class Unit0 {
						position[] = { 0,0,0 };
						rank = "SERGEANT";
						side = 0;
						vehicle = "MET_REB_Rifleman_1";
					};
					class Unit1 {
						position[] = { 5,-5,0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "MET_REB_Rifleman_2";
					};
					class Unit2 {
						position[] = { -5,-5,0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "MET_REB_Rifleman_1";
					};
					class Unit3 {
						position[] = { 10,-10,0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "MET_REB_Light_Antitank";
					};
					class Unit4 {
						position[] = { -10,-10,0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "MET_REB_Autorifleman_1";
					};
					class Unit5 {
						position[] = { 15,-15,0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "MET_REB_Autorifleman_2";
					};
					class Unit6 {
						position[] = { -15,-15,0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "MET_REB_Marksman_2";
					};
					class Unit7 {
						position[] = { 20,-20,0 };
						rank = "PRIVATE";
						side = 0;
						vehicle = "MET_REB_Rifleman_1";
					};
				};

			};
		};
	};
};