		class lb_slavCap:ItemCore
			{
				scope=2;
				author="Leshen";
				displayName="Cap (Slav)";
				picture = "\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
				model = "\A3\characters_f\Common\capb.p3d";
				hiddenSelections[] = {"camo"};
				hiddenSelectionsTextures[]={"\LB\Data\CapSlav.paa"};
				
				class ItemInfo: HeadgearItem
				{
					mass = 2;
					uniformModel = "\A3\characters_f\Common\capb.p3d";
					allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};
					modelSides[] = {6};
					hiddenSelections[] = {"camo"};
					subItems[] = {"Integrated_NVG_F"};
					
					class HitpointsProtectionInfo
					{
						class Head
						{
							hitpointName	= "HitHead";
							armor		= 10;
							passThrough	= 0.5;
						};
					};
				};
			};