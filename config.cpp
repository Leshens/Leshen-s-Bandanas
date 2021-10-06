class CfgPatches
{
	class leshens_bandanas
	{
		author="Leshen";
		name="Leshen's Bandanas";
		version = "1.14.5";
		units[]=
		{
			"lb_skull",
			"lb_s_skull",
			"lb_ghost",
			"lb_s_ghost",
			"lb_b_punish",
			"lb_ice",
			"lb_s_ice",
			"lb_caveira",
			"lb_l_caveira",
			"lb_s_caveira",
			"lb_desert",
			"lb_mtp",
			"lb_rtiger",
			"lb_s_rtiger",
			"lb_tiger",
			"lb_woodland",
			"lb_bkit",
			"lb_fkit",
			"lb_rkit",
			"lb_mch",
			"lb_red",
			"lb_blue",
			"lb_blc",
			"lb_cat",
			"lb_ally",
			"lb_lgbt",
			"lb_pans",
			"lb_trans",
			"lb_car",
			"lb_bi",
			"lb_mrpt",
			"lb_zops",
			"lb_s_zops",
			"lb_bghost",
			"lb_s_bghost",
			"lb_gas",
			"lb_folk",
			"lb_mar",
			"lb_pol",
			"lb_sco",
			"lb_duty_patch",
			"lb_freedom_patch",
			"lb_looners_patch",
			"lb_mercs_patch",
			"lb_space_patch",
			"lb_huzar_patch",
			"lb_pol_patch",
			"lb_polf_patch",
			"lb_para_patch",
			"lb_wolf_patch",
			"lb_alien_patch",
			"lb_clear_patch",
			"lb_renegades_patch",
			"lb_bandits_patch",
			"lb_pru_patch",
		};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Characters_F","A3_Weapons_F_Exp"};
		weapons[]=
		{
			"lb_akmSlav",
			"lb_akmSlav_FL"
		};
	};
};

class CfgWeapons
{
	class ItemCore;
	class HeadgearItem;
		#include "cap.hpp"
		#include "beanie.hpp"			
		#include "akmSLAV.hpp"
};
class CfgGlasses
{
	class G_Bandanna_aviator;
	class G_Bandanna_sport;
	class G_Bandanna_shades;
	class G_Bandanna_blk;
	class G_Bandanna_tan;
	
