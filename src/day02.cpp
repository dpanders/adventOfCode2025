#include "aoc.hpp"
#include "invalidCheck.hpp"
#include <iostream>
#include <sstream>

int day02()
{
   auto lines = read_lines("days/day02.txt");
   std::string line = lines[0]; // Get the first (and only) line
   long long invalid = 0;
   long long invalidPt2 = 0;

   long long part1 = 0;

   std::stringstream ss(line);
   std::string pair;

   // Split by comma
   while (std::getline(ss, pair, ','))
   {
      // Find the dash to split the pair
      size_t dash_pos = pair.find('-');
      if (dash_pos != std::string::npos)
      {
         std::string left = pair.substr(0, dash_pos);
         std::string right = pair.substr(dash_pos + 1);

         long long value1 = std::stoll(left);
         long long value2 = std::stoll(right);

         // TODO: Use value1 and value2 here
         // std::cout << value1 << "-" << value2 << "\n";
         for (long long v = value1; v <= value2; v++)
         {
            if (invalidCheck(v))
            {
               invalid += v;
            }
            if (invalidCheckPt2(v))
            {
               invalidPt2 += v;
            }
         }
      }
   }

   std::cout << "Part 1: " << invalid << "\n";
   std::cout << "Part 2: " << invalidPt2 << "\n";

   return 0;
}
