class arifle_AKM_base_F;

	class lb_akmSlav: arifle_AKM_base_F
	{
		author="Leshen";
		_generalMacro="lb_akmSlav";
		baseWeapon="lb_akmSlav";
		scope=2;
		displayName="AKM (slav)";
		picture="\A3\Weapons_F_Exp\Rifles\AKM\Data\UI\arifle_AKM_F_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\akm\akm.paa",
			"\LB\Data\akm\akm_wood.paa",
			"\LB\Data\akm\akm_steel_mag.paa"
		};
	};
	class lb_akmSlav_FL: lb_akmSlav
	{
		author="Leshen";
		_generalMacro="lb_akmSlav_FL";
		baseWeapon="lb_akmSlav";
		scope=1;
		model="\A3\Weapons_F_Exp\Rifles\AKM\AKM_flashlight_F.p3d";
		class FlashLight
		{
			color[]={180,156,120};
			ambient[]={0.89999998,0.77999997,0.60000002};
			intensity=20;
			size=1;
			innerAngle=20;
			outerAngle=80;
			coneFadeCoef=5;
			position="flash dir";
			direction="flash";
			useFlare=1;
			flareSize=1.4;
			flareMaxDistance=100;
			dayLight=0;
			class Attenuation
			{
				start=0.5;
				constant=0;
				linear=0;
				quadratic=1.1;
				hardLimitStart=20;
				hardLimitEnd=30;
			};
			scale[]={0};
		};
	};
