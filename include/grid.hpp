#ifndef GRID_HPP
#define GRID_HPP
#include <iostream>
#include <vector>
#include <stdexcept>







// Struct representing each cell / point
struct Point {
    bool value = false;     
    int neighbors = 0; 
};

class Grid {
private:
    int rows_, cols_;
    std::vector<Point> data_; // flat storage

public:
    // Constructor
    Grid(int rows, int cols)
        : rows_(rows), cols_(cols), data_(rows * cols) {}

    // Access element at (r, c) with bounds checking
    Point& at(int r, int c) {
        if (r < 0 || r >= rows_ || c < 0 || c >= cols_)
            throw std::out_of_range("Grid::at out of bounds");
        return data_[r * cols_ + c];
    }

    const Point& at(int r, int c) const {
        if (r < 0 || r >= rows_ || c < 0 || c >= cols_)
            throw std::out_of_range("Grid::at out of bounds");
        return data_[r * cols_ + c];
    }

    // Optional: getters for rows and columns
    int rows() const { return rows_; }
    int cols() const { return cols_; }

   /*
   Take a grid size of cols and rows, and a point of x, y and 
   return a vector of the points adjacent.
   Assume cols and rows are real size and x, y points are 0 indexed
   ex. for cols=2 and rows=3, x=2 or y=3 is an invalid point
   */
   std::vector<std::array<int,2>> neighbours(int c, int r) {
      std::vector<std::array<int, 2>> points;
      // cols
      for (int i=c-1; i<=c+1; i++)
      {
         // rows
         for (int j=r-1; j<=r+1; j++)
         {
            if (((i==c) && (j==r)) ||
               (i<0) || (j<0) || (i>=cols_) || (j>=rows_))
            {
               // do nothing, this is the point sent in or 
               // an invalid one
            } 
            else
            {
               points.push_back({i, j});
            }
         }
      }
      return(points);
   }
};

#endif
