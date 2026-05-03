
class CfgPatches
{
	class CIS_Emplacements
	{
		units[] = 
		{
			"MET_CIS_Mortar",
			"MET_CIS_Mortar_Bag"
		};
		skipWhenMissingDependencies=1;
		requiredAddons[] = 
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"A3_Characters_F_Proxies",
			"3AS_Main",
			"3AS_VehicleWeapons",
			"3AS_Static"
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
class Bag_Base;
class Weapon_Bag_Base: Bag_Base
{
	class assembleInfo
	{
	};
};
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class Optics_Armored;
class Optics_Gunner_MBT_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgVehicles
{
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class StaticMortar: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class Mortar_01_base_F: StaticMortar
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics: ViewOptics
				{
				};
				class Hitpoints;
			};
		};
		class assembleInfo;
	};
	class O_Mortar_01_F: Mortar_01_base_F
	{
		class SimpleObject;
	};
	class MET_CIS_Mortar: O_Mortar_01_F
	{
		author="$STR_3AS_Studio";
		displayname="[16th] 60 MW CIS Mortar";
		model="3AS\3as_static\Mortar\model\republicmortar.p3d";
		editorPreview="\3as\3as_static\images\3AS_Republic_Mortar.jpg";
		crew="JLTS_Droid_B1_Crew";
		icon="3AS\3as_static\Mortar\Data\ui\Mortar_top_ca.paa";
		picture="3AS\3as_static\Mortar\Data\ui\Mortar_side_ca.paa";
		side=0;
		faction="metal_company_cis";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				initelev=0;
				maxelev=40;
				minelev=-15;
				initturn=0;
				maxturn=360;
				minturn=-360;
				weapons[]=
				{
					"MET_CIS_mortar_60mm"
				};
				magazines[]=
				{
					"MET_CIS_20Rnd_82mm_Mo_shells",
					"MET_CIS_20Rnd_82mm_Mo_shells",
					"MET_CIS_20Rnd_82mm_Mo_shells",
					"MET_CIS_20Rnd_82mm_Mo_shells",
					"MET_20Rnd_82mm_Mo_Flare_white",
					"MET_20Rnd_82mm_Mo_Flare_white",
					"MET_20Rnd_82mm_Mo_Flare_white",
					"MET_20Rnd_82mm_Mo_Flare_Red",
					"MET_20Rnd_82mm_Mo_Flare_Red",
					"MET_20Rnd_82mm_Mo_Smoke_white",
					"MET_20Rnd_82mm_Mo_Smoke_white"
				};
				elevationMode=3;
				gunnerforceoptics=1;
				class Hitpoints: Hitpoints
				{
				};
			};
		};
		class assembleInfo: assembleInfo
		{
			dissasembleTo[]=
			{
				"MET_CIS_Mortar_Bag"
			};
		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"3as\3as_static\mortar\data\base_cis.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"3as\3as_static\mortar\data\tube_cis.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02_destruct.rvmat"
			};
		};
		hiddenSelectionsTextures[]=
		{
			"\3as\3as_static\Mortar\data\cis_base_co.paa",
			"\3as\3as_static\Mortar\data\cis_tube_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\3as\3as_static\Mortar\data\base_cis.rvmat",
			"\3as\3as_static\Mortar\data\tube_cis.rvmat"
		};
		scopeCurator=2;
		class TextureSources
		{
			class Republic
			{
				displayName="Republic";
				author="$STR_3as_Studio";
				textures[]=
				{
					"\3as\3as_static\Mortar\data\base_co.paa",
					"\3as\3as_static\Mortar\data\tube_co.paa"
				};
				factions[]=
				{
					"3AS_REP",
					"3AS_CIS"
				};
			};
			class CIS
			{
				displayName="CIS";
				author="$STR_3as_Studio";
				textures[]=
				{
					"\3as\3as_static\Mortar\data\cis_base_co.paa",
					"\3as\3as_static\Mortar\data\cis_tube_co.paa"
				};
				factions[]=
				{
					"3AS_REP",
					"3AS_CIS"
				};
			};
		};
	};
	class MET_CIS_Mortar_Bag: Weapon_Bag_Base
	{
		faction="metal_company_cis";
		model="\3as\3as_static\Mortar\model\mortarpack.p3d";
		author="$STR_3AS_Studio";
		_generalMacro="B_Mortar_01_weapon_F";
		scope=2;
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_DismantledWeapons";
		displayName="[CIS] Folded 60MW Mortar";
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"\3as\3as_static\Mortar\data\cis_base_co.paa",
			"\3as\3as_static\Mortar\data\cis_tube_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\3as\3as_static\Mortar\data\base_cis.rvmat",
			"\3as\3as_static\Mortar\data\tube_cis.rvmat"
		};
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_mcamo.paa";
		mass=450;
		class assembleInfo: assembleInfo
		{
			base[]=
			{
				""
			};
			displayName="Mortar";
			assembleTo="MET_CIS_Mortar";
		};
	};
};