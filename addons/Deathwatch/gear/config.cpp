class CfgPatches
{
	class MET_Deathwatch_Gear
	{
        units[]=
        {
            "MET_mandalorian_base"
        };
		weapons[]=
		{
			"MET_mandalorianVest_deathwatchGrunt",
			"MET_mandalorianVest_deathwatchSergeant",
			"MET_mandalorianVest_deathwatchCaptain",
			"MET_mandalorianHelmet_deathwatchGrunt",
			"MET_mandalorianHelmet_deathwatchSergeant",
			"MET_mandalorianHelmet_deathwatchCaptain",
			"MET_mandalorianUniform",
			"MET_mandalorian_rangefinder",
			"MET_mandalorian_rangefinder2",
			"MET_mandalorian_rangefinder3",
			"MET_mandalorian_rangefinder4",
			"MET_mandalorian_rangefinder5"
		};
		requiredAddons[]=
		{
			"A3_characters_F",
            "ls_characters_mandalorian",
            "metal_death_weap",
			"LF_Medicial_Pack"
		};
		skipWhenMissingDependencies=1;
	};
};
class ItemInfo;
class CfgWeapons
{
	/*class JLTS_CloneHelmetP2;
	class HeadgearItem;
	class TEST_16th_trp: JLTS_CloneHelmetP2
	{
		scope=1;
		displayName="[METAL TEST] Trooper Helmet";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"z\MET\addons\armor\data\infantry\rifleman\trooper_helmet_co.paa"
		};
		model="\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
		ace_hearing_protection=0.94999999;
		ace_hearing_lowerVolume=0.1;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=.3;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=10;
					passThrough=.3;
				};
			};
		};
	};*/
	class ls_mandalorianVest_standard;
	class MET_mandalorianVest_deathwatchGrunt: ls_mandalorianVest_standard
	{
		author="Legion Studios";
		displayName="[MET] Deathwatch Grunt Armor";
		scope=1;
		scopeArsenal=1;
		scopeCurator=2;
		model="\ls\core\addons\characters_mandalorian\vests\standard\ls_vest_mandalorian.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\ls\core\addons\characters_mandalorian\units\deathwatch\data\grunt_vest_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\ls\core\addons\characters_mandalorian\vests\standard\ls_vest_mandalorian.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=30;
			containerClass="Supply200";
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=24;
					passThrough=0.05;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=34;
					passThrough=0.05;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=34;
					passThrough=0.05;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=24;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.01;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.01;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.01;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=45;
					passThrough=0.01;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=34;
					passThrough=0.05;
					depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
			};
		};
	};
	class ls_vest_base;
	class MET_mandalorianVest_standard: ls_vest_base
	{
		scope=1;
		scopeArsenal=1;
		author="Legion Studios";
		displayName="[MET] Mandalorian Traditional Vest";
		model="\ls\core\addons\characters_mandalorian\vests\standard\ls_vest_mandalorian.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\ls\core\addons\characters_mandalorian\vests\standard\data\camo1_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\ls\core\addons\characters_mandalorian\vests\standard\ls_vest_mandalorian.p3d";
			containerClass="Supply40";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Legs
				{
					hitpointName="HitLegs";
					armor=6;
					passThrough=0.30000001;
				};
			};
		};
	};
	class MET_mandalorianVest_deathwatchSergeant: MET_mandalorianVest_deathwatchGrunt
	{
		author="Legion Studios";
		displayName="[MET] Deathwatch Sergeant Armor";
		hiddenSelectionsTextures[]=
		{
			"\ls\core\addons\characters_mandalorian\units\deathwatch\data\sergeant_vest_co.paa"
		};
	};
	class MET_mandalorianVest_deathwatchCaptain: MET_mandalorianVest_deathwatchGrunt
	{
		author="Legion Studios";
		displayName="[MET] Deathwatch Captain Armor";
		hiddenSelectionsTextures[]=
		{
			"\ls\core\addons\characters_mandalorian\units\deathwatch\data\captain_vest_co.paa"
		};
	};
	class ls_mandalorianHelmet_traditional;
	class MET_mandalorianHelmet_deathwatchGrunt: ls_mandalorianHelmet_traditional
	{
		author="Legion Studios";
		displayName="[MET] Deathwatch Grunt Helmet";
		scope=1;
		scopeArsenal=1;
		hiddenSelectionsTextures[]=
		{
			"\ls\core\addons\characters_mandalorian\units\deathwatch\data\grunt_helmet_co.paa",
			"\ls\core\addons\characters_mandalorian\helmets\traditional\data\visor_co.paa",
			"\ls\core\addons\characters_mandalorian\helmets\traditional\data\neck_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=10;
			uniformModel="\ls\core\addons\characters_mandalorian\helmets\traditional\ls_helmet_mandalorian_traditional.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"visor",
				"neckTex"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=40;
					passThrough=0.05;
				};
				class Face
				{
					hitPointName="HitFace";
					armor=40;
					passThrough=0.05;
				};
			};
		};
	};
	class MET_mandalorianHelmet_deathwatchSergeant: MET_mandalorianHelmet_deathwatchGrunt
	{
		author="Legion Studios";
		displayName="[MET] Deathwatch Sergeant Helmet";
		hiddenSelectionsTextures[]=
		{
			"\ls\core\addons\characters_mandalorian\units\deathwatch\data\sergeant_helmet_co.paa",
			"\ls\core\addons\characters_mandalorian\helmets\traditional\data\visor_co.paa",
			"\ls\core\addons\characters_mandalorian\helmets\traditional\data\neck_co.paa"
		};
	};
	class MET_mandalorianHelmet_deathwatchCaptain: MET_mandalorianHelmet_deathwatchGrunt
	{
		author="Legion Studios";
		displayName="[MET] Deathwatch Captain Helmet";
		hiddenSelectionsTextures[]=
		{
			"\ls\core\addons\characters_mandalorian\units\deathwatch\data\captain_helmet_co.paa",
			"\ls\core\addons\characters_mandalorian\helmets\traditional\data\visor_co.paa",
			"\ls\core\addons\characters_mandalorian\helmets\traditional\data\neck_co.paa"
		};
	};
	class ls_uniform_base;
	class MET_mandalorianUniform: ls_uniform_base
	{
		scope=1;
        scopeArsenal=1;
		author="Legion Studios";
		displayName="[MET] Mandalorian Undersuit";
		picture="\ls\core\addons\characters_mandalorian\data\ui\undersuit_ui_ca.paa";
		class ItemInfo: ItemInfo
		{
			uniformClass="MET_mandalorian_base";
			containerClass="Supply200";
			mass=20;
		};
	};
	class ls_nvg_base;
	class MET_mandalorian_rangefinder: ls_nvg_base
	{
		scope=1;
		scopeArsenal=1;
		author="Legion Studios";
		displayName="[MET] Mandalorian Rangefinder";
		model="\ls\core\addons\characters_mandalorian\equipment\nvgs\rangefinder\ls_mandalorian_rangefinder_nvg_on.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\ls\core\addons\characters_mandalorian\helmets\original\data\original_co.paa"
		};
		picture="\ls\core\addons\characters_mandalorian\data\ui\rangefinder_ui_ca.paa";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0,1};
		class ItemInfo: ItemInfo
		{
			uniformModel="\ls\core\addons\characters_mandalorian\equipment\nvgs\rangefinder\ls_mandalorian_rangefinder_nvg_on.p3d";
			modelOff="\ls\core\addons\characters_mandalorian\equipment\nvgs\rangefinder\ls_mandalorian_rangefinder_nvg_off.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
		};
	};
	class MET_mandalorian_rangefinder2: ls_nvg_base
	{
		scope=1;
		scopeArsenal=1;
		author="Legion Studios";
		displayName="[MET] Mandalorian Rangefinder";
		model="\ls\core\addons\characters_mandalorian\equipment\nvgs\rangefinder\ls_mandalorian_rangefinder_nvg_on.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\ls\core\addons\characters_mandalorian\helmets\original\data\original_co.paa"
		};
		picture="\ls\core\addons\characters_mandalorian\data\ui\rangefinder_ui_ca.paa";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={2,3};
		class ItemInfo: ItemInfo
		{
			uniformModel="\ls\core\addons\characters_mandalorian\equipment\nvgs\rangefinder\ls_mandalorian_rangefinder_nvg_on.p3d";
			modelOff="\ls\core\addons\characters_mandalorian\equipment\nvgs\rangefinder\ls_mandalorian_rangefinder_nvg_off.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
		};
	};
	class MET_mandalorian_rangefinder3: ls_nvg_base
	{
		scope=1;
		scopeArsenal=1;
		author="Legion Studios";
		displayName="[MET] Mandalorian Rangefinder";
		model="\ls\core\addons\characters_mandalorian\equipment\nvgs\rangefinder\ls_mandalorian_rangefinder_nvg_on.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\ls\core\addons\characters_mandalorian\helmets\original\data\original_co.paa"
		};
		picture="\ls\core\addons\characters_mandalorian\data\ui\rangefinder_ui_ca.paa";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={4,5};
		class ItemInfo: ItemInfo
		{
			uniformModel="\ls\core\addons\characters_mandalorian\equipment\nvgs\rangefinder\ls_mandalorian_rangefinder_nvg_on.p3d";
			modelOff="\ls\core\addons\characters_mandalorian\equipment\nvgs\rangefinder\ls_mandalorian_rangefinder_nvg_off.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
		};
	};
	class MET_mandalorian_rangefinder4: ls_nvg_base
	{
		scope=1;
		scopeArsenal=1;
		author="Legion Studios";
		displayName="[MET] Mandalorian Rangefinder";
		model="\ls\core\addons\characters_mandalorian\equipment\nvgs\rangefinder\ls_mandalorian_rangefinder_nvg_on.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\ls\core\addons\characters_mandalorian\helmets\original\data\original_co.paa"
		};
		picture="\ls\core\addons\characters_mandalorian\data\ui\rangefinder_ui_ca.paa";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={6,7};
		class ItemInfo: ItemInfo
		{
			uniformModel="\ls\core\addons\characters_mandalorian\equipment\nvgs\rangefinder\ls_mandalorian_rangefinder_nvg_on.p3d";
			modelOff="\ls\core\addons\characters_mandalorian\equipment\nvgs\rangefinder\ls_mandalorian_rangefinder_nvg_off.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
		};
	};
	class MET_mandalorian_rangefinder5: ls_nvg_base
	{
		scope=1;
		scopeArsenal=1;
		author="Legion Studios";
		displayName="[MET] Mandalorian Rangefinder";
		model="\ls\core\addons\characters_mandalorian\equipment\nvgs\rangefinder\ls_mandalorian_rangefinder_nvg_on.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\ls\core\addons\characters_mandalorian\helmets\original\data\original_co.paa"
		};
		picture="\ls\core\addons\characters_mandalorian\data\ui\rangefinder_ui_ca.paa";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0,6};
		class ItemInfo: ItemInfo
		{
			uniformModel="\ls\core\addons\characters_mandalorian\equipment\nvgs\rangefinder\ls_mandalorian_rangefinder_nvg_on.p3d";
			modelOff="\ls\core\addons\characters_mandalorian\equipment\nvgs\rangefinder\ls_mandalorian_rangefinder_nvg_off.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
		};
	};
};
class CfgVehicles
{
    class ls_indfor_unit_base;
	class MET_mandalorian_base: ls_indfor_unit_base
	{
		scope=1;
		author="Legion Studios";
		displayName="Warrior";
		faction="ls_mandalorians";
		editorSubcategory="ls_edsubcat_mandalorians_traditional";
		genericNames="ls_mandalorian_male";
		uniformClass="MET_mandalorianUniform";
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\ls\core\addons\characters_mandalorian\uniforms\undersuit\data\undersuit_co.paa"
		};
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		armor=10;
		armorStructural=0.40000001;
		explosionShielding=0.039999999;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
		weapons[]=
		{
			"ls_weapon_westar35c",
			"ls_weapon_westar35sa",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"ls_weapon_westar35c",
			"ls_weapon_westar35sa",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"ls_magazine_westar35c",
			"ls_magazine_westar35c",
			"ls_magazine_westar35c",
			"ls_magazine_westar35c",
			"ls_magazine_westar35c",
			"ls_magazine_westar35c",
			"SmokeShell",
			"SmokeShell",
			"ls_grenade_n20_magazine",
			"ls_grenade_n20_magazine"
		};
		respawnMagazines[]=
		{
			"ls_magazine_westar35c",
			"ls_magazine_westar35c",
			"ls_magazine_westar35c",
			"ls_magazine_westar35c",
			"ls_magazine_westar35c",
			"ls_magazine_westar35c",
			"SmokeShell",
			"SmokeShell",
			"ls_grenade_n20_magazine",
			"ls_grenade_n20_magazine"
		};
		linkedItems[]=
		{
			"ls_mandalorianHelmet_traditional",
			"ls_mandalorianVest_standard",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"ItemWatch",
			"ls_mandalorian_rangefinder",
			"ls_radios_hush98"
		};
		respawnLinkedItems[]=
		{
			"ls_mandalorianHelmet_traditional",
			"ls_mandalorianVest_standard",
			"ItemMap",
			"ItemCompass",
			"ItemGPS",
			"ItemWatch",
			"ls_mandalorian_rangefinder",
			"ls_radios_hush98"
		};
	};
};