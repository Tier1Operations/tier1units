class CfgPatches
{
	class axy_g_groups
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_Common",
			"A3_Characters_F_Heads"
		};
		version="0.2";
		versionStr="0.2";
		versionDesc="Axyl's Guerilla Groups";
		versionAr[]={0,2,0};
		author[]=
		{
			"axyl - craig.foley@gmail.com"
		};
	};
};
class CfgGroups
{
	class East
	{
		side=0;
		name="OPFOR";
		class Guerilla
		{
			name="FIA (CTB Custom)";
			class Infantry
			{
				name="Infantry";
				class IRG_InfSquad
				{
					name="Rifle Squad";
					side=0;
					faction="OPF_G_F";
					class Unit0
					{
						side=0;
						vehicle="O_G_soldier_SL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="O_G_soldier_TL_F";
						rank="SERGEANT";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=0;
						vehicle="O_G_soldier_AR_F";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="O_G_soldier_LAT_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=0;
						vehicle="O_G_Soldier_A_F";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};
					class Unit5
					{
						side=0;
						vehicle="O_G_medic_F";
						rank="CORPORAL";
						position[]={15,-15,0};
					};
					class Unit6
					{
						side=0;
						vehicle="O_G_soldier_F";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7
					{
						side=0;
						vehicle="O_G_soldier_F";
						rank="PRIVATE";
						position[]={20,-20,0};
					};
				};
				class IRG_InfSquad_Weapons
				{
					name="Weapons Squad";
					side=0;
					faction="OPF_G_F";
					class Unit0
					{
						side=0;
						vehicle="O_G_soldier_SL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="O_G_soldier_AR_F";
						rank="SERGEANT";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=0;
						vehicle="O_G_soldier_AR_F";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="O_G_soldier_LAT_F";
						rank="SERGEANT";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=0;
						vehicle="O_G_soldier_LAT_F";
						rank="CORPORAL";
						position[]={-10,-10,0};
					};
					class Unit6
					{
						side=0;
						vehicle="O_G_soldier_A_F";
						rank="PRIVATE";
						position[]={15,-15,0};
					};
					class Unit5
					{
						side=0;
						vehicle="O_G_soldier_F";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7
					{
						side=0;
						vehicle="O_G_medic_F";
						rank="PRIVATE";
						position[]={20,-20,0};
					};
				};
				class IRG_InfTeam
				{
					name="Fire Team";
					side=0;
					faction="OPF_G_F";
					class Unit0
					{
						side=0;
						vehicle="O_G_Soldier_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="O_G_Soldier_AR_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=0;
						vehicle="O_G_Soldier_GL_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="O_G_Soldier_LAT_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class IRG_InfTeam_AT
				{
					name="Anti-armor Team";
					side=0;
					faction="OPF_G_F";
					class Unit0
					{
						side=0;
						vehicle="O_G_Soldier_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="O_G_Soldier_LAT_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=0;
						vehicle="O_G_Soldier_LAT_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="O_G_soldier_A_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class IRG_InfTeam_AA
				{
					name="Air-defense Team";
					side=0;
					faction="OPF_G_F";
					class Unit0
					{
						side=0;
						vehicle="O_G_Soldier_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="O_G_Soldier_AR_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=0;
						vehicle="O_G_Soldier_LAT_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="O_G_soldier_A_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class IRG_InfSentry
				{
					name="Sentry";
					side=0;
					faction="OPF_G_F";
					class Unit0
					{
						side=0;
						vehicle="O_G_Soldier_GL_F";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="O_G_Soldier_F";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
				};
				class IRG_ReconSentry
				{
					name="Recon Sentry";
					side=0;
					faction="OPF_G_F";
					class Unit0
					{
						side=0;
						vehicle="O_G_Soldier_F";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="O_G_Soldier_F";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
				};
				class IRG_SniperTeam_M
				{
					name="Sniper Team";
					side=0;
					faction="OPF_G_F";
					class Unit0
					{
						side=0;
						vehicle="O_G_Soldier_M_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="O_G_Soldier_M_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
				};
			};
			class Support
			{
				name="Support Infantry";
				class IRG_Support_CLS
				{
					name="Support Team (CLS)";
					side=0;
					faction="OPF_G_F";
					class Unit0
					{
						side=0;
						vehicle="O_G_Soldier_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="O_G_Soldier_AR_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=0;
						vehicle="O_G_medic_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="O_G_medic_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class IRG_Support_EOD
				{
					name="Support Team (EOD)";
					side=0;
					faction="OPF_G_F";
					class Unit0
					{
						side=0;
						vehicle="O_G_Soldier_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="O_G_soldier_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=0;
						vehicle="O_G_engineer_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="O_G_engineer_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class IRG_Support_ENG
				{
					name="Support Team (Engineer)";
					side=0;
					faction="OPF_G_F";
					class Unit0
					{
						side=0;
						vehicle="O_G_Soldier_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="O_G_soldier_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=0;
						vehicle="O_G_engineer_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="O_G_engineer_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
			};
			class Motorized_MTP
			{
				name="Motorized Infantry";
				class IRG_MotInf_Team
				{
					name="Motorized Patrol";
					side=0;
					faction="OPF_G_F";
					class Unit0
					{
						side=0;
						vehicle="O_G_Soldier_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="O_G_Offroad_01_F";
						rank="SERGEANT";
						position[]={0,-10,0};
					};
					class Unit2
					{
						side=0;
						vehicle="O_G_Soldier_AR_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="O_G_Soldier_LAT_F";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Unit4
					{
						side=0;
						vehicle="O_G_medic_F";
						rank="CORPORAL";
						position[]={10,-10,0};
					};
					class Unit5
					{
						side=0;
						vehicle="O_G_Soldier_F";
						rank="CORPORAL";
						position[]={-10,-10,0};
					};
				};
				class IRG_Technicals
				{
					name="Technicals";
					side=0;
					faction="OPF_G_F";
					class Unit0
					{
						side=0;
						vehicle="O_G_Offroad_01_armed_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="O_G_Offroad_01_armed_F";
						rank="SERGEANT";
						position[]={10,-10,0};
					};
					class Unit2
					{
						side=0;
						vehicle="O_G_Offroad_01_armed_F";
						rank="CORPORAL";
						position[]={-10,-10,0};
					};
				};
			};
		};
	};
	class Indep
	{
		side=2;
		name="Independent";
		class Guerilla
		{
			name="FIA (CTB Custom)";
			class Infantry
			{
				name="Infantry";
				class IRG_InfSquad
				{
					name="Rifle Squad";
					side=2;
					faction="IND_G_F";
					class Unit0
					{
						side=2;
						vehicle="I_G_soldier_SL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="I_G_soldier_TL_F";
						rank="SERGEANT";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=2;
						vehicle="I_G_soldier_AR_F";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=2;
						vehicle="I_G_soldier_LAT_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=2;
						vehicle="I_G_Soldier_A_F";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};
					class Unit5
					{
						side=2;
						vehicle="I_G_medic_F";
						rank="CORPORAL";
						position[]={15,-15,0};
					};
					class Unit6
					{
						side=2;
						vehicle="I_G_soldier_F";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7
					{
						side=2;
						vehicle="I_G_soldier_F";
						rank="PRIVATE";
						position[]={20,-20,0};
					};
				};
				class IRG_InfSquad_Weapons
				{
					name="Weapons Squad";
					side=2;
					faction="IND_G_F";
					class Unit0
					{
						side=2;
						vehicle="I_G_soldier_SL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="I_G_soldier_AR_F";
						rank="SERGEANT";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=2;
						vehicle="I_G_soldier_AR_F";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=2;
						vehicle="I_G_soldier_LAT_F";
						rank="SERGEANT";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=2;
						vehicle="I_G_soldier_LAT_F";
						rank="CORPORAL";
						position[]={-10,-10,0};
					};
					class Unit6
					{
						side=2;
						vehicle="I_G_soldier_A_F";
						rank="PRIVATE";
						position[]={15,-15,0};
					};
					class Unit5
					{
						side=2;
						vehicle="I_G_soldier_F";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7
					{
						side=2;
						vehicle="I_G_medic_F";
						rank="PRIVATE";
						position[]={20,-20,0};
					};
				};
				class IRG_InfTeam
				{
					name="Fire Team";
					side=2;
					faction="IND_G_F";
					class Unit0
					{
						side=2;
						vehicle="I_G_Soldier_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="I_G_Soldier_AR_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=2;
						vehicle="I_G_Soldier_GL_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=2;
						vehicle="I_G_Soldier_LAT_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class IRG_InfTeam_AT
				{
					name="Anti-armor Team";
					side=2;
					faction="IND_G_F";
					class Unit0
					{
						side=2;
						vehicle="I_G_Soldier_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="I_G_Soldier_LAT_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=2;
						vehicle="I_G_Soldier_LAT_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=2;
						vehicle="I_G_soldier_A_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class IRG_InfTeam_AA
				{
					name="Air-defense Team";
					side=2;
					faction="IND_G_F";
					class Unit0
					{
						side=2;
						vehicle="I_G_Soldier_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="I_G_Soldier_AR_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=2;
						vehicle="I_G_Soldier_LAT_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=2;
						vehicle="I_G_soldier_A_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class IRG_InfSentry
				{
					name="Sentry";
					side=2;
					faction="IND_G_F";
					class Unit0
					{
						side=2;
						vehicle="I_G_Soldier_GL_F";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="I_G_Soldier_F";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
				};
				class IRG_ReconSentry
				{
					name="Recon Sentry";
					side=2;
					faction="IND_G_F";
					class Unit0
					{
						side=2;
						vehicle="I_G_Soldier_F";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="I_G_Soldier_F";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
				};
				class IRG_SniperTeam_M
				{
					name="Sniper Team";
					side=2;
					faction="IND_G_F";
					class Unit0
					{
						side=2;
						vehicle="I_G_Soldier_M_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="I_G_Soldier_M_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
				};
			};
			class Support
			{
				name="Support Infantry";
				class IRG_Support_CLS
				{
					name="Support Team (CLS)";
					side=2;
					faction="IND_G_F";
					class Unit0
					{
						side=2;
						vehicle="I_G_Soldier_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="I_G_Soldier_AR_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=2;
						vehicle="I_G_medic_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=2;
						vehicle="I_G_medic_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class IRG_Support_EOD
				{
					name="Support Team (EOD)";
					side=2;
					faction="IND_G_F";
					class Unit0
					{
						side=2;
						vehicle="I_G_Soldier_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="I_G_soldier_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=2;
						vehicle="I_G_engineer_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=2;
						vehicle="I_G_engineer_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class IRG_Support_ENG
				{
					name="Support Team (Engineer)";
					side=2;
					faction="IND_G_F";
					class Unit0
					{
						side=2;
						vehicle="I_G_Soldier_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="I_G_soldier_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=2;
						vehicle="I_G_engineer_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=2;
						vehicle="I_G_engineer_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
			};
			class Motorized_MTP
			{
				name="Motorized Infantry";
				class IRG_MotInf_Team
				{
					name="Motorized Patrol";
					side=2;
					faction="IND_G_F";
					class Unit0
					{
						side=2;
						vehicle="I_G_Soldier_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="I_G_Offroad_01_F";
						rank="SERGEANT";
						position[]={0,-10,0};
					};
					class Unit2
					{
						side=2;
						vehicle="I_G_Soldier_AR_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit3
					{
						side=2;
						vehicle="I_G_Soldier_LAT_F";
						rank="CORPORAL";
						position[]={-5,-5,0};
					};
					class Unit4
					{
						side=2;
						vehicle="I_G_medic_F";
						rank="CORPORAL";
						position[]={10,-10,0};
					};
					class Unit5
					{
						side=2;
						vehicle="I_G_Soldier_F";
						rank="CORPORAL";
						position[]={-10,-10,0};
					};
				};
				class IRG_Technicals
				{
					name="Technicals";
					side=2;
					faction="IND_G_F";
					class Unit0
					{
						side=2;
						vehicle="I_G_Offroad_01_armed_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="I_G_Offroad_01_armed_F";
						rank="SERGEANT";
						position[]={10,-10,0};
					};
					class Unit2
					{
						side=2;
						vehicle="I_G_Offroad_01_armed_F";
						rank="CORPORAL";
						position[]={-10,-10,0};
					};
				};
			};
		};
	};
};
class CfgVehicles
{
	class I_G_Soldier_base_F;
	class I_G_Soldier_F: I_G_Soldier_base_F
	{
		scope=2;
	};
	class I_G_officer_F: I_G_Soldier_base_F
	{
		scope=2;
	};
	class I_G_Soldier_GL_F: I_G_Soldier_base_F
	{
		scope=2;
	};
	class I_G_Soldier_SL_F: I_G_Soldier_base_F
	{
		scope=2;
	};
	class I_G_Soldier_TL_F: I_G_Soldier_base_F
	{
		scope=2;
	};
	class I_G_Soldier_M_F: I_G_Soldier_base_F
	{
		scope=2;
	};
	class I_G_Soldier_AR_F: I_G_Soldier_base_F
	{
		scope=2;
	};
	class I_G_Soldier_A_F: I_G_Soldier_base_F
	{
		scope=2;
	};
	class I_G_Soldier_LAT_F: I_G_Soldier_base_F
	{
		scope=2;
	};
	class O_G_Soldier_F: I_G_Soldier_F
	{
		scope=2;
	};
	class O_G_officer_F: I_G_officer_F
	{
		scope=2;
	};
	class O_G_Soldier_GL_F: I_G_Soldier_GL_F
	{
		scope=2;
	};
	class O_G_Soldier_SL_F: I_G_Soldier_SL_F
	{
		scope=2;
	};
	class O_G_Soldier_TL_F: I_G_Soldier_TL_F
	{
		scope=2;
	};
	class O_G_Soldier_M_F: I_G_Soldier_M_F
	{
		scope=2;
	};
	class O_G_Soldier_AR_F: I_G_Soldier_AR_F
	{
		scope=2;
	};
	class O_G_Soldier_A_F: I_G_Soldier_A_F
	{
		scope=2;
	};
	class O_G_Soldier_LAT_F: I_G_Soldier_LAT_F
	{
		scope=2;
	};
	class Offroad_01_base_F;
	class I_G_Offroad_01_F: Offroad_01_base_F
	{
		scope=2;
	};
	class O_G_Offroad_01_F: I_G_Offroad_01_F
	{
		scope=2;
	};
	class Offroad_01_armed_base_F;
	class I_G_Offroad_01_armed_F: Offroad_01_armed_base_F
	{
		scope=2;
	};
	class O_G_Offroad_01_armed_F: I_G_Offroad_01_armed_F
	{
		scope=2;
	};
};
