#ifndef INVALID_CHECK_HPP
#define INVALID_CHECK_HPP
#include <iostream>

// Check if a number is invalid based on some criteria
bool invalidCheck(long long value) {
    std::string str = std::to_string(value);
    
    if (str.length()%2 == 1) {
        return false;
    }
    int mid = str.length()/2;
    for (int i=0; i<mid; i++) {
        if (str[i] != str[mid + i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> getDigitFactors(int num) {
    std::vector<int> factors;
    for (int i = 2; i <= 20; i++) {
        if (num % i == 0) {
            factors.push_back(i);
        }
    }
    return factors;
}

bool checkAllSame(std::vector<int> values)
{
   for (int i=0; i < values.size()-1; i++){
      if (values[i]!=values[i+1])
      {
         return(false);
      }
   }
   return(true);
}
bool checkRepetitions(const std::string& str, int factor, int blockSize) {
    
   for (int i=0; i<blockSize; i++)
   {
      std::vector<int> values;
      // std::cout << "\t" << i;
      for (int j=0; j<factor; j++)
      {
         // put all values into a vector
         // std::cout << "\t" << j;
         values.push_back(str[j*blockSize+i]);
      }
      // std::cout << "\n check: ";
      // for (char value : values)
      // {
      //    std::cout << value<<" ";
      // }
      // std::cout << "\t\t";
     
      // check those are all the same
      if(!checkAllSame(values))
      {
         return(false);
         // std::cout << "not same\n";
      }
   }
   // std::cout << "same\n";
   return (true);
}
// Part 2 version of invalidCheck
bool invalidCheckPt2(long long value) {
   std::string str = std::to_string(value);
   std::vector<int> factors = getDigitFactors(str.length());

// bin the groups into # of factors of block size
// 123123
// ex. factors 3, 2, block size 2, 3
   // std::cout << value;
   for (int factor : factors) {
      int blockSize = str.length() / factor;
      // std::cout << "\t" << "factor: " << factor << "\t" << "blockSize: " << blockSize << "\n";
      if (checkRepetitions(str, factor, blockSize)) {
         return true;
      }
   }
   return false;
}

#endif
