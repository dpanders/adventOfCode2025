#include <gtest/gtest.h>
#include "grid.hpp"


TEST(Grid, Pos1) {
    // TODO: Add your test cases here
    Grid g(3,3);    
    std::vector<std::array<int,2>>  points = g.neighbours( 1, 1);
    std::vector<std::array<int,2>>  expectedPoints = {{0,0}, {0,1}, {0,2}, {1,0}, {1,2}, {2,0}, {2,1}, {2,2} };
    EXPECT_EQ(points, expectedPoints);
}

TEST(Grid, Pos2) {
    // TODO: Add your test cases here
    Grid g(3,2);

    std::vector<std::array<int,2>>  points = g.neighbours(0, 0);
    std::vector<std::array<int,2>>  expectedPoints = {{0,1}, {1,0}, {1,1} };
    EXPECT_EQ(points, expectedPoints);
}
TEST(Grid, Pos3) {
    // TODO: Add your test cases here
     Grid g(3,3);    
    std::vector<std::array<int,2>>  points = g.neighbours(0, 2);
    std::vector<std::array<int,2>>  expectedPoints = {{0,1}, {1,1}, {1,2} };
    EXPECT_EQ(points, expectedPoints);
}

TEST(Grid, Pos4) {
    // TODO: Add your test cases here
     Grid g(3,3);    
    std::vector<std::array<int,2>>  points = g.neighbours(2, 2);
    std::vector<std::array<int,2>>  expectedPoints = {{1,1}, {1,2}, {2,1} };
    EXPECT_EQ(points, expectedPoints);
}
