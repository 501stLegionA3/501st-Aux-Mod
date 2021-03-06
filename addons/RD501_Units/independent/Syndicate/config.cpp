#include "../../config_macros.hpp"

#include "../../../RD501_main/config_macros.hpp"

class CfgPatches
{
	class macro_patch_name(syndicate)
	{
		addonRootClass=macro_patch_name(units);
		requiredAddons[]=
		{
			macro_patch_name(units)
		};
		requiredVersion=0.1;
		units[]={
			macro_new_unit_class(syndicate,rifleman),
			macro_new_unit_class(syndicate,heavy),
			macro_new_unit_class(syndicate,grenadier),
			macro_new_unit_class(syndicate,at),
			macro_new_unit_class(syndicate,marksman),
			macro_new_unit_class(syndicate,medic),
			macro_new_unit_class(syndicate,commander)
		
		};
		weapons[]=
		{			
		};
	};
};
class CfgVehicles
{
    class B_GEN_Soldier_F;
	class B_GEN_Commander_F;
    class macro_new_unit_class(syndicate,rifleman): B_GEN_Soldier_F
    {
        displayName = "Syndicate Rifleman";
		author = "RD501";
		scope = 2;
		side=2;
		backpack="OPTRE_ILCS_Rucksack_Black";
		faction = macro_ind_faction
		editorSubcategory = macro_editor_cat(syndicate)
		uniformClass="U_B_GEN_Soldier_F";
		cost = 4

		weapons[]=
		{
			"RD501_DC_15c",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"RD501_DC_15c",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"RD501_10mw_x30_mag",
			"RD501_10mw_x30_mag",
			"RD501_10mw_x30_mag",
			"RD501_10mw_x30_mag",
			"RD501_10mw_x30_mag"
		};
		respawnMagazines[]=
		{
			"RD501_10mw_x30_mag",
			"RD501_10mw_x30_mag",
			"RD501_10mw_x30_mag",
			"RD501_10mw_x30_mag",
			"RD501_10mw_x30_mag"
		};
		linkeditems[]=
		{
			"V_TacVest_gen_F",
			//"H_HelmetO_ViperSP_ghex_F",
			"3as_CIS_Light_helmet",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_droid_comlink",
		};
		respawnlinkeditems[]=
		{
			"V_TacVest_gen_F",
			//"H_HelmetO_ViperSP_ghex_F",
			"3as_CIS_Light_helmet",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_droid_comlink",
		};
		items[]={
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_tourniquet",
			"ACE_splint",
			"RD501_Painkiller"
		};
		respawnItems[]={
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_tourniquet",
			"ACE_splint",
			"RD501_Painkiller"
		};
    };
class macro_new_unit_class(syndicate,heavy): B_GEN_Soldier_F
    {
        displayName = "Syndicate Heavy";
		author = "RD501";
		scope = 2;
		side=2;
		backpack="OPTRE_ILCS_Rucksack_Black";
		faction = macro_ind_faction
		editorSubcategory = macro_editor_cat(syndicate)
		uniformClass="U_B_GEN_Soldier_F";
		cost = 4

		weapons[]=
		{
			"JLTS_E5C",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_E5C",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag"
		};
		respawnMagazines[]=
		{
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag",
			"JLTS_E5C_mag"
		};
		linkeditems[]=
		{
			"V_TacVest_gen_F",
			//"H_HelmetO_ViperSP_ghex_F",
			"3as_CIS_Light_helmet",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_droid_comlink",
		};
		respawnlinkeditems[]=
		{
			"V_TacVest_gen_F",
			//"H_HelmetO_ViperSP_ghex_F",
			"3as_CIS_Light_helmet",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_droid_comlink",
		};
		items[]={
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_tourniquet",
			"ACE_splint",
			"RD501_Painkiller"
		};
		respawnItems[]={
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_tourniquet",
			"ACE_splint",
			"RD501_Painkiller"
		};
    };
class macro_new_unit_class(syndicate,at): B_GEN_Soldier_F
    {
        displayName = "Syndicate Anti-Tank";
		author = "RD501";
		scope = 2;
		side=2;
		backpack="OPTRE_ILCS_Rucksack_Black";
		faction = macro_ind_faction
		editorSubcategory = macro_editor_cat(syndicate)
		uniformClass="U_B_GEN_Soldier_F";
		cost = 4

