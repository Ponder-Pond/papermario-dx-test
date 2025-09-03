#include "area.hpp"
#include "stage/llv_battle_stages.hpp"
#include "battle/common/newactor/llv/llv_actors.hpp"
// TODO: make actors relocatable
#include "battle/common/newactor/llv/pyro_king.inc.cpp"

using namespace battle::actor;

namespace battle::area::llv {

Vec3i KingPos = { 70, 0, 5 };

Formation Formation_PyroKing = {
    ACTOR_BY_POS(PyroKing, KingPos, 10),
};

BattleList Battles = {
    BATTLE(Formation_PyroKing, LavaLavaVolcano, "Pyro King"), // Battle 00
    {},
};

StageList Stages = {
    STAGE("llv_00", LavaLavaVolcano),
    {},
};

} // namespace battle::area::llv
