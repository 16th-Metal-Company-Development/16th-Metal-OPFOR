class CfgPatches
{
	class cis_16
	{	
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_characters_F",
		};
		author="DJ, LCDR Wolf, Ronin, JLTS Team";
		Name="cis_16";
	};
};
class CfgEditorCategories
{
	class metal_cis_EdCat_co // Category class, you point to it in editorCategory property
	{
		displayName = "[16th] CIS"; // Name visible in the list
	};
};

class cfgFactionClasses
{
	class metal_company_cis
	{
		icon="";
		flag="";
		displayName="[16th] CIS";
		side=0;
		priority=1;
	};
};

class CfgEditorSubcategories
{
	class METCIS_Turrets
	{
		displayName="Turrets";
	};
};

/*class CfgVehicleClasses
{

};*/
class CfgMarkerColors
{
	class Default
	{
		color[]={0,0,0,1};
		scope=1;
	};
	class CISBlue: Default
	{
		name="CIS Blue";
		color[]={0.137,0.101,0.541,1};
		scope=2;
	};
};