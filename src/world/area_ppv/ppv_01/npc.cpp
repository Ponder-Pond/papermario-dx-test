#include "ppv_01.h"

namespace ppv_01 {

#include "world/common/npc/PiranhaPlantVillage.inc.cpp"

EvtScript EVS_NpcIdle_ElderRootsage = {
    Return
    End
};

EvtScript EVS_NpcInit_ElderRootsage = {
    Call(BindNpcIdle, NPC_SELF, Ref(EVS_NpcIdle_ElderRootsage))
    Return
    End
};

EvtScript EVS_NpcIdle_Thornald = {
    Return
    End
};

EvtScript EVS_NpcInit_Thornald = {
    Call(BindNpcIdle, NPC_SELF, Ref(EVS_NpcIdle_Thornald))
    Return
    End
};

EvtScript EVS_NpcIdle_Petaline = {
    Return
    End
};

EvtScript EVS_NpcInit_Petaline = {
    Call(BindNpcIdle, NPC_SELF, Ref(EVS_NpcIdle_Petaline))
    Return
    End
};

EvtScript EVS_NpcIdle_Bramblet = {
    Return
    End
};

EvtScript EVS_NpcInit_Bramblet = {
    Call(BindNpcIdle, NPC_SELF, Ref(EVS_NpcIdle_Bramblet))
    Return
    End
};

EvtScript EVS_NpcIdle_Verabloom = {
    Return
    End
};

EvtScript EVS_NpcInit_Verabloom = {
    Call(BindNpcIdle, NPC_SELF, Ref(EVS_NpcIdle_Verabloom))
    Return
    End
};

EvtScript EVS_NpcIdle_Sproutt = {
    Return
    End
};

EvtScript EVS_NpcInit_Sproutt = {
    Call(BindNpcIdle, NPC_SELF, Ref(EVS_NpcIdle_Sproutt))
    Return
    End
};

EvtScript EVS_NpcIdle_Petra = {
    Return
    End
};

EvtScript EVS_NpcInit_Petra = {
    Call(BindNpcIdle, NPC_SELF, Ref(EVS_NpcIdle_Petra))
    Return
    End
};

EvtScript EVS_NpcIdle_Nibbella = {
    // Label(0)
    // Call(GetPlayerPos, LVar0, LVar1, LVar2)
    // IfLt(LVar0, 225)
    //     Wait(1)
    //     Goto(0)
    // EndIf
    // Call(DisablePlayerInput, TRUE)
    // Call(UseSettingsFrom, CAM_DEFAULT, LVar0, LVar1, LVar2)
    // Call(SetPanTarget, CAM_DEFAULT, 270, -200, 0)
    // Call(SetCamDistance, CAM_DEFAULT, 400)
    // Call(SetCamSpeed, CAM_DEFAULT, Float(2.5 / DT))
    // Call(PanToTarget, CAM_DEFAULT, 0, TRUE)
    // Call(WaitForCam, CAM_DEFAULT, Float(1.0))
    // Wait(10 * DT)
    // Call(SetNpcPos, NPC_SELF, 320, -220, 0)
    // Call(PlaySoundAtNpc, NPC_SELF, SOUND_BURROW_SURFACE, SOUND_SPACE_DEFAULT)
    // Call(SetNpcAnimation, NPC_SELF, ANIM_LargePiranha_Putrid_Anim17)
    // Wait(30 * DT)
    // Call(SetNpcAnimation, NPC_SELF, ANIM_LargePiranha_Putrid_Anim01)
    // Call(SpeakToPlayer, NPC_SELF, ANIM_LargePiranha_Putrid_Anim04, ANIM_LargePiranha_Putrid_Anim01, 0, MSG_CH5_00ED)
    // Wait(10 * DT)
    // Call(PlaySoundAtNpc, NPC_SELF, SOUND_BURROW_DIG, SOUND_SPACE_DEFAULT)
    // Call(SetNpcAnimation, NPC_SELF, ANIM_LargePiranha_Putrid_Anim18)
    // Wait(25 * DT)
    // Call(SetNpcPos, NPC_SELF, NPC_DISPOSE_LOCATION)
    // Call(ResetCam, CAM_DEFAULT, Float(3.0 / DT))
    // Call(DisablePlayerInput, FALSE)
    Return
    End
};

EvtScript EVS_NpcInit_Nibbella = {
    Call(BindNpcIdle, NPC_SELF, Ref(EVS_NpcIdle_Nibbella))
    Return
    End
};

EvtScript EVS_NpcIdle_Nibby = {
    Return
    End
};

EvtScript EVS_NpcInit_Nibby = {
    Call(BindNpcIdle, NPC_SELF, Ref(EVS_NpcIdle_Nibby))
    Return
    End
};

EvtScript EVS_NpcIdle_Chomsy = {
    Return
    End
};

EvtScript EVS_NpcInit_Chomsy = {
    Call(BindNpcIdle, NPC_SELF, Ref(EVS_NpcIdle_Chomsy))
    Return
    End
};

EvtScript EVS_NpcIdle_Florin = {
    Return
    End
};

EvtScript EVS_NpcInit_Florin = {
    Call(BindNpcIdle, NPC_SELF, Ref(EVS_NpcIdle_Florin))
    Return
    End
};

EvtScript EVS_NpcIdle_Prickle = {
    Return
    End
};

EvtScript EVS_NpcInit_Prickle = {
    Call(BindNpcIdle, NPC_SELF, Ref(EVS_NpcIdle_Prickle))
    Return
    End
};

EvtScript EVS_NpcIdle_Dandil = {
    Return
    End
};

EvtScript EVS_NpcInit_Dandil = {
    Call(BindNpcIdle, NPC_SELF, Ref(EVS_NpcIdle_Dandil))
    Return
    End
};

NpcData NpcData_Villagers[] = {
    {
        .id = NPC_ElderRootsage,
        .settings = &NpcSettings_ElderRootsage,
        .pos = { GEN_ELDER_ROOTSAGE_VEC },
        .flags = COMMON_PASSIVE_FLAGS,
        .init = &EVS_NpcInit_ElderRootsage,
        .yaw = GEN_ELDER_ROOTSAGE_DIR,
        .drops = NO_DROPS,
        .animations = SMALL_PIRANHA_PLANT_ANIMS,
    },
    {
        .id = NPC_Thornald,
        .settings = &NpcSettings_PiranhaPlantAdults,
        .pos = { GEN_THORNALD_VEC },
        .flags = COMMON_PASSIVE_FLAGS,
        .init = &EVS_NpcInit_Thornald,
        .yaw = GEN_THORNALD_DIR,
        .drops = NO_DROPS,
        .animations = SMALL_PIRANHA_PLANT_ANIMS,
    },
    {
        .id = NPC_Petaline,
        .settings = &NpcSettings_PiranhaPlantAdults,
        .pos = { GEN_PETALINE_VEC },
        .flags = COMMON_PASSIVE_FLAGS,
        .init = &EVS_NpcInit_Petaline,
        .yaw = GEN_PETALINE_DIR,
        .drops = NO_DROPS,
        .animations = SMALL_PIRANHA_PLANT_ANIMS,
    },
    {
        .id = NPC_Bramblet,
        .settings = &NpcSettings_PiranhaPlantAdults,
        .pos = { GEN_BRAMBLET_VEC },
        .flags = COMMON_PASSIVE_FLAGS,
        .init = &EVS_NpcInit_Bramblet,
        .yaw = GEN_BRAMBLET_DIR,
        .drops = NO_DROPS,
        .animations = SMALL_PIRANHA_PLANT_ANIMS,
    },
    {
        .id = NPC_Verabloom,
        .settings = &NpcSettings_PiranhaPlantAdults,
        .pos = { GEN_VERABLOOM_VEC },
        .flags = COMMON_PASSIVE_FLAGS,
        .init = &EVS_NpcInit_Verabloom,
        .yaw = GEN_VERABLOOM_DIR,
        .drops = NO_DROPS,
        .animations = SMALL_PIRANHA_PLANT_ANIMS,
    },
    {
        .id = NPC_Sproutt,
        .settings = &NpcSettings_PiranhaPlantAdults,
        .pos = { GEN_SPROUTT_VEC },
        .flags = COMMON_PASSIVE_FLAGS,
        .init = &EVS_NpcInit_Sproutt,
        .yaw = GEN_SPROUTT_DIR,
        .drops = NO_DROPS,
        .animations = SMALL_PIRANHA_PLANT_ANIMS,
    },
    {
        .id = NPC_Petra,
        .settings = &NpcSettings_PiranhaPlantAdults,
        .pos = { GEN_PETRA_VEC },
        .flags = COMMON_PASSIVE_FLAGS,
        .init = &EVS_NpcInit_Petra,
        .yaw = GEN_PETRA_DIR,
        .drops = NO_DROPS,
        .animations = SMALL_PIRANHA_PLANT_ANIMS,
    },
    {
        .id = NPC_Nibbella,
        .settings = &NpcSettings_Nippers,
        .pos = { GEN_NIBBELLA_VEC },
        .flags = COMMON_PASSIVE_FLAGS,
        .init = &EVS_NpcInit_Nibbella,
        .yaw = GEN_NIBBELLA_DIR,
        .drops = NO_DROPS,
        .animations = PINK_NIPPER_ANIMS,
    },
    {
        .id = NPC_Nibby,
        .settings = &NpcSettings_Nippers,
        .pos = { GEN_NIBBY_VEC },
        .flags = COMMON_PASSIVE_FLAGS,
        .init = &EVS_NpcInit_Nibby,
        .yaw = GEN_NIBBY_DIR,
        .drops = NO_DROPS,
        .animations = PINK_NIPPER_ANIMS,
    },
    {
        .id = NPC_Chomsy,
        .settings = &NpcSettings_Munchers,
        .pos = { GEN_CHOMSY_VEC },
        .flags = COMMON_PASSIVE_FLAGS,
        .init = &EVS_NpcInit_Chomsy,
        .yaw = GEN_CHOMSY_DIR,
        .drops = NO_DROPS,
        .animations = MUNCHER_ANIMS,
    },
    {
        .id = NPC_Florin,
        .settings = &NpcSettings_Nippers,
        .pos = { GEN_FLORIN_VEC },
        .flags = COMMON_PASSIVE_FLAGS,
        .init = &EVS_NpcInit_Florin,
        .yaw = GEN_FLORIN_DIR,
        .drops = NO_DROPS,
        .animations = PINK_NIPPER_ANIMS,
    },
    {
        .id = NPC_Prickle,
        .settings = &NpcSettings_Munchers,
        .pos = { GEN_PRICKLE_VEC },
        .flags = COMMON_PASSIVE_FLAGS,
        .init = &EVS_NpcInit_Prickle,
        .yaw = GEN_PRICKLE_DIR,
        .drops = NO_DROPS,
        .animations = MUNCHER_ANIMS,
    },
    {
        .id = NPC_Dandil,
        .settings = &NpcSettings_Nippers,
        .pos = { GEN_DANDIL_VEC },
        .flags = COMMON_PASSIVE_FLAGS,
        .init = &EVS_NpcInit_Dandil,
        .yaw = GEN_DANDIL_DIR,
        .drops = NO_DROPS,
        .animations = NIPPER_ANIMS,
    },
};

NpcGroupList DefaultNPCs = {
    NPC_GROUP(NpcData_Villagers),
    {},
};

}; // namespace ppv_01
