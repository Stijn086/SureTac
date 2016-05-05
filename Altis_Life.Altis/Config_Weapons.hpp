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
            { "optic_ACO_grn_smg", "", 2500, 250 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_TRG20_F", "", 25000, 2500 },
            { "arifle_Katiba_F", "", 30000, 5000 },
            { "srifle_DMR_01_F", "", 50000, -1 },
            { "arifle_SDAR_F", "", 20000, 7500 },
            { "optic_ACO_grn", "", 3500, 350 },
            { "optic_Holosight", "", 3600, 275 },
            { "optic_Hamr", "", 7500, -1 },
            { "acc_flashlight", "", 1000, 100 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300 },
            { "30Rnd_65x39_caseless_green", "", 275 },
            { "10Rnd_762x54_Mag", "", 500 },
            { "20Rnd_556x45_UW_mag", "", 125 }
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
        level[] = { "life_coplevel", "SCALAR", -1, "FUCK OFF YOUR NOT EVEN A COP!" };
        items[] = {
            { "hgun_P07_snds_F", "Stun Pistol", 2000, 0 },
            { "hgun_PDW2000_ACO_F", "", 3000, 0 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
        };
    };

    class cop_patrol {
        name = "Altis Patrol Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "Your not an Officer!" };
        items[] = {
            { "arifle_MXC_F", "", 35000, 7500 },
            { "SMG_02_ACO_F", "", 30000, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "MineDetector", "", 1000, 500 },
            { "acc_flashlight", "", 750, 100 },
			{ "optic_Hamr", "", 15000, 0 },
			{ "optic_Arco_grn", "", 15000, 0 },
			{ "optic_MRCO", "", 15000, 0 },
			{ "optic_Holosight", "", 15000, 0 },
			{ "optic_Arco", "", 15000, 0 },
			{ "muzzle_snds_L", "", 2750, -1 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "", 130 },
            { "30Rnd_9x21_Mag", "", 250 }
        };
    };

    class cop_corporal {
        name = "Altis Corporal Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "Your not a corporal!" };
        items[] = {
            { "SMG_02_ACO_F", "", 15000, 0 },
            { "arifle_MXC_F", "", 30000, 0 },
			{ "arifle_MX_F", "", 30000, 0 },
			{ "arifle_MXM_F", "", 15000, 0 },
            { "HandGrenade_Stone", "Flashbang", 1700, 0 },
			{ "optic_Hamr", "", 15000, 0 },
			{ "optic_Arco_grn", "", 15000, 0 },
			{ "optic_MRCO", "", 15000, 0 },
			{ "optic_Holosight", "", 15000, 0 },
			{ "optic_Arco", "", 15000, 0 },
			{ "bipod_01_F_blk", "", 15000, 0 },
			{ "muzzle_snds_L", "", 2750, 0 }
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 25 },
            { "30Rnd_65x39_caseless_mag", "", 100, 0 }
        };
    };

	class cop_sergeant {
		name = "Altis Sergeant Officer Shop";
		side = "cop";
		license = "";
		level[] = { "life_coplevel", "SCALAR", 3, "Your not a Sergeant!" };
		items[] = {
			{ "SMG_02_ACO_F", "", 15000, 0 },
			{ "arifle_MXC_F", "", 30000, 0 },
			{ "arifle_MX_F", "", 30000, 0 },
			{ "arifle_MX_SW_F", "", 30000, 0 },
			{ "arifle_MXM__F", "", 15000, 0 },
			{ "HandGrenade_Stone", "Flashbang", 1700, 0 },
			{ "optic_Arco", "", 2500, 0 },
			{ "optic_Hamr", "", 15000, 0 },
			{ "optic_Arco_grn", "", 15000, 0 },
			{ "optic_SOS", "", 2500, 0 },
			{ "optic_MRCO", "", 15000, 0 },
			{ "optic_Holosight", "", 15000, 0 },
			{ "optic_Arco", "", 15000, 0 },
			{ "optic_KHS_blk", "", 15000, 0 },
			{ "optic_AMS", "", 15000, 0 },
			{ "bipod_01_F_blk", "", 15000, 0 },
			{ "muzzle_snds_L", "", 2750, 0 }
		};
		mags[] = {
			{ "30Rnd_9x21_Mag", "", 25 },
			{ "30Rnd_65x39_caseless_mag", "", 100, 0 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 150, 0 },
			{ "100Rnd_65x39_caseless_mag", "", 1000, 0 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 1200, 0 }
		};
	};

	class cop_lieutenant {
		name = "Altis lieutenant Shop";
		side = "cop";
		license = "";
		level[] = { "life_coplevel", "SCALAR", 4, "Your not a lieutenant!" };
		items[] = {
			{ "SMG_02_ACO_F", "", 15000, 0 },
			{ "arifle_MXC_F", "", 30000, 0 },
			{ "arifle_MX_F", "", 30000, 0 },
			{ "arifle_MXC_Black_F", "", 30000, 0 },
			{ "arifle_MX_Black_F", "", 30000, 0 },
			{ "arifle_MXM__Black_F", "", 15000, 0 },
			{ "arifle_MX_SW_Black_F", "", 15000, 0 },
			{ "srifle_DMR_03_F", "", 15000, 0 },
			{ "srifle_DMR_03_khaki", "", 15000, 0 },
			{ "srifle_EBR_F", "", 15000, 0 },
			{ "srifle_DMR_05_blk_F", "", 15000, 0 },
			{ "HandGrenade_Stone", "Flashbang", 1700, 0 },
			{ "optic_Arco", "", 2500, 0 },
			{ "muzzle_snds_H", "", 2750, 0 },
			{ "muzzle_snds_L", "", 2750, 0 }
			{ "optic_Arco", "", 2500, 0 },
			{ "optic_Hamr", "", 15000, 0 },
			{ "optic_Arco_grn", "", 15000, 0 },
			{ "optic_DMS", "", 15000, 0 },
			{ "optic_SOS", "", 2500, 0 },
			{ "optic_MRCO", "", 15000, 0 },
			{ "optic_Holosight", "", 15000, 0 },
			{ "optic_Arco", "", 15000, 0 },
			{ "optic_LRPS", "", 15000, 0 },
			{ "optic_KHS_blk", "", 15000, 0 },
			{ "optic_KHS_old", "", 15000, 0 },
			{ "optic_KHS_hex", "", 15000, 0 },
			{ "optic_AMS", "", 15000, 0 },
			{ "optic_AMS_khk", "", 15000, 0 },
			{ "bipod_01_F_blk", "", 15000, 0 },
			{ "bipod_01_f_mtp", "", 15000, 0 },
			{ "bipod_01_f_snd", "", 15000, 0 }
		};
		mags[] = {
			{ "30Rnd_9x21_Mag", "", 25 },
			{ "30Rnd_65x39_caseless_mag", "", 100, 0 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 100, 0 },
			{ "100Rnd_65x39_caseless_mag", "", 100, 0 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 100, 0 },
			{ "20Rnd_762x51_Mag", "", 500, 0},
			{ "10Rnd_9.3x64_DMR_05_Mag", "", 500, 0}
		};
	};

	class cop_Captain {
		name = "Altis Captain Shop";
		side = "cop";
		license = "";
		level[] = { "life_coplevel", "SCALAR", 5, "Your not a Captain!" };
		items[] = {
			{ "SMG_02_ACO_F", "", 15000, 0 },
			{ "arifle_MXC_F", "", 30000, 0 },
			{ "arifle_MX_F", "", 30000, 0 },
			{ "arifle_MXC_Black_F", "", 30000, 0 },
			{ "arifle_MX_Black_F", "", 30000, 0 },
			{ "arifle_MXM__Black_F", "", 15000, 0 },
			{ "arifle_MX_SW_Black_F", "", 15000, 0 }
			{ "srifle_DMR_03_F", "", 15000, 0 },
			{ "srifle_DMR_03_khaki", "", 15000, 0 },
			{ "srifle_EBR_F", "", 15000, 0 },
			{ "srifle_DMR_05_blk_F", "", 15000, 0 },
			{ "HandGrenade_Stone", "Flashbang", 1700, 0 },
			{ "optic_Arco", "", 2500, 0 },
			{ "optic_Hamr", "", 15000, 0 },
			{ "optic_Arco_grn", "", 15000, 0 },
			{ "optic_DMS", "", 15000, 0 },
			{ "optic_SOS", "", 2500, 0 },
			{ "optic_MRCO", "", 15000, 0 },
			{ "optic_Holosight", "", 15000, 0 },
			{ "optic_Arco", "", 15000, 0 },
			{ "optic_LRPS", "", 15000, 0 },
			{ "optic_KHS_blk", "", 15000, 0 },
			{ "optic_KHS_old", "", 15000, 0 },
			{ "optic_KHS_hex", "", 15000, 0 },
			{ "optic_AMS", "", 15000, 0 },
			{ "optic_AMS_khk", "", 15000, 0 },
			{ "bipod_01_F_blk", "", 15000, 0 },
			{ "bipod_01_f_mtp", "", 15000, 0 },
			{ "bipod_01_f_snd", "", 15000, 0 },
			{ "HandGrenade_Stone", "Flashbang", 1700, 0 },
			{ "muzzle_snds_H", "", 2750, 0 },
			{ "muzzle_snds_L", "", 2750, 0 }
		};
		mags[] = {
			{ "30Rnd_9x21_Mag", "", 25 },
			{ "30Rnd_65x39_caseless_mag", "", 100, 0 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 100, 0 },
			{ "100Rnd_65x39_caseless_mag", "", 100, 0 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 100, 0 },
			{ "20Rnd_762x51_Mag", "", 500, 0 },
			{ "10Rnd_9.3x64_DMR_05_Mag", "", 500, 0 }
		};
	};

	class cop_Commissioner {
		name = "Altis Commissioner Shop";
		side = "cop";
		license = "";
		level[] = { "life_coplevel", "SCALAR", 6, "Your Not The Commissioner!" };
		items[] = {
			{ "SMG_02_ACO_F", "", 15000, 0 },
			{ "arifle_MXC_F", "", 30000, 0 },
			{ "arifle_MX_F", "", 30000, 0 },
			{ "arifle_MXC_Black_F", "", 30000, 0 },
			{ "arifle_MX_Black_F", "", 30000, 0 },
			{ "arifle_MXM__Black_F", "", 15000, 0 },
			{ "arifle_MX_SW_Black_F", "", 15000, 0 }
			{ "srifle_DMR_03_F", "", 15000, 0 },
			{ "srifle_DMR_03_khaki", "", 15000, 0 },
			{ "srifle_EBR_F", "", 15000, 0 },
			{ "srifle_DMR_05_blk_F", "", 15000, 0 },
			{ "MMG_02_Black_F", "", 15000, 0 },
			{ "srifle_DM_04_F", "", 15000, 0 },
			{ "srifle_DMR_02_F", "", 15000, 0 },
			{ "srifle_DMR_02_camo_F", "", 15000, 0 },
			{ "HandGrenade_Stone", "Flashbang", 1700, 0 },
			{ "optic_Arco", "", 2500, 0 },
			{ "optic_Hamr", "", 15000, 0 },
			{ "optic_Arco_grn", "", 15000, 0 },
			{ "optic_DMS", "", 15000, 0 },
			{ "optic_SOS", "", 2500, 0 },
			{ "optic_MRCO", "", 15000, 0 },
			{ "optic_Holosight", "", 15000, 0 },
			{ "optic_Arco", "", 15000, 0 },
			{ "optic_LRPS", "", 15000, 0 },
			{ "optic_KHS_blk", "", 15000, 0 },
			{ "optic_KHS_old", "", 15000, 0 },
			{ "optic_KHS_hex", "", 15000, 0 },
			{ "optic_AMS", "", 15000, 0 },
			{ "optic_AMS_khk", "", 15000, 0 },
			{ "bipod_01_F_blk", "", 15000, 0 },
			{ "bipod_01_f_mtp", "", 15000, 0 },
			{ "bipod_01_f_snd", "", 15000, 0 },
			{ "HandGrenade_Stone", "Flashbang", 1700, 0 },
			{ "muzzle_snds_H", "", 2750, 0 },
			{ "muzzle_snds_L", "", 2750, 0 }
		};
		mags[] = {
			{ "30Rnd_9x21_Mag", "", 25 },
			{ "30Rnd_65x39_caseless_mag", "", 100, 0 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 100, 0 },
			{ "100Rnd_65x39_caseless_mag", "", 100, 0 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 100, 0 },
			{ "20Rnd_762x51_Mag", "", 500, 0 },
			{ "150Rnd_93x64_Mag", "", 100, 0 },
			{ "10Rnd_127.54_Mag", "", 100, 0 },
			{ "10RND_338_Mag", "", 500, 0 },
			{ "10Rnd_9.3x64_DMR_05_Mag", "", 500, 0 }
		};
	};
		};
		mags[] = {
			{ "9Rnd_45ACP_Mag", "", 200 },
			{ "30Rnd_9x21_Mag", "", 60 },
			{ "30Rnd_65x39_caseless_mag", "", 100, -1 }
		};
	};

	class cop_SWAT {
		name = "Altis SWAT Shop";
		side = "cop";
		license = "cSWAT";
		level[] = { "", "", -1, "Your Not A S.W.A.T Member!" };
		items[] = {
			{ "arifle_MXC_Black_F", "", 30000, 0 },
			{ "arifle_MX_Black_F", "", 30000, 0 },
			{ "arifle_MX_SW_Black_F", "", 30000, 0 },
			{ "arifle_MXM_Black_F", "", 15000, 0 },
			{ "srifle_GMG_LRPS_F", "", 30000, 0 },
			{ "HandGrenade_Stone", "Flashbang", 1700, 0 },
			{ "optic_Arco", "", 2500, 0 },
			{ "muzzle_snds_H", "", 2750, 0 },
			{ "muzzle_snds_L", "", 2750, 0 }
			{ "optic_Arco", "", 2500, 0 },
			{ "optic_Hamr", "", 15000, 0 },
			{ "optic_Arco_grn", "", 15000, 0 },
			{ "optic_DMS", "", 15000, 0 },
			{ "optic_SOS", "", 2500, 0 },
			{ "optic_MRCO", "", 15000, 0 },
			{ "optic_Holosight", "", 15000, 0 },
			{ "optic_Arco", "", 15000, 0 },
			{ "optic_LRPS", "", 15000, 0 },
			{ "optic_KHS_blk", "", 15000, 0 },
			{ "optic_KHS_old", "", 15000, 0 },
			{ "optic_KHS_hex", "", 15000, 0 },
			{ "optic_AMS", "", 15000, 0 },
			{ "optic_AMS_khk", "", 15000, 0 },
			{ "bipod_01_F_blk", "", 15000, 0 },
			{ "bipod_01_f_mtp", "", 15000, 0 },
			{ "bipod_01_f_snd", "", 15000, 0 }
		};
		mags[] = {
			{ "30Rnd_9x21_Mag", "", 25 },
			{ "30Rnd_65x39_caseless_mag", "", 100, -1 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 150, 0 },
			{ "100Rnd_65x39_caseless_mag", "", 1000, 0 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 1200, 0 },
			{ "5Rnd_127x108_mag", "", 1000, 0 },
			{ "5Rnd_127x108_APDS_mag", "", 1500, 0 }
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
