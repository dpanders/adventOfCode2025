cmake_minimum_required(VERSION 3.20)
project(aoc2025 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Automatically include all dayXX.cpp files
file(GLOB DAY_SOURCES "src/day*.cpp")

add_executable(aoc
    src/main.cpp
    src/aoc.cpp
    ${DAY_SOURCES}
)

target_include_directories(aoc PRIVATE include)
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug CACHE STRING "" FORCE)
endif()
enable_testing()
find_package(GTest REQUIRED)

add_executable(test_safe tests/test_safe.cpp src/day01.cpp src/aoc.cpp)
target_include_directories(test_safe PRIVATE include)
target_link_libraries(test_safe GTest::GTest GTest::Main)
add_test(NAME SafeTests COMMAND test_safe)

add_executable(test_invalidCheck tests/test_invalidCheck.cpp src/aoc.cpp)
target_include_directories(test_invalidCheck PRIVATE include)
target_link_libraries(test_invalidCheck GTest::GTest GTest::Main)
add_test(NAME InvalidCheckTests COMMAND test_invalidCheck)

add_executable(test_joltage tests/test_joltage.cpp src/aoc.cpp)
target_include_directories(test_joltage PRIVATE include)
target_link_libraries(test_joltage GTest::GTest GTest::Main)
add_test(NAME JoltageTests COMMAND test_joltage)