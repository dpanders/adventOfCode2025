#include <iostream>
#include <string>
#include "aoc.hpp"

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Usage: ./aoc <day>\n";
        return 1;
    }

    int day = std::stoi(argv[1]);

    switch (day) {
        case 1: return day01();
        case 2: return day02();
        default:
            std::cerr << "Day " << day << " not implemented.\n";
            return 1;
    }
}
