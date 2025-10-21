/// @file pvv_01.h
/// @brief Piranha Village - Cave Village Floor 1

#include "common.h"
#include "generated.h"
#include "message_ids.h"
#include "map.h"

#include "../ppv.h"
#include "mapfs/ppv_01_shape.h"
#include "mapfs/ppv_01_hit.h"

enum {
    NPC_ElderRootsage,
    NPC_Thornald,
    NPC_Petaline,
    NPC_Bramblet,
    NPC_Verabloom,
    NPC_Sproutt,
    NPC_Petra,
    NPC_Nibbella,
    NPC_Nibby,
    NPC_Chomsy,
    NPC_Florin,
    NPC_Prickle,
    NPC_Dandil,
};

namespace ppv_01 {

extern EvtScript EVS_Main;
extern NpcGroupList DefaultNPCs;

}; // namespace ppv_01
