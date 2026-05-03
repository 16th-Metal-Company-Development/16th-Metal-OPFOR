class CfgWeapons
{
    class Uniform_Base;
	class UniformItem;

	class MET_REB_Pathfinder : Uniform_Base
	{
		author = "Chet";
		scope = 1;
		displayName = "[REB] Pathfinder Fatigues";
		picture = "\ls\core\addons\main\data\ui\ls_logo_ca.paa";
		model = "\ls\core\addons\characters\uniforms\pathfinder\ls_uniform_pathfinder.p3d";

		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "MET_REB_Pathfinder_Base";
			containerClass = "Supply40";
			mass = 40;
            type = 801;
            scope = 1;
		};
	};

    class MET_REB_Pathfinder_R : Uniform_Base 
    {
        author = "Chet";
		scope = 1;
		displayName = "[REB] Pathfinder Fatigues (Rolled)";
		picture = "\ls\core\addons\main\data\ui\ls_logo_ca.paa";
		model = "\ls\core\addons\characters\uniforms\pathfinder\ls_uniform_pathfinder_r.p3d";

		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "MET_REB_Pathfinder_Base_R";
			containerClass = "Supply40";
			mass = 40;
            type = 801;
            scope = 1;
		};
    };

    class MET_REB_Pathfinder_Brown : MET_REB_Pathfinder 
    {
        displayName = "[REB] Pathfinder Fatigues (L. Brown)";

		class ItemInfo : ItemInfo
		{
			uniformClass = "MET_REB_Pathfinder_Brown_Base";
		};
    };
    
    class MET_REB_Pathfinder_Brown_R : MET_REB_Pathfinder_R 
    {
        displayName = "[REB] Pathfinder Fatigues (L. Brown, Rolled)";

		class ItemInfo : ItemInfo
		{
			uniformClass = "MET_REB_Pathfinder_Brown_Base_R";
		};
    };

    class MET_REB_Pathfinder_Navy : MET_REB_Pathfinder 
    {
        displayName = "[REB] Pathfinder Fatigues (Navy)";

		class ItemInfo : ItemInfo
		{
			uniformClass = "MET_REB_Pathfinder_Navy_Base";
		};
    };

    class MET_REB_Pathfinder_Navy_R : MET_REB_Pathfinder_R 
    {
        displayName = "[REB] Pathfinder Fatigues (Navy, Rolled)";
		
		class ItemInfo : ItemInfo
		{
			uniformClass = "MET_REB_Pathfinder_Navy_Base_R";
		};
    };

    class MET_REB_Pathfinder_Navy_Alt : MET_REB_Pathfinder 
    {
        displayName = "[REB] Pathfinder Fatigues (Navy Alt)";

		class ItemInfo : ItemInfo
		{
			uniformClass = "MET_REB_Pathfinder_Navy_Alt_Base";
		};
    };
    
    class MET_REB_Pathfinder_Navy_Alt_R : MET_REB_Pathfinder_R 
    {
        displayName = "[REB] Pathfinder Fatigues (Navy Alt, Rolled)";

		class ItemInfo : ItemInfo
		{
			uniformClass = "MET_REB_Pathfinder_Navy_Alt_Base_R";
		};
    };
};