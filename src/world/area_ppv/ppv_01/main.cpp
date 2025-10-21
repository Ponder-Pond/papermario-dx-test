#include "ppv_01.h"

namespace ppv_01 {

#include "world/common/atomic/TexturePan.inc.c"

// EvtScript EVS_ExitWalk_ccv_03_0 = EVT_EXIT_WALK(60, kzn_01_ENTRY_0, "jan_22", jan_22_ENTRY_2);
// EvtScript EVS_ExitWalk_ppv_01_0 = EVT_EXIT_WALK(60, kzn_01_ENTRY_1, "kzn_02", kzn_02_ENTRY_0);

EvtScript EVS_BindExitTriggers = {
    // BindTrigger(EVS_ExitWalk_ccv_03_0, TRIGGER_FLOOR_ABOVE, COLLIDER_deili1, 1, 0)
    // BindTrigger(EVS_ExitWalk_ppv_01_0, TRIGGER_FLOOR_ABOVE, COLLIDER_deili2, 1, 0)
    Return
    End
};

// EvtScript EVS_StartTexPanners = {
//     // smoke
//     Call(SetTexPanner, MODEL_kem1, TEX_PANNER_3)
//     Thread
//         TEX_PAN_PARAMS_ID(TEX_PANNER_3)
//         TEX_PAN_PARAMS_STEP( -200,    0,  600, -400)
//         TEX_PAN_PARAMS_FREQ(    1,    0,    1,    1)
//         TEX_PAN_PARAMS_INIT(    0,    0,    0,    0)
//         Exec(N(EVS_UpdateTexturePan))
//     EndThread
//     Return
//     End
// };

EvtScript EVS_Main = {
    Set(GB_WorldLocation, LOCATION_MT_LAVALAVA)
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_DEFAULT(0, 0, 0)
    Call(MakeNpcs, TRUE, Ref(DefaultNPCs))
    Set(LVar0, EVS_BindExitTriggers)
    Exec(EnterWalk)
    Wait(1)
    Call(ClearAmbientSounds, 250)
    // Exec(EVS_StartTexPanners)
    Return
    End
};

EntryList Entrances = {
    GEN_ENTRY_LIST
};

}; // namespace ppv_01

MapSettings ppv_01_settings = {
    .main = &ppv_01::EVS_Main,
    .entryList = &ppv_01::Entrances,
    .entryCount = ENTRY_COUNT(ppv_01::Entrances),
    // .tattle = { MSG_MapTattle_kzn_01 },
};
