#include "aoc.hpp"
#include <iostream>
#include "fresh.hpp"

int day05()
{
   auto lines = read_lines("days/day05.txt");

   RawSections sections = split_sections(lines);

   auto parsed_ranges = parse_ranges(sections.ranges);
   auto parsed_values = parse_values(sections.values);

   int fresh = 0;
   for (const auto v : parsed_values)
   {
      for (const auto &[lo, hi] : parsed_ranges)
      {
         if (v >= lo && v <= hi)
         {
            fresh++;
            break;
         }
      }
   }
   // for each ID, check if fresh
   // if fresh, fresh++
   std::cout << "Part1: " << fresh << "\n";

   // part 2

   std::cout << "Part2: " << "\n";

   return 0;
}
