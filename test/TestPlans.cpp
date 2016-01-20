#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "Plans.h"


class MockZombieActionPlans : public plans::ZombieActions{
public:
    MOCK_METHOD0(moan, void());
    MOCK_METHOD0(getBittenByZombie, void());
    MOCK_METHOD0(goToTheWinchester, void());
    MOCK_METHOD0(haveANiceColdPint, void());
    MOCK_METHOD0(waitForThisToAllBlowOver, void());
};

using ::testing::InSequence;

TEST(PlansTests, TestFunctionOrder){

    MockZombieActionPlans zombieActionPlans;
    {
        InSequence seq;
        EXPECT_CALL(zombieActionPlans, goToTheWinchester());
        EXPECT_CALL(zombieActionPlans, haveANiceColdPint());
        EXPECT_CALL(zombieActionPlans, waitForThisToAllBlowOver());
    }
    plans::applyZombiePlan(zombieActionPlans);

}