		class lb_sco: G_Bandanna_blk
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (Scottish)";
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_sco.paa"
		};
	};
	
		class lb_pol: G_Bandanna_blk
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (Polish)";
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_pol.paa"
		};
	};
	
		class lb_mar: G_Bandanna_blk
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (Polish Space Marine)";
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_mar.paa"
		};
	};

	class lb_folk: G_Bandanna_blk
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (Folk Flowers)";
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_folk.paa"
		};
	};


	class lb_gas: G_Bandanna_blk
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (Gasmask)";
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_gas.paa"
		};
	};

	class lb_bghost: G_Bandanna_blk
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (Ghost Black)";
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_bghost.paa"
		};
	};
	class lb_s_bghost: G_Bandanna_shades
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (Ghost Black/Shades)";
		hiddenSelections[]=
		{

			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_bghost.paa",
			"\a3\characters_f\heads\glasses\data\JoeyX_blue_CA.paa"
		};
	};

		class lb_s_zops: G_Bandanna_aviator
	{
		author="Leshen";
		scope=2;
		_generalMacro="lb_s_skull";
		displayName="[LB] Bandana (Zeus Ops/Aviator)";
		hiddenSelections[]=
		{

			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_zops.paa",
			"\a3\characters_f\heads\glasses\data\glass_ca.paa"
		};
	};

		class lb_zops: G_Bandanna_blk
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (Zeus Ops)";
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_zops.paa"
		};
	};

	class lb_mrpt: G_Bandanna_blk
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (Marpat)";
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_mrpt.paa"
		};
	};

	class lb_bi: G_Bandanna_blk
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (Bigender)";
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_bi.paa"
		};
	};
		class lb_car: G_Bandanna_blk
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (Carpet)";
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_car.paa"
		};
	};

		class lb_trans: G_Bandanna_blk
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (Transgender)";
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_trans.paa"
		};
	};

		class lb_pans: G_Bandanna_blk
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (Pangender)";
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_pans.paa"
		};
	};

		class lb_lgbt: G_Bandanna_blk
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (LBGT)";
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_lgbt.paa"
		};
	};

		class lb_ally: G_Bandanna_blk
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (Ally)";
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_ally.paa"
		};
	};

	class lb_cat: G_Bandanna_blk
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (Cat)";
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_cat.paa"
		};
	};

	class lb_blc: G_Bandanna_blk
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (Black)";
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_blc.paa"
		};
	};

	class lb_blue: G_Bandanna_blk
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (Blue)";
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_blue.paa"
		};
	};

	class lb_red: G_Bandanna_blk
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (Red)";
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_red.paa"
		};
	};

	class lb_mch: G_Bandanna_blk
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (MuttonChops)";
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_mch.paa"
		};
	};

		class lb_rkit: G_Bandanna_tan
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (KitchenRed)";
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_rkit.paa"
		};
	};
		class lb_bkit: G_Bandanna_tan
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (KitchenBlue)";
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_bkit.paa"
		};
	};

		class lb_fkit: G_Bandanna_tan
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (KitchenFlower)";
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_fkit.paa"
		};
	};

	class lb_woodland: G_Bandanna_blk
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_woodland.paa"
		};
	};

	class lb_tiger: G_Bandanna_blk
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (Tiger)";
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_tiger.paa"
		};
	};

	class lb_rtiger: G_Bandanna_blk
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (RedTiger)";
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_rtiger.paa"
		};
	};

	class lb_s_rtiger: G_Bandanna_aviator
	{
		author="Leshen";
		scope=2;
		_generalMacro="lb_s_rtiger";
		displayName="[LB] Bandana (RedTiger/Aviator)";
		hiddenSelections[]=
		{

			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_rtiger.paa",
			"\a3\characters_f\heads\glasses\data\glass_ca.paa"
		};
	};

	class lb_mtp: G_Bandanna_blk
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (MTP)";
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_mtp.paa"
		};
	};

	class lb_desert: G_Bandanna_blk
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (Desert)";
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_desert.paa"
		};
	};

	class lb_skull: G_Bandanna_blk
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (Skull)";
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_skull.paa"
		};
	};
	class lb_s_skull: G_Bandanna_aviator
	{
		author="Leshen";
		scope=2;
		_generalMacro="lb_s_skull";
		displayName="[LB] Bandana (Skull/Aviator)";
		hiddenSelections[]=
		{

			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_skull.paa",
			"\a3\characters_f\heads\glasses\data\glass_ca.paa"
		};
	};
	class lb_ghost: G_Bandanna_blk
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (Ghost)";
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_ghost.paa"
		};
	};
	class lb_s_ghost: G_Bandanna_shades
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (Ghost/Shades)";
		hiddenSelections[]=
		{

			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_ghost.paa",
			"\a3\characters_f\heads\glasses\data\JoeyX_blue_CA.paa"
		};
	};

	class lb_ice: G_Bandanna_blk
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (BlackIce)";
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_blcice.paa"
		};
	};
		class lb_s_ice: G_Bandanna_sport
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (BlackIce/Sport)";
		hiddenSelections[]=
		{

			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_blcice.paa",
			"\a3\characters_f\heads\glasses\data\sunglasses_sport_1_ca.paa"
		};
	};
	class lb_s_caveira: G_Bandanna_sport
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (Caveira/Sport)";
		hiddenSelections[]=
		{

			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_caveira.paa",
			"\a3\characters_f\heads\glasses\data\sunglasses_sport_5_ca.paa"
		};
	};
	class lb_caveira: G_Bandanna_blk
	{
		author="Leshen";
		scope=2;
		displayName="[LB] Bandana (Caveira)";
		hiddenSelectionsTextures[]=
		{
			"\LB\Data\lb_caveira.paa"
		};
	};
};
class CfgUnitInsignia
{
	
		class lb_duty_patch
	{
		displayName = "Duty";
		author = "Leshen";
		texture = "\LB\Patches\duty.paa";
		textureVehicle = "";
	};
	
		class lb_freedom_patch
	{
		displayName = "Freedom";
		author = "Leshen";
		texture = "\LB\Patches\freedom.paa";
		textureVehicle = "";
	};
	
		class lb_looners_patch
	{
		displayName = "Loners";
		author = "Leshen";
		texture = "\LB\Patches\looners.paa";
		textureVehicle = "";
	};
	
		class lb_mercs_patch
	{
		displayName = "Mercenaries";
		author = "Leshen";
		texture = "\LB\Patches\mercs.paa";
		textureVehicle = "";
	};
	
		class lb_space_patch
	{
		displayName = "Polish Space Marines";
		author = "Leshen";
		texture = "\LB\Patches\space.paa";
		textureVehicle = "";
	};	
	
