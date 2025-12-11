#include "aoc.hpp"
#include "joltage.hpp"
#include <iostream>


int day03() {
    auto lines = read_lines("days/day03.txt");
    long long totalJoltage = 0;
    for (auto& line : lines) {
      // get max joltage
      // maintain current running total
      int firstDigitPosition = getMaxDigitBetweenPositions(line, 0, line.length()-2);
      int secondDigitPosition = getMaxDigitBetweenPositions(line, 
         firstDigitPosition+1, line.length()-1);
      totalJoltage += ((line[firstDigitPosition] - '0' ) * 10 )
      + (line[secondDigitPosition] - '0');
      // std::cout << line << " " << firstDigitPosition << " " << secondDigitPosition << "\n";
      }
    std::cout << "Part1: " << totalJoltage;
    return 0;
}
