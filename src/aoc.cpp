#include "aoc.hpp"
#include <fstream>

std::vector<std::string> read_lines(const std::string& path) {
    std::ifstream file(path);
    std::vector<std::string> lines;
    std::string line;

    while (std::getline(file, line)) {
        lines.push_back(line);
    }
    return lines;
}
