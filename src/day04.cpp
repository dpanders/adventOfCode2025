#include "aoc.hpp"
#include <iostream>
#include "grid.hpp"


int day04() {
    auto lines = read_lines("days/day04.txt");
    int accessibleRolls = 0; 
    // get line length for columns
    // get file line length for rows
    // make a class that is a grid of the appropriate size including
    // whether or not has TP, and whether or not it's accessible
    // load the grid: walk through each line and set a boolean for whether
    // or not there is paper at that point
    // use a separate method to figure out the adjacent cells given a 
    // point in the grid and it's edge points - unit test
    // set the < 4 adjacent accessibility value for each point
    // go through grid and calculate # of accessible rolls by
    // for each point, get a list of points to check
    // go through each point and count if there's a roll
    // add the total to the grid point
    // part 1
    int rows = lines.size();
    int cols = lines[0].size();
    Grid g(rows, cols);
    for (int r=0; r<rows; r++)
    {
      const auto &line = lines[r];
      for (int c=0; c<cols; c++)
      {
         if (line[c] == '@')
         {
            g.at(r,c).value = true;
         }
      }
    }
   for (int r=0; r<rows; r++)
    {
      const auto &line = lines[r];
      for (int c=0; c<cols; c++)
      {
         if (line[c] == '@')
         {
            std::vector<std::array<int, 2>> points;      
            points = g.neighbours(r,c);
            int adjacentRolls = 0;
            for (const auto &point : points)
            {
               if(g.at(point[0], point[1]).value == true)
               {
                  adjacentRolls++;
               }
            }   
            if (adjacentRolls < 4)
            {
               accessibleRolls++; 
            }
         }
      }
    }

      std::cout << "Part1: " <<  accessibleRolls << "\n";

    // part 2
   bool rollRemoved = true;
   accessibleRolls = 0;  
   while (rollRemoved)
   {
      rollRemoved = false;
      for (int r=0; r<rows; r++)
      {
         for (int c=0; c<cols; c++)
         {
            if (g.at(r,c).value)
            {
               std::vector<std::array<int, 2>> points;      
               points = g.neighbours(r,c);
               int adjacentRolls = 0;
               for (const auto &point : points)
               {
                  if(g.at(point[0], point[1]).value == true)
                  {
                     adjacentRolls++;
                  }
               }   
               if (adjacentRolls < 4)
               {
                  accessibleRolls++; 
                  g.at(r, c).toBeRemoved = true;
                  rollRemoved = true;
               }
            }
         }
      }
      g.removeFlaggedPoints();
   }
    std::cout << "Part2: " << accessibleRolls << "\n";

    return 0;
}
