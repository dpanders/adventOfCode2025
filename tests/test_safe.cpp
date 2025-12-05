#include <gtest/gtest.h>
#include "aoc.hpp"
#include "safe.hpp"

TEST(SafeClass, ConstructorInitializesValue) {
    safe s(42);
    EXPECT_EQ(s.current(), 42);
}

TEST(SafeClass, ZeroesCountsCorrectly) {
    safe s(102030);
    EXPECT_EQ(s.zeroes(), 3);
}

TEST(SafeClass, TurnLeftUpdatesValue) {
    safe s(5);
    s.turnLeft(1);
    EXPECT_EQ(s.current(), 4);
}

TEST(SafeClass, TurnRightUpdatesValue) {
    safe s(5);
    s.turnRight(1);
    EXPECT_EQ(s.current(), 6);
}

TEST(SafeClass, TurnRightWrapsAround) {
    safe s(5);
    s.turnRight(100);
    EXPECT_EQ(s.current(), 5);
}

TEST(SafeClass, TurnLeftWrapsAround) {
    safe s(5);
    s.turnLeft(6);
    EXPECT_EQ(s.current(), 99);
}

TEST(SafeClass, TurnLeftToZero) {
    safe s(5);
    s.turnLeft(5);
    EXPECT_EQ(s.current(), 0);
}

TEST(SafeClass, TurnRightFromNinetyNine) {
    safe s(99);
    s.turnRight(1);
    EXPECT_EQ(s.current(), 0);
}