
class CfgPatches
{
	class MET_CIS_Emplacement_Weapons
	{
		weapons[] = 
		{
			"MET_CIS_mortar_60mm"
		};
		magazines[] =
		{
			"MET_CIS_20Rnd_82mm_Mo_shells"
		};
		units[] ={};
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
class CfgAmmo
{
    class FlareCore;
    class Sh_155mm_AMOS;
    class Sh_82mm_AMOS;
	class SubmunitionBase;
	class ShellBase;
    class SmokeShellArty;
	class B_20mm;
	//------------------------------- MET 60mm Shells
	class MET_CIS_60mm_HE_Mortar: Sh_82mm_AMOS
	{
		displayname="CIS HE Mortar Shell";
		effectFly="MET_MortarBoltGlow_Pink_Fly";
		hit=80;
		indirectHit=35;
		indirectHitRange=5;
		cost=200;
		muzzleEffect="";
		warheadName="HE";
		dangerRadiusHit=400;
		suppressionRadiusHit=75;
		typicalSpeed=800;
		caliber=8;
		deflecting=0;
		explosive=0.6;
        ace_frag_metal = 75;  // Amount of metal being fragmented (grams)
        ace_frag_charge = 25;  // Amount of explosive filler (grams)
        ace_frag_gurney_c = 2000;  // Gurney velocity constant for explosive type
        ace_frag_gurney_k = 1/2;  // Gurney velocity shape factor
        ace_frag_classes[] = {"ACE_frag_medium_HD","ACE_frag_small_HD","ACE_frag_small"};  // Type of fragments
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled)
        ace_frag_force = 1;  // (Optional) Force fragmentation system (0-disabled, 1-enabled)
    
		/*class CamShakeExplode
		{
			power=16.4;
			duration=1.8;
			frequency=20;
			distance=216.44299;
		};
		class CamShakeHit
		{
			power=82;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=3.0092199;
			duration=1.8;
			frequency=20;
			distance=72.4431;
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};*/
	};
};
class CfgMagazines
{
    class VehicleMagazine;
	class MET_CIS_20Rnd_82mm_Mo_shells: VehicleMagazine
	{
		author="$STR_3as_Studio";
		displayName="HE Mortar Shells";
		displayNameShort="HE";
		displayNameMFDFormat="HE";
		scope=2;
		count=20;
		ammo="MET_CIS_60mm_HE_Mortar";
		nameSound="heat";
		muzzleImpulseFactor[]={0,0};
		initSpeed=200;
		ace_arsenal_hide=-1;
		ace_artillerytables_airFriction=-9.9999997e-005;
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class MGun;
class LMG_M200;
class CfgWeapons
{
    class CannonCore;
	class MET_CIS_mortar_60mm: CannonCore
	{
		scope=1;
		displayname="[16th] CIS Mortar 60MW";
		nameSound="CannonCore";
		cursor="mortar";
		cursorAim="EmptyCursor";
		sounds[]=
		{
			"StandardSound"
		};
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[]=
			{
				"3AS_Mortar_SoundSet"
			};
		};
		reloadSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar.wss",
			1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_magazine_Mortar.wss",
			1,
			1,
			20
		};
		soundServo[]=
		{
			"",
			9.9999997e-005,
			1
		};
		reloadTime=1.8;
		magazineReloadTime=5;
		autoReload=1;
		canLock=0;
		magazines[]=
		{
			"MET_CIS_20Rnd_82mm_Mo_shells",
			"MET_20Rnd_82mm_Mo_Flare_white",
			"MET_20Rnd_82mm_Mo_Flare_Red",
			"MET_20Rnd_82mm_Mo_Smoke_white"
		};
		ballisticsComputer=2;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MortarFired";
				positionName="Usti Hlavne";
				directionName="Konec Hlavne";
			};
		};
		modes[]=
		{
			"Single1",
			"Single2",
			"Single3",
			"Burst1",
			"Burst2",
			"Burst3"
		};
		class Single1: Mode_SemiAuto
		{
			displayName="$STR_A3_mortar_82mm_Single10";
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_Mortar_SoundSet"
				};
			};
			reloadSound[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar.wss",
				1,
				1,
				20
			};
			reloadTime=1;
			artilleryDispersion=1.9;
			artilleryCharge=0.25;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class Single2: Single1
		{
			displayName="$STR_A3_mortar_82mm_Single20";
			artilleryCharge=0.50;
		};
		class Single3: Single1
		{
			displayName="$STR_A3_mortar_82mm_Single30";
			artilleryCharge=0.75;
		};
		class Burst1: Mode_Burst
		{
			showToPlayer=0;
			displayName="$STR_A3_mortar_82mm_Burst10";
			burst=4;
			aiBurstTerminable=1;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",
					1.2589254,
					1,
					250
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",
					1.2589254,
					1,
					250
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
			reloadSound[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar.wss",
				1,
				1,
				20
			};
			soundServo[]=
			{
				"",
				9.9999997e-005,
				1
			};
			soundBurst=0;
			reloadTime=1.8;
			artilleryDispersion=2.2;
			artilleryCharge=0.34999999;
			minRange=60;
			minRangeProbab=0.5;
			midRange=290;
			midRangeProbab=0.69999999;
			maxRange=665;
			maxRangeProbab=0.5;
		};
		class Burst2: Burst1
		{
			showToPlayer=0;
			displayName="$STR_A3_mortar_82mm_Burst20";
			artilleryCharge=0.69999999;
			minRange=230;
			minRangeProbab=0.40000001;
			midRange=1175;
			midRangeProbab=0.60000002;
			maxRange=2660;
			maxRangeProbab=0.40000001;
		};
		class Burst3: Burst1
		{
			showToPlayer=0;
			displayName="$STR_A3_mortar_82mm_Burst30";
			artilleryCharge=1;
			minRange=540;
			minRangeProbab=0.30000001;
			midRange=2355;
			midRangeProbab=0.40000001;
			maxRange=5500;
			maxRangeProbab=0.30000001;
		};
	};
};