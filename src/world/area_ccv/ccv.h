#pragma once

enum {
    AB_CCV_Unused_0             = AreaByte(0),
    AB_CCV_Unused_1             = AreaByte(1),
    AB_CCV_Unused_2             = AreaByte(2),
    AB_CCV_Unused_3             = AreaByte(3),
    AB_CCV_Unused_4             = AreaByte(4),
    AB_CCV_Unused_5             = AreaByte(5),
    AB_CCV_Unused_6             = AreaByte(6),
    AB_CCV_Unused_7             = AreaByte(7),
    AB_CCV_Unused_8             = AreaByte(8),
    AB_CCV_Unused_9             = AreaByte(9),
    AB_CCV_Unused_A             = AreaByte(10),
    AB_CCV_Unused_B             = AreaByte(11),
    AB_CCV_Unused_C             = AreaByte(12),
    AB_CCV_Unused_D             = AreaByte(13),
    AB_CCV_Unused_E             = AreaByte(14),
    AB_CCV_Unused_F             = AreaByte(15),
};

enum {
    AF_CCV_TrompRollingDone         = AreaFlag(2),
    AF_CCV_TrompHitPlayer           = AreaFlag(3),
    AF_CCV_Tromp1_ShakingDone       = AreaFlag(4),
    AF_CCV_Tromp2_HitKolorado       = AreaFlag(5),
    AF_CCV_Tromp2_ShakingDone       = AreaFlag(6),
    AF_CCV_Tromp2_StopPlayer        = AreaFlag(7),
    AF_CCV_BossRoomFloorBroken      = AreaFlag(8),
    // AF_KZN20_MisstarFlightDone      = AreaFlag(9),
    // AF_KZN20_SceneSync              = AreaFlag(10),
    AF_CCV_RumblingIntensified      = AreaFlag(11),
    // AF_KZN23_SceneStarted           = AreaFlag(12),
    // AF_KZN23_MessageClosed          = AreaFlag(13),
    // AF_KZN23_GrabbedKolorado        = AreaFlag(14),
    // AF_KZN23_GrabbedPlayer          = AreaFlag(15),
    // AF_KZN22_FlewAway               = AreaFlag(16),
    // AF_KZN23_UseAlternateSound      = AreaFlag(17),
    // AF_KZN04_FireBar1_Coins         = AreaFlag(18),
    // AF_KZN04_FireBar2_Coins         = AreaFlag(19),
    // AF_KZN04_FireBar3_Coins         = AreaFlag(20),
    // AF_KZN11_FireBar1_Coins         = AreaFlag(21),
    // AF_KZN11_FireBar2_Coins         = AreaFlag(22),
    // AF_KZN11_FireBar3_Coins         = AreaFlag(23),
};

extern MapSettings ccv_01_settings;
extern MapSettings ccv_02_settings;
