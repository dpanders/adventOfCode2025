#include "aoc.hpp"
#include "joltage.hpp"
#include <iostream>


int day03() {
    auto lines = read_lines("days/day03.txt");

    // part 1
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
    std::cout << "Part1: " << totalJoltage << "\n";

    // part 2
    totalJoltage = 0;
    int joltagePositions[12];
    int posCur = 0;
    int pos1 = 0;
    int pos2 = 0;  // length - 1

    for (auto& line : lines) 
      {
         pos1 = 0;
         pos2 = line.length() - 12;  // length minus reversed positions minus 1 for index starting at 0
         for (int i=0; i<12; i++)
         {
            posCur = getMaxDigitBetweenPositions(line, pos1, pos2 + i);
            joltagePositions[i] = posCur;
            pos1 = posCur + 1;
         }
         for (int i=0; i<12; i++)
         {
            totalJoltage += (line[(joltagePositions[i])] - '0') * std::pow(10, 11-i);
         }
      }

      std::cout << "Part2: " << totalJoltage;

    return 0;
}
