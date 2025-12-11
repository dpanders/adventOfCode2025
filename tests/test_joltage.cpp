#include <gtest/gtest.h>
#include "joltage.hpp"

TEST(Joltage, Pos1) {
    // TODO: Add your test cases here
    std::string str = "1234";
    EXPECT_EQ(getMaxDigitBetweenPositions(str, 0, str.length()-1), 3);
}

TEST(Joltage, Pos2) {
    // TODO: Add your test cases here
    std::string str = "4444";
    EXPECT_EQ(getMaxDigitBetweenPositions(str, 0, str.length()-1), 0);
}

TEST(Joltage, Pos3) {
    // TODO: Add your test cases here
    std::string str = "1234";
    EXPECT_EQ(getMaxDigitBetweenPositions(str, 2, str.length()-1), 3);
}

TEST(Joltage, Pos4) {
    // TODO: Add your test cases here
    std::string str = "1244";
    EXPECT_EQ(getMaxDigitBetweenPositions(str, 3, str.length()-1), 3);
}

TEST(Joltage, Pos5) {
    // TODO: Add your test cases here
    std::string str = "4321";
    EXPECT_EQ(getMaxDigitBetweenPositions(str, 0, str.length()-1), 0);
}



TEST(Joltage, Pos6) {
    // TODO: Add your test cases here
    std::string str = "987654321111111";
    EXPECT_EQ(getMaxDigitBetweenPositions(str, 0, str.length()-2), 0);
}


TEST(Joltage, Pos7) {
    // TODO: Add your test cases here
    std::string str = "987654321111111";
    EXPECT_EQ(getMaxDigitBetweenPositions(str, 1, str.length()-1), 1);
}
