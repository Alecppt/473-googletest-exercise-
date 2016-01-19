
#ifndef PLANS_H
#define PLANS_H


namespace plans {


// For suitability of these actions in case of zombie apocalypse, please
// consult primary exhibit: "Shaun of the Dead", courtesy Edgar Wright.
class ZombieActions {
public:
  virtual void getBittenByZombie() { }
  virtual void moan() { }
  virtual void goToTheWinchester() { }
  virtual void haveANiceColdPint() { }
  virtual void waitForThisToAllBlowOver() { }
};


void applyZombiePlan(ZombieActions &actions);


}


#endif

