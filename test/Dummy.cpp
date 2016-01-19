#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "Triangle.h"
using namespace shapes::Triangle;


TEST(TriangleTests, zerosides){
     Triangle tri(0,0,0);
    bool state = tri.isIsosceles();
    EXPECT_FALSE(state);

}




int main (int argc, char** argv ){
    ::testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}