class lb_slavBeanie:ItemCore
			{
				scope=2;
				author="Leshen";
				displayName="Beanie (Slav)";
				picture = "\A3\characters_f\Data\UI\icon_H_Cap_beanie_CA.paa";
				model = "\A3\characters_f\Common\woolhat.p3d";
				hiddenSelections[] = {"camo"};
				hiddenSelectionsTextures[]={"\LB\Data\beanie.paa"};
				
				class ItemInfo: HeadgearItem
				{
					mass = 2;
					uniformModel = "\A3\characters_f\Common\woolhat.p3d";
					allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};
					modelSides[] = {6};
					hiddenSelections[] = {"camo"};
					subItems[] = {"Integrated_NVG_F"};
					
					class HitpointsProtectionInfo
					{
						class Head
						{
							hitpointName	= "HitHead";
							armor		= 20;
							passThrough	= 0.5;
						};
					};
				};
			};