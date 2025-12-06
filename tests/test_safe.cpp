#include <gtest/gtest.h>
#include "aoc.hpp"
#include "safe.hpp"

// part 1 tests

// TEST(SafeClass, ConstructorInitializesValue) {
//     safe s(42);
//     EXPECT_EQ(s.current(), 42);
// }

// TEST(SafeClass, TurnLeftUpdatesValue) {
//     safe s(5);
//     s.turnLeft(1);
//     EXPECT_EQ(s.current(), 4);
// }

// TEST(SafeClass, TurnRightUpdatesValue) {
//     safe s(5);
//     s.turnRight(1);
//     EXPECT_EQ(s.current(), 6);
// }

// TEST(SafeClass, TurnRightWrapsAround) {
//     safe s(5);
//     s.turnRight(100);
//     EXPECT_EQ(s.current(), 5);
// }

// TEST(SafeClass, TurnLeftWrapsAround) {
//     safe s(5);
//     s.turnLeft(6);
//     EXPECT_EQ(s.current(), 99);
// }

// TEST(SafeClass, TurnLeftToZero) {
//     safe s(5);
//     s.turnLeft(5);
//     EXPECT_EQ(s.current(), 0);
// }

// TEST(SafeClass, TurnRightFromNinetyNine) {
//     safe s(99);
//     s.turnRight(1);
//     EXPECT_EQ(s.current(), 0);
// }

// part 2 tests

TEST(SafeClass, ZeroCountAtInit) {
    safe s(50);
    EXPECT_EQ(s.zeroes(), 0);
}

TEST(SafeClass, ZeroCountAfterOneHundredRight) {
    safe s(50);
    s.turnRight(100);
    EXPECT_EQ(s.zeroes(), 1);
}

TEST(SafeClass, ZeroCountAfterTwoHundredRight) {
    safe s(50);
    s.turnRight(200);
    EXPECT_EQ(s.zeroes(), 2);
}

TEST(SafeClass, ZeroCountAfterOneHundredLeft) {
    safe s(50);
    s.turnLeft(100);
    EXPECT_EQ(s.zeroes(), 1);
}

TEST(SafeClass, ZeroCountAfterTwoHundredLeft) {
    safe s(50);
    s.turnLeft(200);
    EXPECT_EQ(s.zeroes(), 2);
}

TEST(SafeClass, ZeroCountAfterLeftLandsOnZero) {
    safe s(50);
    s.turnLeft(1000);
    EXPECT_EQ(s.zeroes(), 10);
}
TEST(SafeClass, L1000currentIs50) {
    safe s(50);
    s.turnLeft(1000);
    EXPECT_EQ(s.current(), 50);
}


TEST(SafeClass, ResetTest) {
    safe s(50);
    s.turnLeft(50);
    s.reset(49);
    EXPECT_EQ(s.current(), 49);
}