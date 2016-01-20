#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "Hailstone.h"

using series::satisfiesHailstone;

TEST(HailstoneTests, TestInput_0) {

    EXPECT_FALSE(satisfiesHailstone(0));

}

TEST(HailstoneTests, TestInput_1){
    //2^0
    EXPECT_TRUE(satisfiesHailstone(1));
}

TEST(HailstoneTests, TestInput_4){
    //2^2
    EXPECT_TRUE(satisfiesHailstone(4));
}

TEST(HailstoneTests, TestInput_16){
    //2^4
    EXPECT_TRUE(satisfiesHailstone(16));
}

TEST(HailstoneTests, TestInput_32){
    EXPECT_TRUE(satisfiesHailstone(32));
}

TEST(HailstoneTests, TestInput_256){
    //2^8
    EXPECT_TRUE(satisfiesHailstone(256));
}

TEST(HailstoneTests, TestInput_65536){
    //2^16
    EXPECT_TRUE(satisfiesHailstone(65536));
}

TEST(HailstoneTests, TestInput_4294967296) {
    //2^32
    EXPECT_TRUE(satisfiesHailstone(4294967296));
}

TEST(HailstoneTests, TestInput_18446744073709551615) {
    //2^64-1
    EXPECT_TRUE(satisfiesHailstone(18446744073709551615));
}

//TEST(HailstoneTests, TestInput_18446744073709551616) {
//    //2^64
//    EXPECT_TRUE(satisfiesHailstone(18446744073709551616));
//}