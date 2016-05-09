/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 6500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 9850, -1 },
            { "hgun_ACPC2_F", "", 11500, -1 },
            { "hgun_PDW2000_F", "", 20000, -1 },
			{ "arfile_SDAR_F", "", 25000, -1 },
            { "optic_ACO_grn_smg", "", 2500, 250 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 },
			{ "20Rnd_556x45_UW_mag", "", 45 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_ACPC2_F", "", 20000 },
            { "hgun_Pistol_heavy_01_F", "", 25000 },
            { "hgun_Pistol_heavy_02_F", "", 25000 },
            { "SMG_02_F", "", 30000 },
            { "SMG_01_F", "", 30000 },
            { "arifle_TRG21_F", "", 40000 },
            { "arifle_Katiba_F", "", 60000 },
            { "arifle_Mk20_F", "", 50000 },
            { "arifle_MX_F", "", 60000 },
			{ "arifle_MX_SW_F", "", 40000 },
			{ "srifle_DMR_06_camo_F", "", 200000 },
			{ "srifle_DMR_06_olive_F", "", 200000 },
            { "srifle_GM6_F", "", 2000000 },
            { "srifle_EBR_F", "", 700000 },
			{ "srifle_DMR_04_F", "", 1500000 },
			{ "srifle_DMR_04_Tan_F", "", 1500000 },
			{ "SatchelCharge_Remote_Mag", "", 1000000 },
            { "optic_Arco", "", 6000 },
            { "optic_Aco", "", 5000 },
            { "optic_MRCO", "", 25000 },
            { "optic_DMS", "", 30000 },
            { "optic_AMS", "", 60000 },
            { "optic_SOS", "", 60000 },
			{ "optic_Holosight", "", 25000 },
			{ "optic_MRCO", "", 50000 },
			{ "optic_Hamr", "", 50000 },
			{ "optic_KHS_blk", "", 50000 },
			{ "optic_KHS_tan", "", 50000 },
			{ "optic_AMS", "", 50000 },
            { "muzzle_snds_L", "", 70000 },
            { "muzzle_snds_M", "", 70000 },
            { "muzzle_snds_H", "", 70000 },
            { "muzzle_snds_B", "", 70000 },
            { "bipod_01_F_blk", "", 60000 },
            { "bipod_02_F_blk", "", 60000 },
            { "bipod_03_F_blk", "", 60000 },
            { "acc_flashlight", "", 4000 },
            { "acc_pointer_IR", "", 6000 },
            { "FirstAidKit", "", 500 },
            { "ToolKit", "", 600 },
            { "ItemGPS", "", 100 },
            { "NVGoggles", "", 200 }
        };
        mags[] = {
            { "20Rnd_762x51_Mag", "", 40000 },
            { "9Rnd_45ACP_Mag", "", 2500 },
            { "11Rnd_45ACP_Mag", "", 2500 },
            { "6Rnd_45ACP_Cylinder", "", 2500 },
            { "30Rnd_9x21_Mag", "", 5000 },
            { "5Rnd_127x108_Mag", "", 75000 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 5000 },
            { "30Rnd_556x45_Stanag", "", 5500 },
            { "30Rnd_556x45_Stanag_Tracer_Red", "", 5000 },
            { "30Rnd_65x39_caseless_green", "", 5000 },
            { "30Rnd_556x45_Stanag", "", 5000 },
            { "30Rnd_556x45_Stanag_Tracer_Red", "", 5000 },
            { "30Rnd_65x39_caseless_mag", "", 5000 },
			{ "30Rnd_556x45_Stanag_Tracer_Red", "", 5000 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 7000 },
			{ "10Rnd_127x54_Mag", "", 70000 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1 },
            { "hgun_ACPC2_F", "", 4500, -1 },
            { "hgun_PDW2000_F", "", 9500, -1 },
            { "optic_ACO_grn_smg", "", 950, 250 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "ToolKit", "", 1250, 75 },
            { "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_sdar_F", "Taser Rifle", 20000, 7500 },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, 650 },
            { "hgun_P07_F", "", 7500, 1500 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 250, 75 },
            { "muzzle_snds_L", "", 650, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 1000, 450 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 }
        };
    };

    class cop_patrol {
        name = "Altis Patrol Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Patrol Officer Rank!" };
        items[] = {
            { "arifle_MX_F", "", 35000, 7500 },
            { "SMG_02_ACO_F", "", 30000, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "MineDetector", "", 1000, 500 },
            { "acc_flashlight", "", 750, 100 },
            { "optic_Holosight", "", 1200, 275 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "", 130 },
            { "30Rnd_9x21_Mag", "", 250 }
        };
    };

    class cop_sergeant {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "SMG_02_ACO_F", "", 15000, -1 },
            { "arifle_MXC_F", "", 30000, 5000 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100, -1 }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 500, 450 },
            { "NVGoggles", "", 1200, 980 }
        };
        mags[] = {};
    };
};
