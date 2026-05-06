class CfgPatches
{
	class metal_death_weap
	{
		author = "";
		requiredVersion = 0.1;
		units[] = {};
		weapons[] =
		{
			"met_weapon_westar35c",
			"MET_weapon_westar35s"
		};
		magazines[] =
		{
		};
		ammo[] =
		{
		};
	};
};
class CfgRecoils
{
	class recoil_default;
	class Default;
	class 3AS_recoil_default;
	class MET_recoil_Raff : recoil_default
	{
		muzzleOuter[] = { 0,0.1,0.40000001,0.40000001 };
		kickBack[] = { 0.059999999,0.090000004 };
		temporary = 0.0060000001;
	};
};
class UGL_F;
class Mode_SemiAuto;
class Mode_Burst : Mode_SemiAuto
{
	class BaseSoundModeType;
	class StandardSound;
};
class Mode_FullAuto : Mode_SemiAuto
{
	class BaseSoundModeType;
	class StandardSound;
};
class Single;
class close;
class GunParticles;
class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class CfgWeapons
{
	class WeaponSlotsInfo;
	class arifle_MX_Base_F;
	class SFA_rifle_base;
	class Rifle_Base_F;
	class Pistol_Base_F;
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class LMG_Mk200_F;
	class 3AS_PLX1_F;
	class ls_weapon_westar35c_base
	{
		class Single;
		class FullAuto;
	};
	class ls_weapon_westar35s_base
	{
		class Single;
		class FullAuto;
	};
	class ls_scatterMuzzle_base;
	class met_weapon_westar35c : ls_weapon_westar35c_base
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Hazmat";
		displayname = "[Mando] Westar-35C";
		baseWeapon = "met_weapon_westar35c";
		magazines[] = { "MET_Westar35C_mag" };
		magazineWell[] = { "MET_Westar35C_MagWell" };
		class Single : Mode_SemiAuto {
			reloadTime = 0.15000001;
			dispersion = 0.0030149999;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;