		weapons[]=
		{
			"JLTS_E5",
			"RD501_launcher_RPS4",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_E5",
			"RD501_launcher_RPS4",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"RD501_rps4he_x1_mag",
			"RD501_rps4he_x1_mag",
			"RD501_rps4he_x1_mag",
			"RD501_rps4heat_x1_mag"
		};
		respawnMagazines[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"JLTS_E5_mag",
			"RD501_rps4he_x1_mag",
			"RD501_rps4he_x1_mag",
			"RD501_rps4he_x1_mag",
			"RD501_rps4heat_x1_mag"
		};
		linkeditems[]=
		{
			"V_TacVest_gen_F",
			//"H_HelmetO_ViperSP_ghex_F",
			"3as_CIS_Light_helmet",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_droid_comlink",
		};
		respawnlinkeditems[]=
		{
			"V_TacVest_gen_F",
			//"H_HelmetO_ViperSP_ghex_F",
			"3as_CIS_Light_helmet",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_droid_comlink",
		};
		items[]={
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_tourniquet",
			"ACE_splint",
			"RD501_Painkiller"
		};
		respawnItems[]={
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_tourniquet",
			"ACE_splint",
			"RD501_Painkiller"
		};
    };
class macro_new_unit_class(syndicate,grenadier): B_GEN_Soldier_F
    {
        displayName = "Syndicate Grenadier";
		author = "RD501";
		scope = 2;
		side=2;
		backpack="OPTRE_ILCS_Rucksack_Black";
		faction = macro_ind_faction
		editorSubcategory = macro_editor_cat(syndicate)
		uniformClass="U_B_GEN_Soldier_F";
		cost = 4

		weapons[]=
		{
			"RD501_DC_r15gl",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"RD501_DC_r15gl",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"RD501_10mw_x30_mag",
			"RD501_10mw_x30_mag",
			"RD501_10mw_x30_mag",
			"RD501_10mw_x30_mag",
			"RD501_10mw_x30_mag",
			"RD501_UGL_HE_x3_mag",
			"RD501_UGL_HE_x3_mag"
		};
		respawnMagazines[]=
		{
			"RD501_10mw_x30_mag",
			"RD501_10mw_x30_mag",
			"RD501_10mw_x30_mag",
			"RD501_10mw_x30_mag",
			"RD501_10mw_x30_mag",
			"RD501_UGL_HE_x3_mag",
			"RD501_UGL_HE_x3_mag"
		};
		linkeditems[]=
		{
			"V_TacVest_gen_F",
			//"H_HelmetO_ViperSP_ghex_F",
			"3as_CIS_Light_helmet",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_droid_comlink",
		};
		respawnlinkeditems[]=
		{
			"V_TacVest_gen_F",
			//"H_HelmetO_ViperSP_ghex_F",
			"3as_CIS_Light_helmet",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_droid_comlink",
		};
		items[]={
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_tourniquet",
			"ACE_splint",
			"RD501_Painkiller"
		};
		respawnItems[]={
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_tourniquet",
			"ACE_splint",
			"RD501_Painkiller"
		};
	};
class macro_new_unit_class(syndicate,marksman): B_GEN_Commander_F
    {
        displayName = "Syndicate Marksman";
		author = "RD501";
		scope = 2;
		side=2;
		backpack="RD501_JLTS_Clone__invis_LR_attachment";
		faction = macro_ind_faction
		editorSubcategory = macro_editor_cat(syndicate)
		uniformClass="U_B_GEN_Commander_F";
		cost = 4

		weapons[]=
		{
			"RD501_valken38x",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"RD501_valken38x",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"RD501_30mw_x10_mag",
			"RD501_30mw_x10_mag",
			"RD501_30mw_x10_mag",
			"RD501_30mw_x10_mag",
			"RD501_30mw_x10_mag"
		};
		respawnMagazines[]=
		{
			"RD501_30mw_x10_mag",
			"RD501_30mw_x10_mag",
			"RD501_30mw_x10_mag",
			"RD501_30mw_x10_mag",
			"RD501_30mw_x10_mag"
		};
		linkeditems[]=
		{
			"V_TacVest_gen_F",
			//"H_HelmetO_ViperSP_ghex_F",
			"H_Watchcap_blk",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_droid_comlink",
		};
		respawnlinkeditems[]=
		{
			"V_TacVest_gen_F",
			//"H_HelmetO_ViperSP_ghex_F",
			"H_Watchcap_blk",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_droid_comlink",
		};
		items[]={
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_tourniquet",
			"ACE_splint",
			"RD501_Painkiller"
		};
		respawnItems[]={
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_tourniquet",
			"ACE_splint",
			"RD501_Painkiller"
		};
    };
class macro_new_unit_class(syndicate,medic): B_GEN_Soldier_F
    {
        displayName = "Syndicate Medic";
		author = "RD501";
		scope = 2;
		side=2;
		backpack="OPTRE_ILCS_Rucksack_Medical";
		faction = macro_ind_faction
		editorSubcategory = macro_editor_cat(syndicate)
		uniformClass="U_B_GEN_Soldier_F";
		cost = 4

