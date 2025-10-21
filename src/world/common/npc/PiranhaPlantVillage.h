#include "common.h"
#include "sprite/npc/SmallPiranha.h"
#include "sprite/npc/Nipper.h"
#include "sprite/npc/Muncher.h"

#define SMALL_PIRANHA_PLANT_ANIMS \
{ \
    .idle   = ANIM_SmallPiranha_Anim01, \
    .walk   = ANIM_SmallPiranha_Anim01, \
    .run    = ANIM_SmallPiranha_Anim01, \
    .chase  = ANIM_SmallPiranha_Anim01, \
    .anim_4 = ANIM_SmallPiranha_Anim01, \
    .anim_5 = ANIM_SmallPiranha_Anim01, \
    .death  = ANIM_SmallPiranha_Anim09, \
    .hit    = ANIM_SmallPiranha_Anim09, \
    .anim_8 = ANIM_SmallPiranha_Anim01, \
    .anim_9 = ANIM_SmallPiranha_Anim01, \
    .anim_A = ANIM_SmallPiranha_Anim01, \
    .anim_B = ANIM_SmallPiranha_Anim01, \
    .anim_C = ANIM_SmallPiranha_Anim01, \
    .anim_D = ANIM_SmallPiranha_Anim01, \
    .anim_E = ANIM_SmallPiranha_Anim01, \
    .anim_F = ANIM_SmallPiranha_Anim01, \
}

#define NIPPER_ANIMS \
{ \
    .idle   = ANIM_Nipper_Idle, \
    .walk   = ANIM_Nipper_Idle, \
    .run    = ANIM_Nipper_Idle, \
    .chase  = ANIM_Nipper_Idle, \
    .anim_4 = ANIM_Nipper_Idle, \
    .anim_5 = ANIM_Nipper_Idle, \
    .death  = ANIM_Nipper_Idle, \
    .hit    = ANIM_Nipper_Idle, \
    .anim_8 = ANIM_Nipper_Idle, \
    .anim_9 = ANIM_Nipper_Idle, \
    .anim_A = ANIM_Nipper_Idle, \
    .anim_B = ANIM_Nipper_Idle, \
    .anim_C = ANIM_Nipper_Idle, \
    .anim_D = ANIM_Nipper_Idle, \
    .anim_E = ANIM_Nipper_Idle, \
    .anim_F = ANIM_Nipper_Idle, \
}

#define PINK_NIPPER_ANIMS \
{ \
    .idle   = ANIM_Nipper_Pink_Idle, \
    .walk   = ANIM_Nipper_Pink_Idle, \
    .run    = ANIM_Nipper_Pink_Idle, \
    .chase  = ANIM_Nipper_Pink_Idle, \
    .anim_4 = ANIM_Nipper_Pink_Idle, \
    .anim_5 = ANIM_Nipper_Pink_Idle, \
    .death  = ANIM_Nipper_Pink_Idle, \
    .hit    = ANIM_Nipper_Pink_Idle, \
    .anim_8 = ANIM_Nipper_Pink_Idle, \
    .anim_9 = ANIM_Nipper_Pink_Idle, \
    .anim_A = ANIM_Nipper_Pink_Idle, \
    .anim_B = ANIM_Nipper_Pink_Idle, \
    .anim_C = ANIM_Nipper_Pink_Idle, \
    .anim_D = ANIM_Nipper_Pink_Idle, \
    .anim_E = ANIM_Nipper_Pink_Idle, \
    .anim_F = ANIM_Nipper_Pink_Idle, \
}

#define MUNCHER_ANIMS \
{ \
    .idle   = ANIM_Muncher_Idle, \
    .walk   = ANIM_Muncher_Idle, \
    .run    = ANIM_Muncher_Idle, \
    .chase  = ANIM_Muncher_Idle, \
    .anim_4 = ANIM_Muncher_Idle, \
    .anim_5 = ANIM_Muncher_Idle, \
    .death  = ANIM_Muncher_Idle, \
    .hit    = ANIM_Muncher_Idle, \
    .anim_8 = ANIM_Muncher_Idle, \
    .anim_9 = ANIM_Muncher_Idle, \
    .anim_A = ANIM_Muncher_Idle, \
    .anim_B = ANIM_Muncher_Idle, \
    .anim_C = ANIM_Muncher_Idle, \
    .anim_D = ANIM_Muncher_Idle, \
    .anim_E = ANIM_Muncher_Idle, \
    .anim_F = ANIM_Muncher_Idle, \
}

#define NIBBELLA_ANIMS \
{ \
    .idle   = ANIM_SmallPiranha_Anim01, \
    .walk   = ANIM_SmallPiranha_Anim01, \
    .run    = ANIM_SmallPiranha_Anim01, \
    .chase  = ANIM_SmallPiranha_Anim01, \
    .anim_4 = ANIM_SmallPiranha_Anim01, \
    .anim_5 = ANIM_SmallPiranha_Anim01, \
    .death  = ANIM_SmallPiranha_Anim09, \
    .hit    = ANIM_SmallPiranha_Anim09, \
    .anim_8 = ANIM_SmallPiranha_Anim01, \
    .anim_9 = ANIM_SmallPiranha_Anim01, \
    .anim_A = ANIM_SmallPiranha_Anim01, \
    .anim_B = ANIM_SmallPiranha_Anim01, \
    .anim_C = ANIM_SmallPiranha_Anim01, \
    .anim_D = ANIM_SmallPiranha_Anim01, \
    .anim_E = ANIM_SmallPiranha_Anim01, \
    .anim_F = ANIM_SmallPiranha_Anim01, \
}