			// TODO: Convert to sound shader
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				weaponSoundEffect = "";
				begin1[] =
				{
					"\ls\core\addons\sounds\weapons\westar35c\shot1.wss",
					1,
					1,
					1800
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
			};
		};
		class FullAuto : Mode_FullAuto {
			reloadTime = 0.08;
			dispersion = 0.0004;
			minRange = 5;
			minRangeProbab = 0.30000001;
			midRange = 25;
			midRangeProbab = 0.60000002;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				weaponSoundEffect = "";
				begin1[] =
				{
					"\ls\core\addons\sounds\weapons\westar35c\shot1.wss",
					1,
					1,
					1800
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
			};
		};
		modelOptics = "z\MET\addons\weapons\scopes\big_cross_yellow_full.p3d";
		class OpticsModes
		{
			class DC19scope_sights
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] =
				{
					"Default"
				};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				opticsZoomMin = 1.25;
				opticsZoomMax = 1.25;
				opticsZoomInit = 1.25;
				memoryPointCamera = "eye";
				visionMode[] = {};
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				cameraDir = "";
			};
			class DC19scope_scope : DC19scope_sights
			{
				opticsID = 2;
				useModelOptics = 1;
				opticsPPEffects[] =
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				visionMode[] =
				{
					"Normal",
					"NVG"
				};
				opticsZoomMin = 0.050000001;
				opticsZoomMax = 0.107;
				opticsZoomInit = 0.107;
				memoryPointCamera = "opticView";
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				distanceZoomMin = 400;
				distanceZoomMax = 550;
				weaponInfoType = "RscWeaponEmpty";
			};
		};
	};
	class MET_weapon_westar35s : ls_weapon_westar35s_base
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Hazmat";
		baseWeapon = "MET_weapon_westar35s";
		displayName = "[Mando] Westar-35S";
		magazines[] = { "MET_Westar35S_mag" };
		magazineWell[] = { "MET_Westar35S_MagWell" };
		muzzles[] = { "this", "scatter" };

		modes[] = { "Single", "FullAuto", "close", "short", "medium" };
		class Single : Mode_SemiAuto {
			reloadTime = 0.12;
			dispersion = 0.0002;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[] =
				{
					"\ls\core\addons\sounds\weapons\westar35s\shot1.wss",
					1,
					1,
					1800
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
			};
		};
		class FullAuto : Mode_FullAuto {
			reloadTime = 0.12;
			dispersion = 0.0002;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[] =
				{
					"\ls\core\addons\sounds\weapons\westar35s\shot1.wss",
					1,
					1,
					1800
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
			};
		};
		class scatter : ls_scatterMuzzle_base {
			magazines[] = { "MET_yellow_pellet_mag" };
			magazineWell[] = {
				"MET_Westar35Shotgun_MagWell"
			};

			muzzleEnd = "shotgun pos";
			muzzlePos = "shotgun dir";
		};
		class WeaponSlotsInfo : WeaponSlotsInfo {
			mass = 70;
			class CowsSlot : CowsSlot {
				compatibleItems[] =
				{
					"MET_cows_westar35s_scope"
				};
			};
			class MuzzleSlot : MuzzleSlot {
				class compatibleItems {
					ls_muzzle_westar35s_suppressor = 1;
				};
			};
		};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "MET_cows_westar35s_scope";
			};
		};
	};
	class MET_cows_westar35s_scope : ItemCore {
		scope = 1;
		scopeArsenal = 1;
		author = "Hazmat";
		displayName = "Westar-35S Holosight";
		descriptionShort = "";

		model = "\ls\core\addons\weapons_westar\westar35s\ls_cows_westar35s_scope.p3d";
		picture = "\ls\core\addons\weapons_westar\data\ui\westar35s_scope_ui_ca.paa";

		inertia = 0;
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo : InventoryOpticsItem_Base_F {
			mass = 4;
			optics = 2;
			modelOptics = "z\MET\addons\weapons\scopes\big_cross_yellow_easy.p3d";
			class OpticsModes {
				class ACO {
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					cameraDir = "";
					visionMode[] = { "Normal" };
					opticsPPEffects[] = { "Default" };
				};
				class Snip
				{
					opticsDisplayName = "WFOV";
					opticsID = 2;
					useModelOptics = 1;
					opticsPPEffects[] =
					{
						"OpticsCHAbera3",
						"OpticsBlur2"
					};
					opticsZoomMin = 0.02;
					opticsZoomMax = 0.0625;
					opticsZoomInit = 0.0625;
					distanceZoomMin = 1000;
					distanceZoomMax = 100;
					modelOptics[] =
					{
						"z\MET\addons\weapons\scopes\big_cross_yellow_easy.p3d"
					};
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					visionMode[] =
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[] = { 1,2 };
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
				};
			};
		};
	};
	class ls_weapon_westar35sa_base;
	class MET_weapon_westar35sa : ls_weapon_westar35sa_base
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Hazmat";
		baseWeapon = "MET_weapon_westar35sa";
		displayName = "[Mando] Westar-35SA";
		recoil = "MET_recoil_Raff";
		magazines[] =
		{
			"MET_Westar35SA_mag"
		};
		magazineWell[] =
		{
			"MET_Westar35SA_MagWell"
		};
		modes[] =
		{
			"Single",
			"Burst",
			"close",
			"short",
			"medium"
		};
		class Single : Mode_SemiAuto
		{
			reloadTime = 0.06;
			dispersion = 0.005;
			minRange = 5;
			minRangeProbab = 0.30000001;
			midRange = 25;
			midRangeProbab = 0.60000002;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				weaponSoundEffect = "";
				begin1[] =
				{
					"\ls\core\addons\sounds\weapons\westar35sa\shot1.wss",
					1,
					1,
					1800
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
			};
		};
		class Burst : Mode_Burst
		{
			reloadTime = 0.03;
			dispersion = 0.005;
			minRange = 0;
			minRangeProbab = 0.89999998;
			midRange = 15;
			midRangeProbab = 0.69999999;
			maxRange = 30;
			maxRangeProbab = 0.1;
			soundContinuous = 0;
			soundBurst = 0;
			burst = 3;
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				weaponSoundEffect = "";
				begin1[] =
				{
					"\ls\core\addons\sounds\weapons\westar35sa\shot1.wss",
					1,
					1,
					1800
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
			};
		};
	};
	class ls_weapon_firepuncher_base;
	class MET_weapon_firepuncher : ls_weapon_firepuncher_base
	{
		scope = 1;
		scopeArsenal = 1;
		author = "Legion Studios";
		displayName = "[Mando] Mando 773 Firepuncher";
		baseWeapon = "MET_weapon_firepuncher";
		magazines[] =
		{
			"MET_773_mag"
		};
		magazineWell[] =
		{
			"MET_773_magwell"
		};
		class Single : Mode_SemiAuto
		{
			reloadTime = 0.3;
			dispersion = 0.00000000000001;
			minRange = 5;
			minRangeProbab = 0.30000001;
			midRange = 20;
			midRangeProbab = 0.60000002;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
			sounds[] =
			{
				"StandardSound",
				"SilencedSound"
			};
			class StandardSound
			{
				soundSetShot[] =
				{
					"ls_firepuncher_Shot_SoundSet",
					"ls_sniper_Tail_SoundSet"
				};
			};
			class SilencedSound
			{
				soundSetShot[] =
				{
					"ls_firepuncher_suppressed_Shot_SoundSet",
					"ls_sniper_Tail_SoundSet"
				};
			};
		};
		ls_weapons_adsSounds[] =
		{

			{
				"ls_weapons_sniperRifle_zoomIn01",
				"ls_weapons_sniperRifle_zoomIn02"
			},
			"ls_weapons_sniperRifle_zoomOut01"
		};
		modelOptics = "z\MET\addons\weapons\scopes\big_cross_yellow_med.p3d";
		class OpticsModes
		{
			class Snip
			{
				opticsID = 1;
				opticsDisplayName = "WFOV";
				useModelOptics = 1;
				opticsPPEffects[] =
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				maxZeroing = 2000;
				opticsZoomMin = 0.0037499999;
				opticsZoomMax = 0.1;
				opticsZoomInit = 0.75;
				distanceZoomMin = 2000;
				distanceZoomMax = 2000;
				visionMode[] =
				{
					"Normal",
					"NVG",
					"TI"
				};
				thermalMode[] = { 0,1 };
				memoryPointCamera = "opticView";
				modelOptics[] =
				{
					"z\MET\addons\weapons\scopes\big_cross_yellow_med_hex.p3d"
				};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				cameraDir = "";
			};
		};
	};
	class MET_RPS6_SMRT : 3AS_PLX1_F
	{
		scopeArsenal = 1;
		displayName = "[Mando] Mandalorian RPS-6 Smart Launcher";
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 1;
		JLTS_friedItem = "JLTS_RPS6_fried";
		JLTS_repairTime = 30;
		magazines[] =
		{
			"MET_MAND_AA_SINGLE",
			"MET_MAND_AP_SINGLE",
			"MET_MAND_AT_Single"
		};
		lockAcquire = 1;
		picture = "\MRC\JLTS\weapons\RPS6\data\ui\rps6_ui_ca.paa";
		uiPicture = "MRC\JLTS\weapons\RPS6\data\ui\rps6_ui_ca.paa";
		model = "\MRC\JLTS\weapons\RPS6\rps6.p3d";
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\RPS6\anims\RPS6_handanim.rtm"
		};
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\weapons\RPS6\data\rps6_co.paa"
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 150;
		};
	};
	class MET_MANDALORIAN_Z6 : LMG_Mk200_F
	{
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 1;
		JLTS_friedItem = "JLTS_DP23_fried";
		JLTS_repairTime = 25;
		ace_overheating_mrbs = 40000;
		ace_overheating_slowdownFactor = 0;
		ace_overheating_allowSwapBarrel = 0;
		ace_overheating_dispersion = 1;
		ace_overheating_closedBolt = 0;
		ace_overheating_barrelMass = 1;
		ace_overheating_jamTypesAllowed[] =
		{
			"Fire",
			"Dud"
		};
		WBK_UseHeavyWeaponFramework = "true";	
		author = "Hazmat";
		inertia = 0;
		canShootInWater = 1;
		scope = 1;
		scopeArsenal = 1;
		autoReload = "true";
		baseWeapon = "MET_MANDALORIAN_Z6";
		displayName = "[Mando] Mando Z6 rotary cannon";
		displayNameShort = "A big weapon for big battles";
		descriptionShort = "Rapid Fire. Reloads automatically.";
		picture = "\MRC\JLTS\weapons\Z6\data\ui\Z6_ui_ca.paa";
		UiPicture = "\MRC\JLTS\weapons\Z6\data\ui\Z6_ui_ca.paa";
		model = "\MRC\JLTS\weapons\Z6\Z6.p3d";
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[] =
		{
			"z\MET\addons\weapons\data\Z6_co.paa",
			"z\MET\addons\weapons\data\Z6_Barrel_co.paa",
			"z\MET\addons\weapons\data\Z6_Mag_co.paa"
		};
		magazines[] =
		{
			"MET_blaster_battery_mand",
		};
		recoil = "MET_recoil_Z6";
		maxZeroing = 1200;
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\Z6\anims\Z6_handanim.rtm"
		};
		reloadAction = "";
		ace_clearJamAction = "";
		magazineWell[] = {
			"MET_Z6_MagWell"
		};
		fireLightDiffuse[] = { 0.1,0.25,1 };
		drySound[] =
		{
			"z\MET\addons\weapons\infantry_weap\sounds\weapon_dry.ogg",
			5,
			1,
			10
		};
		reloadMagazineSound[] =
		{
			"z\MET\addons\weapons\infantry_weap\sounds\republic\z-6\Z6_reload.ogg",
			1.5,
			1,
			100
		};
		muzzles[] =
		{
			"this",
			"MET_GMG"
		};
		modes[] =
		{
			"slowerAuto",
			"Auto",
			"fullerAuto"
			//"maxAuto"
		};
		class MET_GMG : Rifle_Base_F
		{
			displayName = "E-403 Proton Cannon";
			cursor = "srifle";
			reloadAction = "GestureReloadARX2";
			magazines[] =
			{
				"MANDO_HE_Grenade"
			};
			magazineWell[] =
			{
				"MANDO_HE_Grenade_Well"
			};
			recoil = "MET_recoil_Z6";
			maxZeroing = 100;
			class GunParticles : GunParticles
			{
			};
			modes[] =
			{
				"FullAuto"
			};
			class FullAuto : Mode_FullAuto
			{
				sounds[] =
				{
					"StandardSound"
				};
				class BaseSoundModeType
				{
					weaponSoundEffect = "";
					closure1[] = {};
					closure2[] = {};
					soundClosure[] = {};
				};
				class StandardSound : BaseSoundModeType
				{
					weaponSoundEffect = "";
					begin1[] =
					{
						"\SFA_Main\SFA_Weapons_R\E403\data\sfx\E403.wav",
						1,
						1,
						1800
					};
					begin2[] =
					{
						"\SFA_Main\SFA_Weapons_R\E403\data\sfx\E403.wav",
						1,
						1,
						1800
					};
					begin3[] =
					{
						"\SFA_Main\SFA_Weapons_R\E403\data\sfx\E403.wav",
						1,
						1,
						1800
					};
					soundBegin[] =
					{
						"begin1",
						0.33000001,
						"begin2",
						0.33000001,
						"begin3",
						0.33000001
					};
				};
				reloadTime = 0.5;
				dispersion = 0.00058;
				minRange = 5;
				minRangeProbab = 0.30000001;
				midRange = 25;
				midRangeProbab = 0.60000002;
				maxRange = 50;
				maxRangeProbab = 0.1;
				aiRateOfFire = 2;
				aiRateOfFireDistance = 25;
			};
		};
		class Auto : Mode_FullAuto
		{
			sounds[] =
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound : BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] =
				{
					"z\MET\addons\weapons\infantry_weap\sounds\republic\z-6\z6.ogg",
					1,
					1,
					1800
				};
				begin2[] =
				{
					"z\MET\addons\weapons\infantry_weap\sounds\republic\z-6\z6.ogg",
					1,
					1.015,
					1800
				};
				begin3[] =
				{
					"z\MET\addons\weapons\infantry_weap\sounds\republic\z-6\z6.ogg",
					1,
					0.98500001,
					1800
				};
				begin4[] =
				{
					"z\MET\addons\weapons\infantry_weap\sounds\republic\z-6\z6.ogg",
					1,
					1.01,
					1800
				};
				begin5[] =
				{
					"z\MET\addons\weapons\infantry_weap\sounds\republic\z-6\z6.ogg",
					1,
					0.995,
					1800
				};
				soundBegin[] =
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
				beginwater1[] =
				{
					"z\MET\addons\weapons\infantry_weap\sounds\republic\z-6\z6.ogg",
					1,
					1,
					400
				};
				soundBeginWater[] =
				{
					"beginwater1",
					1
				};
			};
			reloadTime = 0.0545454545454545;
			magazines[] =
			{
				//"MET_blaster_battery",
				"MET_blaster_battery_Red",
				"MET_blaster_battery_Green",
				"MET_blaster_battery_Yellow"
			};
			dispersion = 0.005;
			burst = 1;
			soundContinuous = "false";
			soundBurst = "true";
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 100;
			midRangeProbab = 0.075000003;
			maxRange = 10000;
			maxRangeProbab = 0.30000001;
		};
		class fullerAuto : Auto
		{
			reloadTime = 0.0333333333333333;
			dispersion = 0.006;
			textureType = "fastAuto";
			minRangeProbab = 0;
			midRangeProbab = 0;
			maxRangeProbab = 0;
		};
		class slowerAuto : Auto
		{
			reloadTime = 0.1;
			dispersion = 0.004;
			textureType = "burst";
			minRangeProbab = 0;
			midRangeProbab = 0;
			maxRangeProbab = 0;
		};
		/*class maxAuto: Auto
		{
			reloadTime=0.0060240963855422;
			dispersion=0.006;
			textureType="semi";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};*/
		aiDispersionCoefY = 24;
		aiDispersionCoefX = 21;
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 270;
			class CowsSlot : CowsSlot
			{
				compatibleItems[] = {};
			};
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] = {};
			};
			class PointerSlot : PointerSlot
			{
				compatibleItems[] = {};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleItems[] = {};
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				directionName = "Konec hlavne";
				effectName = "RifleAssaultCloud";
				positionName = "Usti hlavne";
			};
		};
	};
};
class CfgMagazineWells
{
	class MET_Westar35C_MagWell
	{
		MET_Magazines[] =
		{
			"MET_Westar35C_mag"
		};
	};
	class MET_Westar35S_MagWell
	{
		MET_Magazines[] =
		{
			"MET_Westar35S_mag"
		};
	};
	class MET_Westar35SA_MagWell
	{
		MET_Magazines[] =
		{
			"MET_Westar35SA_mag"
		};
	};
	class MET_Westar35Shotgun_MagWell
	{
		MET_Magazines[] =
		{
			"MET_yellow_pellet_mag",
			"MET_yellow_pellet_mag_bird"
		};
	};
	class MET_773_magWell
	{
		MET_Magazines[] =
		{
			"MET_773_mag"
		};
	};
	class MANDO_HE_Grenade_Well
	{
		MET_40mm_Magazines[] =
		{
			"MANDO_HE_Grenade"
		};
	};
};
class CfgMagazines
{
	class JLTS_DC15A_mag;
	class CA_Magazine;
	class CA_LauncherMagazine;
	class 100Rnd_65x39_caseless_mag;
	class 30Rnd_65x39_caseless_mag;
	class MET_DC15x_mag;
	class MET_blaster_pistol_battery;
	class MET_DC15A_mag;
	class MET_HE_Grenade;
	class MET_DC15L_mag;
	class SFA_Base_mag;
	class 3AS_JLTS_MK39_AA;
	/*class MET_DC15A_mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_b.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=40;
		displayName="[16th] DC-15A Energy Cell";
		displayNameShort="Energy Cell";
		descriptionShort="Energy cell for the DC-15A, and DC-15L";
		ammo="MET_blasterbolt";
		tracersEvery=1;
	};*/
	class MET_Westar35S_mag : JLTS_DC15A_mag
	{
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 1;
		author = "Hazmat";
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\3AS\3AS_Weapons\Data\UI\3as_ammo_y.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count = 40;
		displayName = "[16th] Westar-35S Energy Cell";
		displayNameShort = "Energy Cell";
		descriptionShort = "Energy cell for the Westar-35S";
		ammo = "MET_blasterbolt_Yellow_Mand";
		tracersEvery = 1;
	};
	class MET_Westar35C_mag : JLTS_DC15A_mag
	{
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 1;
		author = "Hazmat";
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\3AS\3AS_Weapons\Data\UI\3as_ammo_y.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count = 80;
		displayName = "[16th] Westar-35C Energy Cell";
		displayNameShort = "Energy Cell";
		descriptionShort = "Energy cell for the Westar-35C";
		ammo = "MET_blasterbolt_low_Yellow_Mand";
		tracersEvery = 1;
	};
	class MET_yellow_pellet_mag : CA_Magazine
	{
		author = "Hazmat";
		scope = 1;
		displayName = "[16th] Westar-35S Energy Cell (Pellets)";
		displayNameShort = "Westar-35S Pellets";
		descriptionShort = "Pellets for the Westar-35S";
		picture = "\3AS\3AS_Weapons\Data\UI\3as_pellets_y.paa";
		ammo = "MET_yellow_pellet";
		initSpeed = 380;
		count = 10;
		mass = 15;
		tracerEvery = 1;
		lastRoundsTracer = 8;
	};
	class MET_yellow_pellet_mag_bird : CA_Magazine
	{
		author = "Hazmat";
		scope = 1;
		displayName = "[16th] Westar-35S Energy Cell (Birdshot)";
		displayNameShort = "Westar-35S Birdshot";
		descriptionShort = "Birdshot for the Westar-35S";
		picture = "\3AS\3AS_Weapons\Data\UI\3as_flechette_y.paa";
		ammo = "MET_yellow_pellet_Bird";
		initSpeed = 450;
		count = 20;
		mass = 15;
		tracerEvery = 1;
	};
	class 1Rnd_HE_Grenade_shell;
	class MANDO_HE_Grenade : 1Rnd_HE_Grenade_shell
	{
		author = "Hazmat";
		count = 20;
		displayName = "[16th] HE Grenade";
		displayNameShort = "[16th] HE Grenades";
		picture = "\3AS\3AS_Weapons\Data\UI\3as_nade_he.paa";
		descriptionShort = "Impact grenade";
		ammo = "MET_HE_LauncherGrenade_Yeller";
		mass = 15;
		initSpeed = 300;
	};
	class MET_Westar35SA_mag : 100Rnd_65x39_caseless_mag
	{
		author = "Hazmat";
		scope = 1;
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\3AS\3AS_Weapons\Data\UI\3as_pistol_y.paa";
		model = "\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
		count = 60;
		displayName = "[16th] Westar-35SA Energy Cell";
		displayNameShort = "Westar-35SA Energy Cell";
		descriptionShort = "Low Power Energy Cell for the Westar-35SA";
		ammo = "MET_blasterbolt_low_Yellow_Mand";
		tracersEvery = 1;
		initSpeed = 250;
		mass = 5;
	};
	class MET_blaster_battery_mand : 100Rnd_65x39_caseless_mag
	{
		author = "Hazmat";
		scope = 1;
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\3AS\3AS_Weapons\Data\UI\3as_box_y.paa";
		model = "\MRC\JLTS\weapons\z6\z6_mag.p3d";
		count = 300;
		displayName = "[16th] Z6 Yellow Energy Cell";
		displayNameShort = "Z6 Yellow Energy Cell";
		descriptionShort = "Energy cell for the Z6";
		ammo = "MET_blasterbolt_low_Yellow_Mand";
		tracersEvery = 1;
		initSpeed = 250;
		mass = 50;
	};
	class MET_773_mag : JLTS_DC15A_mag
	{
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 1;
		author = "Hazmat";
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\3AS\3AS_Weapons\Data\UI\3as_sniper_y.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count = 20;
		displayName = "[16th] 773 Firepuncher Energy Cell";
		displayNameShort = "773 Firepuncher Energy Cell";
		descriptionShort = "Energy Cell for the 773 Firepuncher";
		ammo = "MET_blasterbolt_dmr_Yellow";
		//WBK_PlasmaKill_Color_String_Int = "Yellow";
		//WBK_UseDisintegrate = "true";
		tracersEvery = 1;
		initSpeed = 2650;
		mass = 10;
	};
	class MET_MAND_AA_SINGLE : 3AS_JLTS_MK39_AA
	{
		displayName = "RPS-6 AA Rocket";
		picture = "\3AS\3AS_Weapons\Data\UI\3as_rocket_aa.paa";
		ammo = "metal_mand_aa_missile_van";
		count = 1;
		mass = 40;
		initSpeed = 40;
	};
	class MET_MAND_AP_SINGLE : 3AS_JLTS_MK39_AA
	{
		displayName = "RPS-6 AP Rocket";
		picture = "\3AS\3AS_Weapons\Data\UI\3as_rocket_he.paa";
		ammo = "metal_mand_ap_missile";
		count = 1;
		mass = 40;
		initSpeed = 40;
	};
	class MET_MAND_AT_SINGLE : 3AS_JLTS_MK39_AA
	{
		displayName = "RPS-6 AT Rocket";
		picture = "\3AS\3AS_Weapons\Data\UI\3as_rocket_at.paa";
		ammo = "metal_mand_at_wire_missile";
		count = 1;
		mass = 50;
		initSpeed = 40;
	};
};
class CfgLights
{
	class 3AS_RocketLight;
	class MET_ATRocket_Yellow : 3AS_RocketLight
	{
		color[] = {0.839,0.749,0.486};
		diffuse[] = {213.945,190.995,123.93,1};
		intensity = 30000;
		dayLight = 1;
		useFlare = 1;
		flareSize = 1.5;
		flareMaxDistance = 6000;
	};
};
class MET_Rocket_effect_Yellow_fly
{
	class Light
	{
		simulation = "light";
		type = "MET_ATRocket_Yellow";
		position[] = { 0,0,0 };
	};
	class Smoke
	{
		simulation = "particles";
		type = "Missile3";
		position[] = { 0,0,0 };
		qualityLevel = -1;
	};
};
class CfgAmmo
{
	class HitEffects;
	class SFA_bullet_pistol_blue;
	class GrenadeBase;
	class SFA_bullet_carbine_blue;
	class SFA_bullet_Sniper_blue;
	class 3AS_PlasmaBase;
	class G_40mm_HE;
	class MET_HE_LauncherGrenade_Yeller : G_40mm_HE
	{
		ace_frag_enabled = 1;
		indirectHitRange = 9;
		coefgravity = 1;
		indirectHit = 20;
		effectflare = "FlareShell";
		effectfly = "MET_BlasterBoltGlow_Yellow_Fly";
		fuseDistance = 0;
		ExplosionEffects = "GrenadeExplosion";
		CraterEffects = "GrenadeCrater";
		lightcolor[] = { .839,0.749,0.486 };
		model = "Indecisive_Armoury_Ammos\Data\40mm_Grenade\IDA_40mm_Grenade.p3d";
	};
	class MET_blasterbolt;
	class MET_blasterbolt_Yellow_Mand : MET_blasterbolt
	{
		model = "\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Yellow.p3d";
		effectfly = "MET_BlasterBoltGlow_Yellow_Fly";
		hit = 25;
		lightcolor[] = { .839,0.749,0.486 };
	};
	class MET_blasterbolt_low;
	class MET_blasterbolt_low_Yellow_Mand : MET_blasterbolt_low
	{
		hit = 20;
		model = "\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Yellow.p3d";
		effectfly = "MET_BlasterBoltGlow_Yellow_Fly";
		lightcolor[] = { .839,0.749,0.486 };
	};
	class MET_yellow_slug : 3AS_PlasmaBase
	{
		model = "\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_yellow.p3d";
		ACE_damageType = "bullet";
		cartridge = "";
		lightcolor[] = {.839,0.749,0.486};
		hit = 120;
		indirectHit = 0;
		explosive = 0;
		indirectHitRange = 0.5;
		caliber = 1;
		coefGravity = 0;
		timetolive = 1;
		waterFriction = -0.0099999998;
		deflecting = 0;
		airfriction = 0;
		tracerstarttime = 0.050000001;
		tracerendtime = 10;
		nvgonly = 0;
		airlock = 1;
		irtarget = 1;
		brightness = 1000;
		flaresize = 5;
		tracerscale = 1;
		effectflare = "FlareShell";
		effectfly = "MET_BlasterBoltGlow_yellow_Fly";
		ExplosionEffects = "MET_ImpactEffect";
		cratereffects = "";
		class HitEffects
		{
			Hit_Foliage_Green = "MET_ImpactEffect";
			Hit_Foliage_Dead = "MET_ImpactEffect";
			Hit_Foliage_Green_big = "MET_ImpactEffect";
			Hit_Foliage_Palm = "MET_ImpactEffect";
			Hit_Foliage_Pine = "MET_ImpactEffect";
			hitFoliage = "MET_ImpactEffect";
			hitGlass = "MET_ImpactEffect";
			hitGlassArmoRed = "MET_ImpactEffect";
			hitWood = "MET_ImpactEffect";
			hitMetal = "MET_ImpactEffect";
			hitMetalPlate = "MET_ImpactEffect";
			hitBuilding = "MET_ImpactEffect";
			hitPlastic = "MET_ImpactEffect";
			hitRubber = "MET_ImpactEffect";
			hitTyre = "MET_ImpactEffect";
			hitConcrete = "MET_ImpactEffect";
			hitMan = "MET_ImpactEffect";
			hitGroundSoft = "MET_ImpactEffect";
			hitGroundRed = "MET_ImpactEffect";
			hitGroundHard = "MET_ImpactEffect";
			hitWater = "MET_ImpactEffect";
			hitVirtual = "MET_ImpactEffect";
			default_mat = "MET_ImpactEffect";
		};
		soundHitBody1[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\Body_Impact_1.ogg",
			3,
			1,
			200
		};
		soundHitBody2[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\Body_Impact_2.ogg",
			3,
			1,
			200
		};
		soundHitBody3[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\Body_Impact_3.ogg",
			3,
			1,
			200
		};
		soundHitBody4[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\Body_Impact_4.ogg",
			3,
			1,
			200
		};
		soundHitBody5[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\Body_Impact_5.ogg",
			3,
			1,
			200
		};
		soundHitBody6[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\Body_Impact_1.ogg",
			3,
			1.5,
			200
		};
		soundHitBody7[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\Body_Impact_2.ogg",
			3,
			1.5,
			200
		};
		soundHitBody8[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\Body_Impact_3.ogg",
			3,
			1.5,
			200
		};
		soundHitBody9[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\Body_Impact_4.ogg",
			3,
			1.5,
			200
		};
		soundHitBody10[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\Body_Impact_5.ogg",
			3,
			1.5,
			200
		};
		hitMan[] =
		{
			"soundHitBody1",
			0.1,
			"soundHitBody2",
			0.1,
			"soundHitBody3",
			0.1,
			"soundHitBody4",
			0.1,
			"soundHitBody5",
			0.1,
			"soundHitBody6",
			0.1,
			"soundHitBody7",
			0.1,
			"soundHitBody8",
			0.1,
			"soundHitBody9",
			0.1,
			"soundHitBody10",
			0.1
		};
		soundDefault1[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_1.ogg",
			2,
			1,
			165
		};
		soundDefault2[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_2.ogg",
			2,
			1,
			165
		};
		soundDefault3[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_3.ogg",
			2,
			1,
			165
		};
		soundDefault4[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_4.ogg",
			2,
			1,
			165
		};
		soundDefault5[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_5.ogg",
			2,
			1,
			165
		};
		soundDefault6[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_6.ogg",
			2,
			1,
			165
		};
		soundDefault7[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_7.ogg",
			2,
			1,
			165
		};
		soundDefault8[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_8.ogg",
			2,
			1,
			165
		};
		soundDefault9[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_9.ogg",
			2,
			1,
			165
		};
		soundDefault10[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_10.ogg",
			2,
			1,
			165
		};
		soundDefault11[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_11.ogg",
			2,
			1,
			165
		};
		soundDefault12[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_12.ogg",
			2,
			1,
			165
		};
		soundDefault13[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_13.ogg",
			2,
			1,
			165
		};
		soundDefault14[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_14.ogg",
			2,
			1,
			165
		};
		soundDefault15[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_15.ogg",
			2,
			1,
			165
		};
		soundDefault16[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_16.ogg",
			2,
			1,
			165
		};
		soundDefault17[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_17.ogg",
			2,
			1,
			165
		};
		soundDefault18[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_18.ogg",
			2,
			1,
			165
		};
		soundDefault19[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_19.ogg",
			2,
			1,
			165
		};
		soundDefault20[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_20.ogg",
			2,
			1,
			165
		};
		soundDefault21[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_21.ogg",
			2,
			1,
			165
		};
		soundDefault22[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_22.ogg",
			2,
			1,
			165
		};
		soundDefault23[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_23.ogg",
			2,
			1,
			165
		};
		soundDefault24[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_24.ogg",
			2,
			1,
			165
		};
		soundDefault25[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_25.ogg",
			2,
			1,
			165
		};
		soundDefault26[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_26.ogg",
			2,
			1,
			165
		};
		soundDefault27[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_27.ogg",
			2,
			1,
			165
		};
		soundDefault28[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_28.ogg",
			2,
			1,
			165
		};
		soundDefault29[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_29.ogg",
			2,
			1,
			165
		};
		soundDefault30[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_30.ogg",
			2,
			1,
			165
		};
		soundDefault31[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_31.ogg",
			2,
			1,
			165
		};
		soundDefault32[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_32.ogg",
			2,
			1,
			165
		};
		soundDefault33[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_33.ogg",
			2,
			1,
			165
		};
		soundDefault34[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_34.ogg",
			2,
			1,
			165
		};
		soundDefault35[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_35.ogg",
			2,
			1,
			165
		};
		soundDefault36[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_36.ogg",
			2,
			1,
			165
		};
		soundDefault37[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Default_Impact_37.ogg",
			2,
			1,
			165
		};
		hitDefault[] =
		{
			"soundDefault1",
			0.027000001,
			"soundDefault2",
			0.027000001,
			"soundDefault3",
			0.027000001,
			"soundDefault4",
			0.027000001,
			"soundDefault5",
			0.027000001,
			"soundDefault6",
			0.027000001,
			"soundDefault7",
			0.027000001,
			"soundDefault8",
			0.027000001,
			"soundDefault9",
			0.027000001,
			"soundDefault10",
			0.027000001,
			"soundDefault11",
			0.027000001,
			"soundDefault12",
			0.027000001,
			"soundDefault13",
			0.027000001,
			"soundDefault14",
			0.027000001,
			"soundDefault15",
			0.027000001,
			"soundDefault16",
			0.027000001,
			"soundDefault17",
			0.027000001,
			"soundDefault18",
			0.027000001,
			"soundDefault19",
			0.027000001,
			"soundDefault20",
			0.027000001,
			"soundDefault21",
			0.027000001,
			"soundDefault22",
			0.027000001,
			"soundDefault23",
			0.027000001,
			"soundDefault24",
			0.027000001,
			"soundDefault25",
			0.027000001,
			"soundDefault26",
			0.027000001,
			"soundDefault37",
			0.027000001,
			"soundDefault27",
			0.027000001,
			"soundDefault28",
			0.027000001,
			"soundDefault29",
			0.027000001,
			"soundDefault30",
			0.027000001,
			"soundDefault31",
			0.027000001,
			"soundDefault32",
			0.027000001,
			"soundDefault33",
			0.027000001,
			"soundDefault34",
			0.027000001,
			"soundDefault35",
			0.027000001,
			"soundDefault36",
			0.027000001
		};
		hitFoliage[] =
		{
			"soundDefault1",
			0.027000001,
			"soundDefault2",
			0.027000001,
			"soundDefault3",
			0.027000001,
			"soundDefault4",
			0.027000001,
			"soundDefault5",
			0.027000001,
			"soundDefault6",
			0.027000001,
			"soundDefault7",
			0.027000001,
			"soundDefault8",
			0.027000001,
			"soundDefault9",
			0.027000001,
			"soundDefault10",
			0.027000001,
			"soundDefault11",
			0.027000001,
			"soundDefault12",
			0.027000001,
			"soundDefault13",
			0.027000001,
			"soundDefault14",
			0.027000001,
			"soundDefault15",
			0.027000001,
			"soundDefault16",
			0.027000001,
			"soundDefault17",
			0.027000001,
			"soundDefault18",
			0.027000001,
			"soundDefault19",
			0.027000001,
			"soundDefault20",
			0.027000001,
			"soundDefault21",
			0.027000001,
			"soundDefault22",
			0.027000001,
			"soundDefault23",
			0.027000001,
			"soundDefault24",
			0.027000001,
			"soundDefault25",
			0.027000001,
			"soundDefault26",
			0.027000001,
			"soundDefault37",
			0.027000001,
			"soundDefault27",
			0.027000001,
			"soundDefault28",
			0.027000001,
			"soundDefault29",
			0.027000001,
			"soundDefault30",
			0.027000001,
			"soundDefault31",
			0.027000001,
			"soundDefault32",
			0.027000001,
			"soundDefault33",
			0.027000001,
			"soundDefault34",
			0.027000001,
			"soundDefault35",
			0.027000001,
			"soundDefault36",
			0.027000001
		};
		hitPlastic[] =
		{
			"soundDefault1",
			0.027000001,
			"soundDefault2",
			0.027000001,
			"soundDefault3",
			0.027000001,
			"soundDefault4",
			0.027000001,
			"soundDefault5",
			0.027000001,
			"soundDefault6",
			0.027000001,
			"soundDefault7",
			0.027000001,
			"soundDefault8",
			0.027000001,
			"soundDefault9",
			0.027000001,
			"soundDefault10",
			0.027000001,
			"soundDefault11",
			0.027000001,
			"soundDefault12",
			0.027000001,
			"soundDefault13",
			0.027000001,
			"soundDefault14",
			0.027000001,
			"soundDefault15",
			0.027000001,
			"soundDefault16",
			0.027000001,
			"soundDefault17",
			0.027000001,
			"soundDefault18",
			0.027000001,
			"soundDefault19",
			0.027000001,
			"soundDefault20",
			0.027000001,
			"soundDefault21",
			0.027000001,
			"soundDefault22",
			0.027000001,
			"soundDefault23",
			0.027000001,
			"soundDefault24",
			0.027000001,
			"soundDefault25",
			0.027000001,
			"soundDefault26",
			0.027000001,
			"soundDefault37",
			0.027000001,
			"soundDefault27",
			0.027000001,
			"soundDefault28",
			0.027000001,
			"soundDefault29",
			0.027000001,
			"soundDefault30",
			0.027000001,
			"soundDefault31",
			0.027000001,
			"soundDefault32",
			0.027000001,
			"soundDefault33",
			0.027000001,
			"soundDefault34",
			0.027000001,
			"soundDefault35",
			0.027000001,
			"soundDefault36",
			0.027000001
		};
		hitRubber[] =
		{
			"soundDefault1",
			0.027000001,
			"soundDefault2",
			0.027000001,
			"soundDefault3",
			0.027000001,
			"soundDefault4",
			0.027000001,
			"soundDefault5",
			0.027000001,
			"soundDefault6",
			0.027000001,
			"soundDefault7",
			0.027000001,
			"soundDefault8",
			0.027000001,
			"soundDefault9",
			0.027000001,
			"soundDefault10",
			0.027000001,
			"soundDefault11",
			0.027000001,
			"soundDefault12",
			0.027000001,
			"soundDefault13",
			0.027000001,
			"soundDefault14",
			0.027000001,
			"soundDefault15",
			0.027000001,
			"soundDefault16",
			0.027000001,
			"soundDefault17",
			0.027000001,
			"soundDefault18",
			0.027000001,
			"soundDefault19",
			0.027000001,
			"soundDefault20",
			0.027000001,
			"soundDefault21",
			0.027000001,
			"soundDefault22",
			0.027000001,
			"soundDefault23",
			0.027000001,
			"soundDefault24",
			0.027000001,
			"soundDefault25",
			0.027000001,
			"soundDefault26",
			0.027000001,
			"soundDefault37",
			0.027000001,
			"soundDefault27",
			0.027000001,
			"soundDefault28",
			0.027000001,
			"soundDefault29",
			0.027000001,
			"soundDefault30",
			0.027000001,
			"soundDefault31",
			0.027000001,
			"soundDefault32",
			0.027000001,
			"soundDefault33",
			0.027000001,
			"soundDefault34",
			0.027000001,
			"soundDefault35",
			0.027000001,
			"soundDefault36",
			0.027000001
		};
		hitTyre[] =
		{
			"soundDefault1",
			0.027000001,
			"soundDefault2",
			0.027000001,
			"soundDefault3",
			0.027000001,
			"soundDefault4",
			0.027000001,
			"soundDefault5",
			0.027000001,
			"soundDefault6",
			0.027000001,
			"soundDefault7",
			0.027000001,
			"soundDefault8",
			0.027000001,
			"soundDefault9",
			0.027000001,
			"soundDefault10",
			0.027000001,
			"soundDefault11",
			0.027000001,
			"soundDefault12",
			0.027000001,
			"soundDefault13",
			0.027000001,
			"soundDefault14",
			0.027000001,
			"soundDefault15",
			0.027000001,
			"soundDefault16",
			0.027000001,
			"soundDefault17",
			0.027000001,
			"soundDefault18",
			0.027000001,
			"soundDefault19",
			0.027000001,
			"soundDefault20",
			0.027000001,
			"soundDefault21",
			0.027000001,
			"soundDefault22",
			0.027000001,
			"soundDefault23",
			0.027000001,
			"soundDefault24",
			0.027000001,
			"soundDefault25",
			0.027000001,
			"soundDefault26",
			0.027000001,
			"soundDefault37",
			0.027000001,
			"soundDefault27",
			0.027000001,
			"soundDefault28",
			0.027000001,
			"soundDefault29",
			0.027000001,
			"soundDefault30",
			0.027000001,
			"soundDefault31",
			0.027000001,
			"soundDefault32",
			0.027000001,
			"soundDefault33",
			0.027000001,
			"soundDefault34",
			0.027000001,
			"soundDefault35",
			0.027000001,
			"soundDefault36",
			0.027000001
		};
		hitWood[] =
		{
			"soundDefault1",
			0.027000001,
			"soundDefault2",
			0.027000001,
			"soundDefault3",
			0.027000001,
			"soundDefault4",
			0.027000001,
			"soundDefault5",
			0.027000001,
			"soundDefault6",
			0.027000001,
			"soundDefault7",
			0.027000001,
			"soundDefault8",
			0.027000001,
			"soundDefault9",
			0.027000001,
			"soundDefault10",
			0.027000001,
			"soundDefault11",
			0.027000001,
			"soundDefault12",
			0.027000001,
			"soundDefault13",
			0.027000001,
			"soundDefault14",
			0.027000001,
			"soundDefault15",
			0.027000001,
			"soundDefault16",
			0.027000001,
			"soundDefault17",
			0.027000001,
			"soundDefault18",
			0.027000001,
			"soundDefault19",
			0.027000001,
			"soundDefault20",
			0.027000001,
			"soundDefault21",
			0.027000001,
			"soundDefault22",
			0.027000001,
			"soundDefault23",
			0.027000001,
			"soundDefault24",
			0.027000001,
			"soundDefault25",
			0.027000001,
			"soundDefault26",
			0.027000001,
			"soundDefault37",
			0.027000001,
			"soundDefault27",
			0.027000001,
			"soundDefault28",
			0.027000001,
			"soundDefault29",
			0.027000001,
			"soundDefault30",
			0.027000001,
			"soundDefault31",
			0.027000001,
			"soundDefault32",
			0.027000001,
			"soundDefault33",
			0.027000001,
			"soundDefault34",
			0.027000001,
			"soundDefault35",
			0.027000001,
			"soundDefault36",
			0.027000001
		};
		hitBuilding[] =
		{
			"soundDefault1",
			0.027000001,
			"soundDefault2",
			0.027000001,
			"soundDefault3",
			0.027000001,
			"soundDefault4",
			0.027000001,
			"soundDefault5",
			0.027000001,
			"soundDefault6",
			0.027000001,
			"soundDefault7",
			0.027000001,
			"soundDefault8",
			0.027000001,
			"soundDefault9",
			0.027000001,
			"soundDefault10",
			0.027000001,
			"soundDefault11",
			0.027000001,
			"soundDefault12",
			0.027000001,
			"soundDefault13",
			0.027000001,
			"soundDefault14",
			0.027000001,
			"soundDefault15",
			0.027000001,
			"soundDefault16",
			0.027000001,
			"soundDefault17",
			0.027000001,
			"soundDefault18",
			0.027000001,
			"soundDefault19",
			0.027000001,
			"soundDefault20",
			0.027000001,
			"soundDefault21",
			0.027000001,
			"soundDefault22",
			0.027000001,
			"soundDefault23",
			0.027000001,
			"soundDefault24",
			0.027000001,
			"soundDefault25",
			0.027000001,
			"soundDefault26",
			0.027000001,
			"soundDefault37",
			0.027000001,
			"soundDefault27",
			0.027000001,
			"soundDefault28",
			0.027000001,
			"soundDefault29",
			0.027000001,
			"soundDefault30",
			0.027000001,
			"soundDefault31",
			0.027000001,
			"soundDefault32",
			0.027000001,
			"soundDefault33",
			0.027000001,
			"soundDefault34",
			0.027000001,
			"soundDefault35",
			0.027000001,
			"soundDefault36",
			0.027000001
		};
		soundHit1[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Dirt_Impact_1.ogg",
			2,
			1,
			165
		};
		soundHit2[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Dirt_Impact_2.ogg",
			2,
			1,
			165
		};
		soundHit3[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Dirt_Impact_3.ogg",
			2,
			1,
			165
		};
		soundHit4[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Dirt_Impact_4.ogg",
			2,
			1,
			165
		};
		soundHit5[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Dirt_Impact_5.ogg",
			2,
			1,
			165
		};
		soundHit6[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Dirt_Impact_6.ogg",
			2,
			1,
			165
		};
		soundHit7[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Dirt_Impact_7.ogg",
			2,
			1,
			165
		};
		soundHit8[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Dirt_Impact_8.ogg",
			2,
			1,
			165
		};
		soundHit9[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Dirt_Impact_9.ogg",
			2,
			1,
			165
		};
		soundHit10[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Dirt_Impact_10.ogg",
			2,
			1,
			165
		};
		soundHit11[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Dirt_Impact_11.ogg",
			2,
			1,
			165
		};
		hitGround[] =
		{
			"soundHit1",
			0.090899996,
			"soundHit2",
			0.090899996,
			"soundHit3",
			0.090899996,
			"soundHit4",
			0.090899996,
			"soundHit5",
			0.090899996,
			"soundHit6",
			0.090899996,
			"soundHit7",
			0.090899996,
			"soundHit8",
			0.090899996,
			"soundHit9",
			0.090899996,
			"soundHit10",
			0.090899996,
			"soundHit11",
			0.090899996
		};
		hitGroundHard[] =
		{
			"soundHit1",
			0.090899996,
			"soundHit2",
			0.090899996,
			"soundHit3",
			0.090899996,
			"soundHit4",
			0.090899996,
			"soundHit5",
			0.090899996,
			"soundHit6",
			0.090899996,
			"soundHit7",
			0.090899996,
			"soundHit8",
			0.090899996,
			"soundHit9",
			0.090899996,
			"soundHit10",
			0.090899996,
			"soundHit11",
			0.090899996
		};
		hitGroundSoft[] =
		{
			"soundHit1",
			0.090899996,
			"soundHit2",
			0.090899996,
			"soundHit3",
			0.090899996,
			"soundHit4",
			0.090899996,
			"soundHit5",
			0.090899996,
			"soundHit6",
			0.090899996,
			"soundHit7",
			0.090899996,
			"soundHit8",
			0.090899996,
			"soundHit9",
			0.090899996,
			"soundHit10",
			0.090899996,
			"soundHit11",
			0.090899996
		};
		hitConcrete[] =
		{
			"soundHit1",
			0.090899996,
			"soundHit2",
			0.090899996,
			"soundHit3",
			0.090899996,
			"soundHit4",
			0.090899996,
			"soundHit5",
			0.090899996,
			"soundHit6",
			0.090899996,
			"soundHit7",
			0.090899996,
			"soundHit8",
			0.090899996,
			"soundHit9",
			0.090899996,
			"soundHit10",
			0.090899996,
			"soundHit11",
			0.090899996
		};
		soundMetal1[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Metal_Impact_1.ogg",
			2,
			1,
			165
		};
		soundMetal2[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Metal_Impact_2.ogg",
			2,
			1,
			165
		};
		soundMetal3[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Metal_Impact_3.ogg",
			2,
			1,
			165
		};
		soundMetal4[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Metal_Impact_4.ogg",
			2,
			1,
			165
		};
		soundMetal5[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Metal_Impact_5.ogg",
			2,
			1,
			165
		};
		soundMetal6[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Metal_Impact_6.ogg",
			2,
			1,
			165
		};
		soundMetal7[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Metal_Impact_7.ogg",
			2,
			1,
			165
		};
		soundMetal8[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Metal_Impact_8.ogg",
			2,
			1,
			165
		};
		soundMetal9[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Metal_Impact_9.ogg",
			2,
			1,
			165
		};
		soundMetal10[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Metal_Impact_10.ogg",
			2,
			1,
			165
		};
		soundMetal11[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Metal_Impact_11.ogg",
			2,
			1,
			165
		};
		soundMetal12[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Metal_Impact_12.ogg",
			2,
			1,
			165
		};
		soundMetal13[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Metal_Impact_13.ogg",
			2,
			1,
			165
		};
		soundMetal14[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Metal_Impact_14.ogg",
			2,
			1,
			165
		};
		soundMetal15[] =
		{
			"\3AS\3AS_Weapons\Data\Impacts\3AS_Metal_Impact_15.ogg",
			2,
			1,
			165
		};
		hitMetal[] =
		{
			"soundMetal1",
			0.066600002,
			"soundMetal2",
			0.066600002,
			"soundMetal3",
			0.066600002,
			"soundMetal4",
			0.066600002,
			"soundMetal5",
			0.066600002,
			"soundMetal6",
			0.066600002,
			"soundMetal7",
			0.066600002,
			"soundMetal8",
			0.066600002,
			"soundMetal9",
			0.066600002,
			"soundMetal10",
			0.066600002,
			"soundMetal11",
			0.066600002,
			"soundMetal12",
			0.066600002,
			"soundMetal13",
			0.066600002,
			"soundMetal14",
			0.066600002,
			"soundMetal15",
			0.066600002
		};
		hitIron[] =
		{
			"soundMetal1",
			0.066600002,
			"soundMetal2",
			0.066600002,
			"soundMetal3",
			0.066600002,
			"soundMetal4",
			0.066600002,
			"soundMetal5",
			0.066600002,
			"soundMetal6",
			0.066600002,
			"soundMetal7",
			0.066600002,
			"soundMetal8",
			0.066600002,
			"soundMetal9",
			0.066600002,
			"soundMetal10",
			0.066600002,
			"soundMetal11",
			0.066600002,
			"soundMetal12",
			0.066600002,
			"soundMetal13",
			0.066600002,
			"soundMetal14",
			0.066600002,
			"soundMetal15",
			0.066600002
		};
		hitMetalInt[] =
		{
			"soundMetal1",
			0.066600002,
			"soundMetal2",
			0.066600002,
			"soundMetal3",
			0.066600002,
			"soundMetal4",
			0.066600002,
			"soundMetal5",
			0.066600002,
			"soundMetal6",
			0.066600002,
			"soundMetal7",
			0.066600002,
			"soundMetal8",
			0.066600002,
			"soundMetal9",
			0.066600002,
			"soundMetal10",
			0.066600002,
			"soundMetal11",
			0.066600002,
			"soundMetal12",
			0.066600002,
			"soundMetal13",
			0.066600002,
			"soundMetal14",
			0.066600002,
			"soundMetal15",
			0.066600002
		};
		hitMetalPlate[] =
		{
			"soundMetal1",
			0.066600002,
			"soundMetal2",
			0.066600002,
			"soundMetal3",
			0.066600002,
			"soundMetal4",
			0.066600002,
			"soundMetal5",
			0.066600002,
			"soundMetal6",
			0.066600002,
			"soundMetal7",
			0.066600002,
			"soundMetal8",
			0.066600002,
			"soundMetal9",
			0.066600002,
			"soundMetal10",
			0.066600002,
			"soundMetal11",
			0.066600002,
			"soundMetal12",
			0.066600002,
			"soundMetal13",
			0.066600002,
			"soundMetal14",
			0.066600002,
			"soundMetal15",
			0.066600002
		};
		hitArmor[] =
		{
			"soundMetal1",
			0.066600002,
			"soundMetal2",
			0.066600002,
			"soundMetal3",
			0.066600002,
			"soundMetal4",
			0.066600002,
			"soundMetal5",
			0.066600002,
			"soundMetal6",
			0.066600002,
			"soundMetal7",
			0.066600002,
			"soundMetal8",
			0.066600002,
			"soundMetal9",
			0.066600002,
			"soundMetal10",
			0.066600002,
			"soundMetal11",
			0.066600002,
			"soundMetal12",
			0.066600002,
			"soundMetal13",
			0.066600002,
			"soundMetal14",
			0.066600002,
			"soundMetal15",
			0.066600002
		};
		hitArmorInt[] =
		{
			"soundMetal1",
			0.066600002,
			"soundMetal2",
			0.066600002,
			"soundMetal3",
			0.066600002,
			"soundMetal4",
			0.066600002,
			"soundMetal5",
			0.066600002,
			"soundMetal6",
			0.066600002,
			"soundMetal7",
			0.066600002,
			"soundMetal8",
			0.066600002,
			"soundMetal9",
			0.066600002,
			"soundMetal10",
			0.066600002,
			"soundMetal11",
			0.066600002,
			"soundMetal12",
			0.066600002,
			"soundMetal13",
			0.066600002,
			"soundMetal14",
			0.066600002,
			"soundMetal15",
			0.066600002
		};
		bulletFly1[] =
		{
			"\infantry_weap\sounds\plasma_flyby_1.wss",
			2.2387211,
			1,
			100
		};
		bulletFly2[] =
		{
			"\infantry_weap\sounds\plasma_flyby_2.wss",
			2.2387211,
			1,
			100
		};
		bulletFly3[] =
		{
			"\infantry_weap\sounds\plasma_flyby_3.wss",
			2.2387211,
			1,
			100
		};
		bulletFly4[] =
		{
			"\infantry_weap\sounds\plasma_flyby_4.wss",
			2.2387211,
			1,
			100
		};
		bulletFly5[] =
		{
			"\infantry_weap\sounds\plasma_flyby_5.wss",
			2.2387211,
			1,
			100
		};
		bulletFly[] =
		{
			"bulletFly1",
			0.2,
			"bulletFly2",
			0.2,
			"bulletFly3",
			0.2,
			"bulletFly4",
			0.2,
			"bulletFly5",
			0.2
		};
		soundSetBulletFly[] =
		{
			"MET_plasma_bullet_flyby_soundSet"
		};
		supersoniccracknear[] = {};
		supersoniccrackfar[] = {};
		soundSetSonicCrack[] = {};
	};
	class MET_yellow_pellet : MET_yellow_slug
	{
		hit = 60;
		simulationStep = 9.9999997e-005;
		cartridge = "";
		submunitionAmmo = "MET_yellow_pellet_subminition";
		submunitionConeType[] =
		{
			"poissondisc",
			15
		};
		submunitionConeAngle = 0.4;
		triggerSpeedCoef[] = { 0.85000002,1 };
		triggerTime = 0.001;
		cost = 1;
	};
	class MET_yellow_pellet_subminition : MET_yellow_slug
	{
		hit = 60;
		deflecting = 2;
	};
	class MET_yellow_pellet_Bird : MET_yellow_slug
	{
		hit = 30;
		simulationStep = 9.9999997e-005;
		cartridge = "";
		submunitionAmmo = "MET_yellow_pellet_subminition_Bird";
		submunitionConeType[] =
		{
			"poissondisc",
			30
		};
		submunitionConeAngle = 2;
		triggerSpeedCoef[] = { 0.85000002,1 };
		triggerTime = 0.001;
		cost = 1;
	};
	class MET_yellow_pellet_subminition_Bird : MET_yellow_slug
	{
		hit = 30;
		deflecting = 2;
	};
	class 3AS_M_MK39_AA;
	class metal_mand_aa_missile_van : 3AS_M_MK39_AA
	{
		hit = 750;
		indirectHit = 120;
		indirectHitRange = 12;
		warheadName = "AA";
		proximityExplosionDistance = 10;
		maneuvrability = 22;
		simulationStep = 0.0020000001;
		trackOversteer = 1;
		trackLead = 0.94999999;
		aiAmmoUsageFlags = 256;
		irLock = 1;
		cost = 1000;
		timeToLive = 30;
		airFriction = 0.145;
		sideAirFriction = 0.1;
		maxSpeed = 850;
		initTime = 0.25;
		thrustTime = 10;
		thrust = 380;
		fuseDistance = 50;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissileInit = "";
		effectsMissile = "MET_Rocket_effect_Yellow_fly";
		soundFly[] =
		{
			"LF_Weapon_Unit\PLX\sounds\plx_fly.wss",
			6,
			1.5,
			700
		};
	};
	class M_Titan_AP;
	class metal_mand_ap_missile : M_Titan_AP
	{
		warheadName = "HE";
		submunitionAmmo = "";
		submunitionDirectionType = "SubmunitionModelDirection";
		effectsMissile = "MET_Rocket_effect_Yellow_fly";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = { 0,0,-0.2 };
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		ace_frag_enabled = 1;
		ace_frag_metal = 4500;
		ace_frag_charge = 500;
		ace_frag_gurney_c = 2830;
		ace_frag_gurney_k = "1/2";
		ace_frag_classes[] =
		{
			"ACE_frag_large"
		};
		ace_frag_skip = 0;
		ace_frag_force = 3;
		hit = 80;
		indirectHit = 90;
		indirectHitRange = 11;
		explosive = 1;
		soundFly[] =
		{
			"LF_Weapon_Unit\PLX\sounds\plx_fly.wss",
			6,
			1.5,
			700
		};
	};
	class metal_mand_at_wire_missile : M_Titan_AP
	{
		warheadName = "AT";
		submunitionAmmo = "";
		submunitionDirectionType = "SubmunitionModelDirection";
		effectsMissile = "MET_Rocket_effect_Yellow_fly";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = { 0,0,-0.2 };
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		ace_frag_enabled = 0;
		ace_frag_metal = 00;
		ace_frag_charge = 00;
		ace_frag_gurney_c = 0;
		ace_frag_gurney_k = "";
		ace_frag_classes[] = {};
		ace_frag_skip = 0;
		ace_frag_force = 0;
		hit = 2500;
		indirectHit = 15;
		indirectHitRange = 1;
		explosive = 1;
		soundFly[] =
		{
			"LF_Weapon_Unit\PLX\sounds\plx_fly.wss",
			6,
			1.5,
			700
		};
	};
};