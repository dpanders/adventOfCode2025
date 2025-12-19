#include <gtest/gtest.h>
#include "fresh.hpp"
#include "aoc.hpp"
#include <iostream>


TEST(Fresh, Pos1) {
    // TODO: Add your test cases here
   auto lines = read_lines("days/day05test.txt");
   RawSections sections = split_sections(lines);
   auto ranges = sections.ranges;
   auto values = sections.values;
   // for (const auto &r : ranges) {
   //  std::cerr << r << "\n";
   // }

   // for (const auto &r : values) {
   //  std::cerr << r << "\n";
   // }
   auto rangeVec = parse_ranges(ranges);
   for (const auto &p : rangeVec) {
    std::cerr << "(" << p.first << ", " << p.second << ")\n";
}
   auto valueVec = parse_values(values);
   for (const auto &r : valueVec) {
    std::cerr << r << "\n";
   }
   EXPECT_EQ(0,0);
}