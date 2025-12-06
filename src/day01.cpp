#include "aoc.hpp"
#include "safe.hpp"
#include <iostream>

int day01() {
    auto lines = read_lines("days/day01.txt");

    int part1 = 0;
    safe safe_obj(50);
    int zeroes_count = 0;

    // TODO: Add actual solution logic
    // For now just demonstrate parsing:
    
    for (auto& line : lines) {
        char direction = line[0];  // First char: 'R' or 'L'
        int amount = std::stoi(line.substr(1));  // Rest of string as integer
        
        if (direction == 'R') {
            safe_obj.turnRight(amount);
        } else if (direction == 'L') {
            safe_obj.turnLeft(amount);
        }
        if (safe_obj.current() == 0) {
            zeroes_count++;
        }
    } std::cout << "Part 1 Answer: " << zeroes_count << "\n";

    safe_obj.reset(50);

    for (auto& line : lines) {
        char direction = line[0];  // First char: 'R' or 'L'
        int amount = std::stoi(line.substr(1));  // Rest of string as integer
        
        if (direction == 'R') {
            safe_obj.turnRight(amount);
        } else if (direction == 'L') {
            safe_obj.turnLeft(amount);
        }
    }
    std::cout << "Part 2 Answer: " << safe_obj.zeroes() << "\n";
    
    return 0;
}
