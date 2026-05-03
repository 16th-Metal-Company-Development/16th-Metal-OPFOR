class CfgPatches
{
	class handweapons_16
	{	
		units[]={};
		weapons[]=
		{
			"Metal_E5",
			"Metal_E5_BX",
			"Metal_E5C_Stock",
			"Metal_E5S",
			"Metal_RG4D",
			"Metal_SBB3",
			"Metal_E60R_AT",
			"Metal_E60R_AA",
			"Metal_CIS_EPL2"

		};
		requiredAddons[]=
		{
			"A3_characters_F",
            "metal_inf_weap",
			"JLTS_weapons_E5",
			"ammo_cis_16",
			"IDA_CIS",
			"JLTS_weapons_E5C",
			"JLTS_weapons_E5S",
			"JLTS_weapons_E60R",
			"JLTS_weapons_RG4D",
			"JLTS_weapons_SBB3"
		};
		author="DJ, LCDR Wolf, Ronin, JLTS Team";
		Name="handweapons_16";
	};
};

class Mode_SemiAuto;
class Mode_Burst: Mode_SemiAuto
{
	class BaseSoundModeType;
	class StandardSound;
};
class Mode_FullAuto: Mode_SemiAuto
{
	class BaseSoundModeType;
	class StandardSound;
};
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class WeaponSlotsInfo;
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Metal_E5_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"Metal_rifle_Closure_SoundShader",
			"Metal_E5_closeShot_SoundShader",
			"Metal_E5_midShot_SoundShader",
			"Metal_E5_distShot_SoundShader",
			"Metal_rifle_distShot_SoundShader"
		};
	};
};
class CfgSoundShaders
{
	class Metal_rifle_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_closure_01",
				1
			},
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\dmr06_closure_02",
				1
			}
		};
		range=5;
		volume=0.44668359;
	};
	class Metal_rifle_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"z\MET\addons\cis_faction\hand_weapons\sounds\blaster_far.ogg",
				1
			},
			
			{
				"z\MET\addons\cis_faction\hand_weapons\sounds\blaster_far.ogg",
				1
			},
			
			{
				"z\MET\addons\cis_faction\hand_weapons\sounds\blaster_far.ogg",
				1
			}
		};
		volume=1;
		range=2500;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{2500,1}
		};
	};
	class Metal_E5_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"z\MET\addons\cis_faction\hand_weapons\sounds\e5_fire1.ogg",
				1
			},
			
			{
				"z\MET\addons\cis_faction\hand_weapons\sounds\e5_fire2.ogg",
				1
			},
			
			{
				"z\MET\addons\cis_faction\hand_weapons\sounds\e5_fire3.ogg",
				1
			}
		};
		volume=1;
		range=100;
		rangeCurve="closeShotCurve";
	};
	class Metal_E5_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"z\MET\addons\cis_faction\hand_weapons\sounds\e5_dist_fire1.ogg",
				1
			},
			
			{
				"z\MET\addons\cis_faction\hand_weapons\sounds\e5_dist_fire2.ogg",
				1
			},
			
			{
				"z\MET\addons\cis_faction\hand_weapons\sounds\e5_dist_fire3.ogg",
				1
			}
		};
		volume=0.50118721;
		range=2500;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{2500,0}
		};
	};
	class Metal_E5_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"z\MET\addons\cis_faction\hand_weapons\sounds\e5_dist_fire1.ogg",
				1
			},
			
			{
				"z\MET\addons\cis_faction\hand_weapons\sounds\e5_dist_fire2.ogg",
				1
			},
			
			{
				"z\MET\addons\cis_faction\hand_weapons\sounds\e5_dist_fire3.ogg",
				1
			}
		};
		volume=0.15118721;
		range=2500;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{2500,1}
		};
	};
};
class CfgWeapons
{
	class Rifle_Base_F;
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
    /*=========================================================================================
    ===========================================================================================
    ================================ E-5 ======================================================
    ===========================================================================================
    =========================================================================================*/
    class JLTS_E5;
	class Metal_E5: JLTS_E5
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="Metal_E5_fried";
		JLTS_repairTime=20;
		JLTS_canHaveShield=1;
		JLTS_shieldedWeapon="Metal_E5_shield";
		displayName="[CIS] E-5";
		author="Hathmat";
		scope=2;
        scopeArsenal=2;
        scopeCurator=2;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\E5\anims\E5_handanim.rtm"
		};
		magazines[]=
		{
			"Metal_E5_Mag"
		};
		magazineWell[]={};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\Indecisive_Armoury_Sounds\CIS\E5.ogg",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\CIS\E5.ogg",
					1,
					1.015,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\CIS\E5.ogg",
					1,
					0.98500001,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\CIS\E5.ogg",
					1,
					1.01,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\CIS\E5.ogg",
					1,
					0.995,
					1800
				};
				soundBegin[]=
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
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\CIS\E5.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			reloadTime=0.1;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			dispersion=0.0005;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.7;
			maxRange=400;
			maxRangeProbab=0.3;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\Indecisive_Armoury_Sounds\CIS\E5.ogg",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\CIS\E5.ogg",
					1,
					1.015,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\CIS\E5.ogg",
					1,
					0.98500001,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\CIS\E5.ogg",
					1,
					1.01,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\CIS\E5.ogg",
					1,
					0.995,
					1800
				};
				soundBegin[]=
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
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\CIS\E5.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			reloadTime=0.1;
			dispersion=0.002;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			minRange=0;
			minRangeProbab=0.9;
			midRange=15;
			midRangeProbab=0.7;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=0.4;
		};
		class fullauto_medium: FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"MRC\JLTS\weapons\E5\sounds\E5_fire_2",
					4,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			showToPlayer=0;
			burst=3;
			aiBurstTerminable=1;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.7;
			maxRange=150;
			maxRangeProbab=0.05;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		class single_medium_optics1: Single
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"MRC\JLTS\weapons\E5\sounds\E5_fire_2",
					4,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.7;
			maxRange=600;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"MRC\JLTS\weapons\E5\sounds\E5_fire_2",
					4,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			requiredOpticType=2;
			showToPlayer=0;
			minRange=100;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.6;
			maxRange=700;
			maxRangeProbab=0.05;
			aiRateOfFire=8;
			aiRateOfFireDistance=700;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=80;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
	};
	class Metal_E5_fried: Metal_E5
	{
		JLTS_isFried=1;
		JLTS_shieldedWeapon="Metal_E5_shield_fried";
		baseWeapon="Metal_E5_fried";
		displayName="$STR_JLTS_names_E5Fried";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
        scopeArsenal=1;
        scopeCurator=1;
		picture="\MRC\JLTS\weapons\E5\data\ui\E5_fried_ui_ca.paa";
		magazines[]={};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx.wss",
			0.56234097,
			1,
			10
		};
	};
	class Metal_E5_shield: Metal_E5
	{
		displayName="$STR_JLTS_names_E5Shield";
		baseWeapon="Metal_E5_shield";
		scope=1;
        scopeArsenal=1;
        scopeCurator=1;
		JLTS_isShielded=1;
		JLTS_baseWeapon="Metal_E5";
		JLTS_friedItem="Metal_E5_shield_fried";
		model="\MRC\JLTS\weapons\E5\E5_shielded.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\E5\data\E5_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\E5\anims\E5_shielded_handanim.rtm"
		};
		inertia=0.80000001;
		recoil="recoil_pdw";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=110;
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]=
				{
					"JLTS_riot_shield_attachment",
					"JLTS_riot_shield_212_attachment",
					"JLTS_riot_shield_501_attachment",
					"JLTS_riot_shield_101_attachment",
					"JLTS_riot_shield_CG_attachment",
					"JLTS_riot_shield_GD_attachment",
					"JLTS_riot_shield_droid_attachment"
				};
			};
		};
	};
	class Metal_E5_shield_fried: Metal_E5_shield
	{
		JLTS_baseWeapon="Metal_E5_fried";
		JLTS_isFried=1;
		baseWeapon="Metal_E5_shield_fried";
		displayName="$STR_JLTS_names_E5ShieldFried";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
        scopeArsenal=1;
        scopeCurator=1;
		picture="\MRC\JLTS\weapons\E5\data\ui\E5_fried_ui_ca.paa";
		magazines[]={};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx.wss",
			0.56234097,
			1,
			10
		};
	};
	/*=========================================================================================
    ===========================================================================================
    ================================ E-5 BX ======================================================
    ===========================================================================================
    =========================================================================================*/
    class Metal_E5_BX: JLTS_E5
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="Metal_E5_BX_fried";
		JLTS_repairTime=20;
		JLTS_canHaveShield=1;
		JLTS_shieldedWeapon="Metal_E5_BX_shield";
		baseWeapon="Metal_E5_BX";
		displayName="[CIS] E-5 BX";
		author="Hathmat";
		scope=2;
        scopeArsenal=2;
        scopeCurator=2;
		recoil="3AS_recoil_DC15S";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\E5\anims\E5_handanim.rtm"
		};
		magazines[]=
		{
			"Metal_E5_BX_Mag"
		};
		magazineWell[]={};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Metal_E5_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			reloadTime=0.0666666667;
			dispersion=0.002;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.7;
			maxRange=400;
			maxRangeProbab=0.3;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Metal_E5_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			reloadTime=0.0666666667;
			dispersion=0.002;
			minRange=0;
			minRangeProbab=0.9;
			midRange=15;
			midRangeProbab=0.7;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=0.4;
		};
		class fullauto_medium: FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"MRC\JLTS\weapons\E5\sounds\E5_fire_2",
					4,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			showToPlayer=0;
			burst=3;
			aiBurstTerminable=1;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.7;
			maxRange=150;
			maxRangeProbab=0.05;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		class single_medium_optics1: Single
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"MRC\JLTS\weapons\E5\sounds\E5_fire_2",
					4,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.7;
			maxRange=600;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"MRC\JLTS\weapons\E5\sounds\E5_fire_2",
					4,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			requiredOpticType=2;
			showToPlayer=0;
			minRange=100;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.6;
			maxRange=700;
			maxRangeProbab=0.05;
			aiRateOfFire=8;
			aiRateOfFireDistance=700;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=80;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
		modelOptics="z\MET\addons\weapons\scopes\big_cross_red_full.p3d";
		class OpticsModes
		{
			class HoloSight
			{
				opticsID=1;
				useModelOptics=0;
				opticsFlare=0;
				opticsPPEffects[]=
				{
					"Default"
				};
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=200;
				distanceZoomMax=200;
				cameraDir="";
			};
			class HoloScope: HoloSight
			{
				opticsID=2;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				visionMode[]=
				{
					"Normal",
					"NVG"
				};
				opticsZoomMin=0.050000001;
				opticsZoomMax=0.107;
				opticsZoomInit=0.107;
				memoryPointCamera="opticView";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=400;
				distanceZoomMax=550;
				weaponInfoType="RscWeaponEmpty";
			};
		};
	};
	class Metal_E5_BX_fried: Metal_E5_BX
	{
		JLTS_isFried=1;
		JLTS_shieldedWeapon="Metal_E5_BX_shield_fried";
		baseWeapon="Metal_E5_fried";
		displayName="$STR_JLTS_names_E5Fried";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
        scopeArsenal=1;
        scopeCurator=1;
		picture="\MRC\JLTS\weapons\E5\data\ui\E5_fried_ui_ca.paa";
		magazines[]={};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx.wss",
			0.56234097,
			1,
			10
		};
	};
	class Metal_E5_BX_shield: Metal_E5_BX
	{
		displayName="$STR_JLTS_names_E5Shield";
		baseWeapon="Metal_E5_BX_shield";
		scope=1;
        scopeArsenal=1;
        scopeCurator=1;
		JLTS_isShielded=1;
		JLTS_baseWeapon="Metal_E5_BX";
		JLTS_friedItem="Metal_E5_shield_fried";
		model="\MRC\JLTS\weapons\E5\E5_shielded.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\E5\data\E5_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\E5\anims\E5_shielded_handanim.rtm"
		};
		inertia=0.80000001;
		recoil="recoil_pdw";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=110;
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]=
				{
					"JLTS_riot_shield_attachment",
					"JLTS_riot_shield_212_attachment",
					"JLTS_riot_shield_501_attachment",
					"JLTS_riot_shield_101_attachment",
					"JLTS_riot_shield_CG_attachment",
					"JLTS_riot_shield_GD_attachment",
					"JLTS_riot_shield_droid_attachment"
				};
			};
		};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="JLTS_riot_shield_droid_attachment";
			};
		};
	};
	class Metal_E5_BX_shield_fried: Metal_E5_BX_shield
	{
		JLTS_baseWeapon="Metal_E5_BX_fried";
		JLTS_isFried=1;
		baseWeapon="Metal_E5_BX_shield_fried";
		displayName="$STR_JLTS_names_E5ShieldFried";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
        scopeArsenal=1;
        scopeCurator=1;
		picture="\MRC\JLTS\weapons\E5\data\ui\E5_fried_ui_ca.paa";
		magazines[]={};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx.wss",
			0.56234097,
			1,
			10
		};
	};
	/*=========================================================================================
    ===========================================================================================
    ================================ E-5C =====================================================
    ===========================================================================================
    =========================================================================================*/
	class JLTS_E5C_stock;
	class Metal_E5C_stock: JLTS_E5C_stock
	{
		JLTS_friedItem="Metal_E5C_stock_fried";
		baseWeapon="Metal_E5C_stock";
		displayName="[CIS] E-5C";
		picture="\MRC\JLTS\weapons\e5c\data\ui\e5c_stock_ui_ca.paa";
		model="\MRC\JLTS\weapons\e5c\e5c_stock.p3d";
		scope=2;
        scopeArsenal=2;
        scopeCurator=2;
		magazines[]=
		{
			"Metal_E5C_Mag"
		};
		magazineWell[]={};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\e5c\anims\e5c_stock_handanim.rtm"
		};
		inertia=0.7;
		modes[]=
		{
			"manual",
			"manual_fast",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		class manual: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\Indecisive_Armoury_Sounds\CIS\E5C.ogg",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\CIS\E5C.ogg",
					1,
					1.015,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\CIS\E5C.ogg",
					1,
					0.98500001,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\CIS\E5C.ogg",
					1,
					1.01,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\CIS\E5C.ogg",
					1,
					0.995,
					1800
				};
				soundBegin[]=
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
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\CIS\E5C.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			reloadTime=0.075;
			dispersion=0.00102;
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.039999999;
			showToPlayer=1;
		};
		class manual_fast: manual
		{
			textureType = "fastAuto";
			reloadTime=0.05;
			dispersion=0.004;
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.039999999;
			showToPlayer=1;
		};
		class close: manual_fast
		{
			burst=30;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=20;
			aiRateOfFire=1;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: manual
		{
			burst=8;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
			showToPlayer=0;
		};
		class far_optic1: medium
		{
			requiredOpticType=1;
			showToPlayer=0;
			burst=8;
			aiRateOfFire=10;
			aiRateOfFireDistance=1000;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.40000001;
			maxRange=650;
			maxRangeProbab=0.0099999998;
		};
		class far_optic2: far_optic1
		{
			burst=8;
			requiredOpticType=2;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=10;
			aiRateOfFireDistance=900;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=132;
		};
	};
	class Metal_E5C_stock_fried: Metal_E5C_stock
	{
		baseWeapon="Metal_E5C_stock_fried";
		displayName="$STR_JLTS_names_E5CStockFried";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
        scopeArsenal=1;
        scopeCurator=1;
		picture="\MRC\JLTS\weapons\e5c\data\ui\e5c_stock_fried_ui_ca.paa";
		muzzles[]=
		{
			"this"
		};
		magazines[]={};
		JLTS_isFried=1;
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx.wss",
			0.56234097,
			1,
			10
		};
	};
	/*=========================================================================================
    ===========================================================================================
    ================================ E-5S =====================================================
    ===========================================================================================
    =========================================================================================*/
	class JLTS_E5S;
	class Metal_E5S: JLTS_E5S
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		displayName="[CIS] E-5S";
		JLTS_friedItem="Metal_E5S_fried";
		JLTS_repairTime=33;
		author="MrClock";
		scope=2;
        scopeArsenal=2;
        scopeCurator=2;
		baseWeapon="Metal_E5S";
		recoil="MET_recoil_VK38X";
		magazines[]=
		{
			"Metal_E5S_Mag"
		};
		magazineWell[]={};
		modes[]=
		{
			"Single",
			"single_medium_optics1",
			"single_far_optics2"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"MRC\JLTS\weapons\E5\sounds\E5_fire",
					2.5,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				beginwater1[]=
				{
					"MRC\JLTS\weapons\E5\sounds\E5_fire",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			reloadTime=0.6;
			dispersion=0.0003;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.7;
			maxRange=450;
			maxRangeProbab=0.3;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"MRC\JLTS\weapons\E5\sounds\E5_fire",
					1,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.097;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			dispersion=0.0003;
			minRange=0;
			minRangeProbab=0.9;
			midRange=15;
			midRangeProbab=0.9;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class fullauto_medium: FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"MRC\JLTS\weapons\E5\sounds\E5_fire",
					1,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			dispersion=0.001;
			showToPlayer=0;
			burst=3;
			aiBurstTerminable=1;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		class single_medium_optics1: Single
		{
			dispersion=0.001;
			requiredOpticType=1;
			minRange=2;
			minRangeProbab=0.2;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=650;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
			showToPlayer=0;
		};
		class single_far_optics2: single_medium_optics1
		{
			showToPlayer=0;
			dispersion=0.004;
			requiredOpticType=2;
			minRange=600;
			minRangeProbab=0.2;
			midRange=800;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.050000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=1000;
		};
		modelOptics="z\MET\addons\weapons\scopes\big_cross_red_med.p3d";
		class OpticsModes
		{
			class Snip
			{
				cameraDir="";
				discreteDistance[]={100};
				discreteDistanceInitIndex=0;
				//discretefov[]={0.045000002,0.011};
				discreteInitIndex=0;
				distanceZoomMax=2400;
				distanceZoomMin=300;
				memoryPointCamera="opticView";
				modelOptics[]=
				{
					"z\MET\addons\weapons\scopes\big_cross_red_med.p3d"
				};
				opticsDisablePeripherialVision=1;
				opticsDisplayName="WFOV";
				opticsFlare=1;
				opticsID=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.02;
				opticsZoomMax=0.0625;
				opticsZoomInit=0.0625;
				useModelOptics=1;
				visionMode[]=
				{
					"Normal",
					"NVG",
					"TI"
				};
			};
			class Iron: Snip
			{
				opticsID=2;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"",
					""
				};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				discreteDistance[]={200};
				discreteDistanceInitIndex=0;
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				directionName="Konec hlavne";
				effectName="RifleAssaultCloud";
				positionName="Usti hlavne";
			};
		};
	};
	class Metal_E5S_fried: JLTS_E5S
	{
		baseWeapon="Metal_E5S_fried";
		displayName="$STR_JLTS_names_E5SFried";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
        scopeArsenal=1;
        scopeCurator=1;
		picture="\MRC\JLTS\weapons\E5S\data\ui\E5S_fried_ui_ca.paa";
		muzzles[]=
		{
			"this"
		};
		magazines[]={};
		JLTS_isFried=1;
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx.wss",
			0.56234097,
			1,
			10
		};
	};
	/*=========================================================================================
    ===========================================================================================
    ================================ RG-4D =====================================================
    ===========================================================================================
    =========================================================================================*/
	class Pistol_Base_F;
	class hgun_P07_F: Pistol_Base_F
	{
		class WeaponSlotsInfo;
	};
	class Metal_RG4D: hgun_P07_F
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="Metal_RG4D_fried";
		JLTS_repairTime=20;
		author="MrClock";
		displayName="[CIS] RG-4D";
		descriptionShort="$STR_JLTS_descs_BlasterPistol";
		scope=2;
		baseWeapon="Metal_RG4D";
		picture="\MRC\JLTS\weapons\RG4D\data\ui\RG4D_ui_ca.paa";
		model="\MRC\JLTS\weapons\RG4D\RG4D.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\RG4D\data\RG4D_co.paa"
		};
		magazines[]=
		{
			"Metal_RG4D_Mag"
		};
		magazineWell[]={};
		fireLightDiffuse[]={1,0,0};
		drySound[]=
		{
			"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",
			5,
			1,
			10
		};
		muzzles[]=
		{
			"this"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"z\MET\addons\cis_faction\hand_weapons\sounds\rg4d.ogg",
					3,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			reloadTime=0.12;
			dispersion=0.001;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=20;
			class CowsSlot
			{
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]=
				{
					"JLTS_DC17SA_flashlight"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				iconPosition[]={0.23999999,0.34999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
		weaponInfoType="RscOptics_nightstalker";
		modelOptics="z\MET\addons\weapons\scopes\big_cross_red_easy.p3d";
		class OpticModes
		{
			class Scope
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex=1;
				distanceZoomMin=100;
				distanceZoomMax=1000;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal",
					"NVG",
					"Ti"
				};
				thermalMode[]={5,6};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
			};
		};
	};
	class Metal_RG4D_fried: Metal_RG4D
	{
		JLTS_isFried=1;
		baseWeapon="Metal_RG4D_fried";
		displayName="$STR_JLTS_names_RG4DFried";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		picture="\MRC\JLTS\weapons\RG4D\data\ui\RG4D_fried_ui_ca.paa";
		magazines[]={};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx.wss",
			0.56234097,
			1,
			10
		};
	};
	/*=========================================================================================
    ===========================================================================================
    ================================ SB-B3 ====================================================
    ===========================================================================================
    =========================================================================================*/
	class Metal_SBB3: arifle_MX_Base_F
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="Metal_SBB3_fried";
		JLTS_repairTime=25;
		author="MrClock";
		scope=2;
		displayName="[CIS] SBB3";
		descriptionShort="$STR_JLTS_descs_BlasterScatter";
		picture="\MRC\JLTS\weapons\SBB3\data\ui\SBB3_ui_ca.paa";
		model="\MRC\JLTS\weapons\SBB3\SBB3.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"illum"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\SBB3\data\SBB3_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\SBB3\anims\SBB3_handanim.rtm"
		};
		magazines[]=
		{
			"Metal_SBB3_Mag"
		};
		magazineWell[]={};
		modes[]=
		{
			"Single"
		};
		recoil="JLTS_recoil_SBB3";
		fireLightDiffuse[]={1,0,0};
		drySound[]=
		{
			"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",
			5,
			1,
			10
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\Indecisive_Armoury_Sounds\CIS\SBB3.ogg",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\CIS\SBB3.ogg",
					1,
					1.015,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\CIS\SBB3.ogg",
					1,
					0.98500001,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\CIS\SBB3.ogg",
					1,
					1.01,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\CIS\SBB3.ogg",
					1,
					0.995,
					1800
				};
				soundBegin[]=
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
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\CIS\SBB3.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			reloadTime=0.25;
			dispersion=0.00073;
			minRange=1;
			minRangeProbab=0.5;
			midRange=30;
			midRangeProbab=0.7;
			maxRange=60;
			maxRangeProbab=0.3;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\MRC\JLTS\weapons\SBB3\sounds\SBB3_fire.wss",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.096000001;
			dispersion=0.00073000003;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class fullauto_medium: FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\MRC\JLTS\weapons\SBB3\sounds\SBB3_fire.wss",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			dispersion=0.00073000003;
			showToPlayer=0;
			burst=3;
			aiBurstTerminable=1;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		class single_medium_optics1: Single
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\MRC\JLTS\weapons\SBB3\sounds\SBB3_fire.wss",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			dispersion=0.00073;
			requiredOpticType=1;
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.7;
			maxRange=650;
			maxRangeProbab=0.2;
			aiRateOfFire=2;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\MRC\JLTS\weapons\SBB3\sounds\SBB3_fire.wss",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			dispersion=0.001;
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.2;
			midRange=550;
			midRangeProbab=0.69999999;
			maxRange=800;
			maxRangeProbab=0.050000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=800;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=77;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				directionName="Konec hlavne";
				effectName="RifleAssaultCloud";
				positionName="Usti hlavne";
			};
		};
	};
	class Metal_SBB3_fried: Metal_SBB3
	{
		JLTS_isFried=1;
		baseWeapon="Metal_SBB3_fried";
		displayName="$STR_JLTS_names_SBB3Fried";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		picture="\MRC\JLTS\weapons\SBB3\data\ui\SBB3_fried_ui_ca.paa";
		muzzles[]=
		{
			"this"
		};
		magazines[]={};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx.wss",
			0.56234097,
			1,
			10
		};
	};
	/*=========================================================================================
    ===========================================================================================
    ================================ E-60R ====================================================
    ===========================================================================================
    =========================================================================================*/
	class launch_RPG32_F;
	class Metal_E60R_AT: launch_RPG32_F
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		JLTS_friedItem="";
		author="MrClock";
		scope=2;
		displayName="$STR_JLTS_names_E60R";
		descriptionShort="$STR_JLTS_descs_PortableMissileLauncher";
		picture="\MRC\JLTS\weapons\E60R\data\ui\E60R_ui_ca.paa";
		uiPicture="MRC\JLTS\weapons\E60R\data\ui\E60R_ui_ca.paa";
		model="\MRC\JLTS\weapons\E60R\E60R.p3d";
		modelSpecial="";
		canLock=1;
		ace_overpressure_angle=45;
		ace_overpressure_damage=0.69999999;
		ace_overpressure_priority=1;
		ace_overpressure_range=10;
		ace_reloadlaunchers_enabled=1;
		ace_javelin_enabled=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\E60R\anims\E60R_handanim.rtm"
		};
		hiddenSelections[]=
		{
			"camo1",
			"illum"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\E60R\data\E60R_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
		};
		magazines[]=
		{
			"Metal_E60R_HEAT"
		};
		magazineWell[]={};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=154;
		};
	};
	class 3AS_PLX1_F;
	class Metal_E60R_AA: 3AS_PLX1_F
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		JLTS_friedItem="";
		author="MrClock";
		scope=2;
		displayName="E60R AA";
		descriptionShort="$STR_JLTS_descs_PortableMissileLauncher";
		picture="\MRC\JLTS\weapons\E60R\data\ui\E60R_ui_ca.paa";
		uiPicture="MRC\JLTS\weapons\E60R\data\ui\E60R_ui_ca.paa";
		model="\MRC\JLTS\weapons\E60R\E60R.p3d";
		modelSpecial="";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\E60R\anims\E60R_handanim.rtm"
		};
		hiddenSelections[]=
		{
			"camo1",
			"illum"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\E60R\data\E60R_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
		};
		magazines[]=
		{
			"Metal_E60R_AA_MAG"
		};
		magazineWell[]={};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=154;
		};
	};
	/*=========================================================================================
    ===========================================================================================
    ================================ EPL-2 ====================================================
    ===========================================================================================
    =========================================================================================*/
	class JLTS_EPL2;
	class Metal_CIS_EPL2: JLTS_EPL2
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		JLTS_friedItem="";
		author="MrClock";
		scope=2;
		displayName="[CIS] EPL-2";
		descriptionShort="$STR_JLTS_descs_EMPL";
		magazines[]=
		{
			"MET_AT_Grenade_CIS",
			"MET_Clust_Grenade_shell_CIS",
			"MET_HE_Grenade_CIS"
		};
		magazineWell[]={};
		modes[]=
		{
			"Single"
		};
		memoryPointCamera="eye";
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"MRC\JLTS\weapons\EPL2\sounds\EPL2_fire",
					1,
					1,
					3000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.25;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			dispersion=0.00086999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"MRC\JLTS\weapons\EPL2\sounds\EPL2_fire",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.096000001;
			dispersion=0.00086999999;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class fullauto_medium: FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"MRC\JLTS\weapons\EPL2\sounds\EPL2_fire",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			showToPlayer=0;
			burst=3;
			aiBurstTerminable=1;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		class single_medium_optics1: Single
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"MRC\JLTS\weapons\EPL2\sounds\EPL2_fire",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"MRC\JLTS\weapons\EPL2\sounds\EPL2_fire",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			requiredOpticType=2;
			showToPlayer=0;
			minRange=100;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.60000002;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=700;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=110;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
	};
	
};
class CfgMagazines
{
	class 30Rnd_65x39_caseless_mag;
	class 100Rnd_65x39_caseless_mag;
	class 16Rnd_9x21_Mag;
	class Metal_E5_Mag: 30Rnd_65x39_caseless_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		author="MrClock";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_r.paa";
		model="\MRC\JLTS\weapons\E5\E5_mag.p3d";
		count=60;
		displayName="[CIS] E5 Mag";
		descriptionShort="$STR_JLTS_descs_E5_mag";
		displayNameShort="$STR_JLTS_snames_EnergyCellStandard";
		ammo="MET_blasterbolt_low_Red";
		tracersEvery=1;
		mass=10;
	};
	class Metal_E5_BX_Mag: 30Rnd_65x39_caseless_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		author="MrClock";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_r.paa";
		model="\MRC\JLTS\weapons\E5\E5_mag.p3d";
		count=40;
		displayName="[CIS] E5 BX Mag";
		descriptionShort="$STR_JLTS_descs_E5_mag";
		displayNameShort="$STR_JLTS_snames_EnergyCellStandard";
		ammo="MET_blasterbolt_Red";
		tracersEvery=1;
		mass=10;
	};
	class Metal_E5C_Mag: 100Rnd_65x39_caseless_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		author="MrClock";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_box_r.paa";
		model="\MRC\JLTS\weapons\e5c\e5c_mag.p3d";
		count=200;
		displayName="[CIS] E5C Mag";
		displayNameShort="$STR_JLTS_snames_EnergyCellStandard";
		descriptionShort="$STR_JLTS_descs_E5C_mag";
		ammo="MET_blasterbolt_Red";
		tracersEvery=1;
		mass=50;
	};
	class Metal_E5S_Mag: 30Rnd_65x39_caseless_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		author="MrClock";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_sniper_r.paa";
		model="\MRC\JLTS\weapons\E5S\E5S_mag.p3d";
		count=20;
		displayName="[CIS] E5S Mag";
		displayNameShort="$STR_JLTS_snames_EnergyCellHigh";
		descriptionShort="$STR_JLTS_descs_E5S_mag";
		ammo="MET_blasterbolt_dmr_Red";
		tracersEvery=1;
		mass=20;
	};
	class Metal_RG4D_Mag: 16Rnd_9x21_Mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		author="MrClock";
		modelSpecial="";
		modelSpecialIsProxy=0;
		displayName="[CIS] RG-4D Mag";
		displayNameShort="$STR_JLTS_snames_EnergyCellLow";
		model="\MRC\JLTS\weapons\RG4D\RG4D_mag.p3d";
		picture="\3AS\3AS_Weapons\Data\UI\3as_pistol_r.paa";
		count=30;
		ammo="MET_blasterbolt_br_Red";
		descriptionShort="$STR_JLTS_descs_RG4D_mag";
		tracersEvery=1;
	};
	class Metal_SBB3_Mag: 30Rnd_65x39_caseless_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		author="MrClock";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_pellets_r.paa";
		model="\MRC\JLTS\weapons\Core\stun_mag.p3d";
		count=25;
		displayName="[CIS] SBB3 Mag";
		displayNameShort="$STR_JLTS_snames_EnergyCellLow";
		descriptionShort="$STR_JLTS_descs_SBB3_mag";
		ammo="MET_pellet_red";
		tracersEvery=1;
	};
	class 3AS_JLTS_MK39_AA;
	class Metal_E60R_HEAT: 3AS_JLTS_MK39_AA
	{
		displayname="E60R HEAT";
		picture="\3AS\3AS_Weapons\Data\UI\3as_rocket_at.paa";
		ammo="Metal_E60R_HEAT_Rocket";
		count=1;
		mass=50;
		initSpeed=40;
	};
	class Metal_E60R_AA_MAG: 3AS_JLTS_MK39_AA
	{
		displayName="E60R AA";
		picture="\3AS\3AS_Weapons\Data\UI\3as_rocket_aa.paa";
		ammo = "Metal_E60R_AA_Rocket";
		count=1;
		mass=40;
		initSpeed=40;
	};
	class MET_AT_Grenade;
	class MET_AT_Grenade_CIS: MET_AT_Grenade
	{
		author="Hazmat";
		count=6;
		displayName="[CIS] HEAT Grenade";
		displayNameShort="[CIS] HEAT Grenades";
		ammo="MET_HEAT_LauncherGrenade_CIS";
		model="\MRC\JLTS\weapons\EPL2\EPL2_mag.p3d";
		mass=10;
	};
	class MET_Clust_Grenade_shell;
	class MET_Clust_Grenade_shell_CIS: MET_Clust_Grenade_shell
	{
		author="Hazmat";
		count=3;
		displayName="[CIS] Cluster Grenade";
		displayNameShort="[CIS] Cluster Grenades";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_proto.paa";
		ammo="MET_40HE_ClusterShot_CIS";
		model="\MRC\JLTS\weapons\EPL2\EPL2_mag.p3d";
		mass=10;
	};
	class MET_HE_Grenade;
	class MET_HE_Grenade_CIS: MET_HE_Grenade
	{
		author="Hazmat";
		count=6;
		displayName="[CIS] HE Grenade";
		displayNameShort="[CIS] HE Grenades";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_he.paa";
		descriptionShort="Impact grenade";
		ammo="MET_HE_LauncherGrenade_CIS";
		model="\MRC\JLTS\weapons\EPL2\EPL2_mag.p3d";
		mass=10;
	};
};