		weapons[]=
		{
			"RD501_DC_r15s",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"RD501_DC_r15s",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"RD501_5mw_x60_mag",
			"RD501_5mw_x60_mag",
			"RD501_5mw_x60_mag",
			"RD501_5mw_x60_mag",
			"RD501_5mw_x60_mag"
		};
		respawnMagazines[]=
		{
			"RD501_5mw_x60_mag",
			"RD501_5mw_x60_mag",
			"RD501_5mw_x60_mag",
			"RD501_5mw_x60_mag",
			"RD501_5mw_x60_mag"
		};
		linkeditems[]=
		{
			"V_TacVest_gen_F",
			//"H_HelmetO_ViperSP_ghex_F",
			"3as_CIS_Medic_helmet",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_droid_comlink",
		};
		respawnlinkeditems[]=
		{
			"V_TacVest_gen_F",
			//"H_HelmetO_ViperSP_ghex_F",
			"3as_CIS_Medic_helmet",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_droid_comlink",
		};
		items[]={
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_splint",
			"ACE_splint",
			"ACE_splint",
			"ACE_splint",
			"RD501_Painkiller",
			"RD501_Painkiller",
			"RD501_Painkiller",
			"RD501_Painkiller",
			"RD501_Painkiller",
			"ACE_plasmaIV",
			"ACE_plasmaIV",
			"ACE_plasmaIV",
			"ACE_plasmaIV",
			"ACE_plasmaIV"
		};
		respawnItems[]={
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_splint",
			"ACE_splint",
			"ACE_splint",
			"ACE_splint",
			"RD501_Painkiller",
			"RD501_Painkiller",
			"RD501_Painkiller",
			"RD501_Painkiller",
			"RD501_Painkiller",
			"ACE_plasmaIV",
			"ACE_plasmaIV",
			"ACE_plasmaIV",
			"ACE_plasmaIV",
			"ACE_plasmaIV"
		};
    };
class macro_new_unit_class(syndicate,commander): B_GEN_Commander_F
    {
        displayName = "Syndicate Commander";
		author = "RD501";
		scope = 2;
		side=2;
		backpack="RD501_JLTS_Clone__invis_LR_attachment";
		faction = macro_ind_faction
		editorSubcategory = macro_editor_cat(syndicate)
		uniformClass="U_B_GEN_Commander_F";
		cost = 4

		weapons[]=
		{
			"RD501_DC_15a",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"RD501_DC_15a",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"RD501_20mwdp_x20_mag",
			"RD501_20mwdp_x20_mag",
			"RD501_20mwdp_x20_mag",
			"RD501_20mwdp_x20_mag",
			"RD501_20mwdp_x20_mag"
		};
		respawnMagazines[]=
		{
			"RD501_20mwdp_x20_mag",
			"RD501_20mwdp_x20_mag",
			"RD501_20mwdp_x20_mag",
			"RD501_20mwdp_x20_mag",
			"RD501_20mwdp_x20_mag"
		};
		linkeditems[]=
		{
			"V_TacVest_gen_F",
			//"H_HelmetO_ViperSP_ghex_F",
			"H_Beret_gen_F",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_droid_comlink",
		};
		respawnlinkeditems[]=
		{
			"V_TacVest_gen_F",
			//"H_HelmetO_ViperSP_ghex_F",
			"H_Beret_gen_F",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"JLTS_droid_comlink",
		};
		items[]={
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_tourniquet",
			"ACE_splint",
			"RD501_Painkiller"
		};
		respawnItems[]={
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_tourniquet",
			"ACE_splint",
			"RD501_Painkiller"
		};
    };
};