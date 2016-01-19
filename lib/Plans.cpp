
#include "Plans.h"


using plans::ZombieActions;
using plans::applyZombiePlan;


void
plans::applyZombiePlan(ZombieActions &actions) {
  actions.goToTheWinchester();
  actions.haveANiceColdPint();
  actions.waitForThisToAllBlowOver();
}