		class lb_huzar_patch
	{
		displayName = "Huzar";
		author = "Leshen";
		texture = "\LB\Patches\huzar.paa";
		textureVehicle = "";
	};	
	
		class lb_pol_patch
	{
		displayName = "Polish";
		author = "Leshen";
		texture = "\LB\Patches\czerwona.paa";
		textureVehicle = "";
	};	
	
		class lb_polf_patch
	{
		displayName = "Polish Field";
		author = "Leshen";
		texture = "\LB\Patches\polowa.paa";
		textureVehicle = "";
	};	
	
		class lb_para_patch
	{
		displayName = "Paramedic";
		author = "Leshen";
		texture = "\LB\Patches\paramedic.paa";
		textureVehicle = "";
	};	
		class lb_wolf_patch
	{
		displayName = "Wolf";
		author = "Leshen";
		texture = "\LB\Patches\wolf.paa";
		textureVehicle = "";
	};	
		class lb_alien_patch
	{
		displayName = "Alien";
		author = "Leshen";
		texture = "\LB\Patches\alien.paa";
		textureVehicle = "";
	};
		class lb_clear_patch
	{
		displayName = "Clear Sky";
		author = "Leshen";
		texture = "\LB\Patches\Clear.paa";
		textureVehicle = "";
	};
		class lb_renegades_patch
	{
		displayName = "Renegades";
		author = "Leshen";
		texture = "\LB\Patches\Renegades.paa";
		textureVehicle = "";
	};
		class lb_bandits_patch
	{
		displayName = "Bandits";
		author = "Leshen";
		texture = "\LB\Patches\Bandits.paa";
		textureVehicle = "";
	};
		class lb_dd_patch
	{
		displayName = "Diamond Dogs";
		author = "Leshen";
		texture = "\LB\Patches\DD.paa";
		textureVehicle = "";
	};
		class lb_doge_patch
	{
		displayName = "Diamond Doge";
		author = "Leshen";
		texture = "\LB\Patches\doge.paa";
		textureVehicle = "";
	};
		class lb_wtf_patch
	{
		displayName = "WTF";
		author = "Leshen";
		texture = "\LB\Patches\wtf.paa";
		textureVehicle = "";
	};
		class lb_glb_patch
	{
		displayName = "Ghost";
		author = "Leshen";
		texture = "\LB\Patches\ghost.paa";
		textureVehicle = "";
	};
		class lb_gh2_patch
	{
		displayName = "Ghost Recon";
		author = "Leshen";
		texture = "\LB\Patches\ghost2.paa";
		textureVehicle = "";
	};
		class lb_joy_patch
	{
		displayName = "JOY";
		author = "Leshen";
		texture = "\LB\Patches\joy.paa";
		textureVehicle = "";
	};
		class lb_recon_patch
	{
		displayName = "Recon";
		author = "Leshen";
		texture = "\LB\Patches\recon.paa";
		textureVehicle = "";
	};
		class lb_soa_patch
	{
		displayName = "SoA";
		author = "Leshen";
		texture = "\LB\Patches\soa.paa";
		textureVehicle = "";
	};	
		class lb_cat_patch
	{
		displayName = "PopCat";
		author = "Leshen";
		texture = "\LB\Patches\cat.paa";
		textureVehicle = "";
	};	
		class lb_cat2_patch
	{
		displayName = "PopCat2";
		author = "Leshen";
		texture = "\LB\Patches\cat2.paa";
		textureVehicle = "";
	};	
		class lb_cow_patch
	{
		displayName = "Polish Cow";
		author = "Leshen";
		texture = "\LB\Patches\cow.paa";
		textureVehicle = "";
	};	
		class lb_gda_patch
	{         
		displayName = "Freie Stadt Danzig";
		author = "Leshen";
		texture = "\LB\Patches\gda.paa";
		textureVehicle = "";
	};	      
		class lb_pom_patch
	{         
		displayName = "Pomerelia";
		author = "Leshen";
		texture = "\LB\Patches\pom.paa";
		textureVehicle = "";
	};	      
		class lb_pru_patch
	{         
		displayName = "Prussia";
		author = "Leshen";
		texture = "\LB\Patches\pru.paa";
		textureVehicle = "";
	};	      
		class lb_teu_patch
	{
		displayName = "Order of Brothers of the German House of Saint Mary in Jerusalem";
		author = "Leshen";
		texture = "\LB\Patches\Teu.paa";
		textureVehicle = "";
	};
};