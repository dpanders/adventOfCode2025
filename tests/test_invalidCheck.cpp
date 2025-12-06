#include <gtest/gtest.h>
#include "invalidCheck.hpp"

TEST(InvalidCheck, ExampleTest) {
    // TODO: Add your test cases here
    EXPECT_FALSE(invalidCheck(1));
}

TEST(InvalidCheck, validCase2digit) {
    EXPECT_TRUE(invalidCheck(22));
}

TEST(InvalidCheck, validCase4digit) {
    EXPECT_TRUE(invalidCheck(7777));
}

TEST(InvalidCheck, invalidcase5digit) {
    EXPECT_FALSE(invalidCheck(1234123));
}