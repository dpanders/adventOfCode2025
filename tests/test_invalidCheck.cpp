#include <gtest/gtest.h>
#include "invalidCheck.hpp"

// TEST(InvalidCheck, ExampleTest) {
//     // TODO: Add your test cases here
//     EXPECT_FALSE(invalidCheck(1));
// }

// TEST(InvalidCheck, validCase2digit) {
//     EXPECT_TRUE(invalidCheck(22));
// }

// TEST(InvalidCheck, validCase4digit) {
//     EXPECT_TRUE(invalidCheck(7777));
// }

// TEST(InvalidCheck, invalidcase5digit) {
//     EXPECT_FALSE(invalidCheck(1234123));
// }

// TEST(InvalidCheckPt2, ExampleTest) {
//     // TODO: Add your test cases here
//     EXPECT_FALSE(invalidCheckPt2(1));
// }


// TEST (InvalidCheckPt2, CheckFactors1){
//    std::vector<int> v1 = getDigitFactors(1);
//    std::vector<int> v2 = {1};
//    EXPECT_EQ(v1, v2);
// }
// TEST (InvalidCheckPt2, CheckFactors2){
//    std::vector<int> v1 = getDigitFactors(2);
//    std::vector<int> v2 = {1};
//    EXPECT_EQ(v1, v2);
// }

// TEST (InvalidCheckPt2, CheckFactors3){
//    std::vector<int> v1 = getDigitFactors(3);
//    std::vector<int> v2 = {1};
//    EXPECT_EQ(v1, v2);
// }



// TEST (InvalidCheckPt2, CheckFactors4){
//    std::vector<int> v1 = getDigitFactors(4);
//    std::vector<int> v2 = {1,2};
//    EXPECT_EQ(v1, v2);
// }


// TEST (InvalidCheckPt2, CheckFactors5){
//    std::vector<int> v1 = getDigitFactors(5);
//    std::vector<int> v2 = {1};
//    EXPECT_EQ(v1, v2);
// }
// TEST (InvalidCheckPt2, CheckFactors6){
//    std::vector<int> v1 = getDigitFactors(6);
//    std::vector<int> v2 = {1,2,3};
//    EXPECT_EQ(v1, v2);
// }

TEST (InvalidCheckPt2, checkAllSame1){
   EXPECT_TRUE(!checkAllSame({1,2,2}));
}
TEST (InvalidCheckPt2, checkAllSame2){
   EXPECT_TRUE(checkAllSame({2,2,2}));
}
TEST (InvalidCheckPt2, checkAllSame3){
   EXPECT_TRUE(checkAllSame({1,1}));
}
TEST (InvalidCheckPt2, checkAllSame4){
   EXPECT_TRUE(!checkAllSame({1,2}));
}
TEST (InvalidCheckPt2, checkAllSame5){
   EXPECT_TRUE(!checkAllSame({2,2,2,4}));
}
TEST (InvalidCheckPt2, checkAllSame6){
   EXPECT_TRUE(checkAllSame({3,3,3,3}));
}