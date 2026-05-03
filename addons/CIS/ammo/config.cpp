class CfgPatches
{
	class ammo_cis_16
	{	
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_characters_F",
            "metal_inf_weap",
			"JLTS_weapons_E5",
			"MET_VFX"
		};
		author="DJ, LCDR Wolf, Ronin, JLTS Team";
		Name="ammo_cis_16";
	};
};

class CfgAmmo
{
	class MET_blasterbolt_base;
	class ammo_Penetrator_Base;
	class RocketBase;
	class MET_slug_red: MET_blasterbolt_base
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Red.p3d";
		effectfly="MET_BlasterBoltGlow_Red_Fly";
		lightcolor[]={1,0,0};
		hit=45;
		indirectHit=0;
		explosive=0;
		indirectHitRange=0.5;
		caliber=1;
		timetolive=4;
		tracerendtime=4;
	};
	class MET_pellet_red: MET_slug_red
	{
		hit=15;
		simulationStep=9.9999997e-005;
		cartridge="";
		submunitionAmmo="MET_pellet_subminition_red";
		submunitionConeType[]=
		{
			"poissondisc",
			20
		};
		submunitionConeAngle=0.4;
		triggerSpeedCoef[]={0.85000002,1};
		triggerTime=0.001;
		cost=1;
	};
	class MET_pellet_subminition_red: MET_slug_red
	{
		hit=15;
		deflecting=2;
	};
	class E60R_HEAT_Penetrator: ammo_Penetrator_Base
	{
		hit=950;
		warheadName="HEAT";
		caliber=30;
	};
	class R_PG32V_F;
	class Metal_E60R_HEAT_Rocket: R_PG32V_F
	{
		model="\A3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HEAT55_F.p3d";
		warheadName="HEAT";
		submunitionAmmo="E60R_HEAT_Penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.1};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		hit=1500;
		indirectHit=20;
		indirectHitRange=2.5;
		explosive=1;
		cost=30;
		//coefGravity=0;
		caliber=1;
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		simulationStep=0.02;
		explosionSoundEffect="DefaultExplosion";
		explosionEffects="ATMissileExplosion";
		CraterEffects="ArtyShellCrater";
		effectsSmoke="SmokeShellWhite";
		timeToLive=24;
		airFriction=0.050000001;
		sideAirFriction=0;
		maxSpeed=345;
		typicalspeed=10;
		initTime=0.1;
		thrustTime=0;
		thrust=0;
		fuseDistance=25;
		effectsMissileInit="";
		effectsMissile="MET_MissileGlow_Pink_fly";
		whistleDist=4;
		class CamShakeExplode
		{
			power=50;
			duration=3.5;
			frequency=20;
			distance=100;
		};
		class CamShakeHit
		{
			power=110;
			duration=1.8;
			frequency=20;
			distance=20;
		};
		class CamShakeFire
		{
			power=2.78316;
			duration=1.6;
			frequency=20;
			distance=61.967701;
		};
		class CamShakePlayerFire
		{
			power=3;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class 3AS_M_MK39_AA;
	class Metal_E60R_AA_Rocket: 3AS_M_MK39_AA
	{
		hit=550;
		indirectHit=120;
		indirectHitRange=12;
		warheadName="AA";
		proximityExplosionDistance=10;
		maneuvrability=50;
		simulationStep=0.0020000001;
		trackOversteer=1;
		trackLead=0.94999999;
		aiAmmoUsageFlags=256;
		irLock=1;
		cost=1000;
		timeToLive=30;
		airFriction=0.145;
		sideAirFriction=0.1;
		maxSpeed=850;
		initTime=0.25;
		thrustTime=10;
		thrust=380;
		fuseDistance=50;
		CraterEffects="AAMissileCrater";
		explosionEffects="AAMissileExplosion";
		effectsMissileInit="";
		effectsMissile="MET_Rocket_effect_Pink_fly";
        missileLockCone = 70;
		missileKeepLockedCone = 70;
		lockTime=0.3;
	};
	class MET_HE_LauncherGrenade;
	class MET_HE_LauncherGrenade_CIS: MET_HE_LauncherGrenade
	{
		model="Indecisive_Armoury_Ammos\Data\40mm_Grenade\IDA_40mm_Grenade.p3d";
		effectfly="MET_GrenadeBlasterBoltGlow_PinkFly";
		lightcolor[]={0.941,0.443,1};
		cost = 20;
		aiAmmoUsageFlags = "64";
		allowAgainstInfantry = 1;
	};
	class MET_40_GrenadeCluster_CIS_Sub1: MET_HE_LauncherGrenade_CIS
	{
		indirectHit = 15;
		indirectHitRange = 16;
		explosionTime = 1;
		effectfly="MET_GrenadeBlasterBoltGlow_Pink_Fly";
		lightcolor[]={0.941,0.443,1};
	};
	class MET_40_GrenadeCluster_CIS_Sub2: MET_40_GrenadeCluster_CIS_Sub1
	{
		explosionTime = 1.05;
	};
	class MET_40_GrenadeCluster_CIS_Sub3: MET_40_GrenadeCluster_CIS_Sub1
	{
		explosionTime = 1.1;
	};
	class MET_40_GrenadeCluster_CIS_Sub4: MET_40_GrenadeCluster_CIS_Sub1
	{
		explosionTime = 1.15;
	};
	class MET_40_GrenadeCluster_CIS_Sub5: MET_40_GrenadeCluster_CIS_Sub1
	{
		explosionTime = 1.2;
	};
	class MET_40_GrenadeCluster_CIS_Sub6: MET_40_GrenadeCluster_CIS_Sub1
	{
		explosionTime = 1.25;
	};
	class MET_40_GrenadeCluster_CIS_Sub7: MET_40_GrenadeCluster_CIS_Sub1
	{
		explosionTime = 1.3;
	};
	class MET_40_GrenadeCluster_CIS_Sub8: MET_40_GrenadeCluster_CIS_Sub1
	{
		explosionTime = 1.35;
	};
	class MET_40_GrenadeCluster_CIS_Sub9: MET_40_GrenadeCluster_CIS_Sub1
	{
		explosionTime = 1.4;
	};
	class MET_40_GrenadeCluster_CIS_Sub10: MET_40_GrenadeCluster_CIS_Sub1
	{
		explosionTime = 1.45;
	};
	class MET_40_GrenadeCluster_CIS_Sub11: MET_40_GrenadeCluster_CIS_Sub1
	{
		explosionTime = 1.5;
	};
	class MET_40_GrenadeCluster_CIS_Sub12: MET_40_GrenadeCluster_CIS_Sub1
	{
		explosionTime = 1.55;
	};
	class MET_40HE_ClusterShot_CIS: MET_HE_LauncherGrenade
	{
		submunitionAmmo[] = {"MET_40_GrenadeCluster_CIS_Sub1",0.167,"MET_40_GrenadeCluster_CIS_Sub2",0.167,"MET_40_GrenadeCluster_CIS_Sub3",0.167,"MET_40_GrenadeCluster_CIS_Sub4",0.167,"MET_40_GrenadeCluster_CIS_Sub5",0.167,"MET_40_GrenadeCluster_CIS_Sub6",0.167,"MET_40_GrenadeCluster_CIS_Sub7",0.167,"MET_40_GrenadeCluster_CIS_Sub8",0.167,"MET_40_GrenadeCluster_CIS_Sub9",0.167,"MET_40_GrenadeCluster_CIS_Sub10",0.167,"MET_40_GrenadeCluster_CIS_Sub11",0.167,"MET_40_GrenadeCluster_CIS_Sub12",0.167};
		submunitionInitSpeed = 14;
		submunitionConeAngle = 120;
		submunitionConeAngleHorizontal = 270;
		submunitionConeType[] = {"randomupcone",12};
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0,0,0};
		submunitionAutoleveling = 1;
		submunitionDirectionType = "submunitionAutoleveling";
		effectfly="MET_GrenadeBlasterBoltLight_Pink_Clust";
		lightcolor[]={0.941,0.749,0.859};
		directionalExplosion = 1;
		triggerOnImpact = 1;
		triggerDistance = 0;
		explosionTime = -1;
		cost = 35;
		aiAmmoUsageFlags = "64";
		allowAgainstInfantry = 1;
	};
	class MET_HEAT_LauncherGrenade;
	class MET_HEAT_LauncherGrenade_CIS: MET_HEAT_LauncherGrenade
	{
		model="Indecisive_Armoury_Ammos\Data\40mm_Grenade\IDA_40mm_Grenade.p3d";
		effectfly="MET_GrenadeBlasterBoltGlow_Pink_HEAT_Fly";
		lightcolor[]={0.957,0.557,1};
		cost = 40;
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry = 0;
	};

};