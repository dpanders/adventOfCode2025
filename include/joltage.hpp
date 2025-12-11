#ifndef SAFE_HPP
#define SAFE_HPP

#include <iostream>

/*
   From a string buffer, return the max value position
*/
int getMaxDigitBetweenPositions(const std::string& str, int start, int finish)
{
   int maxJoltage = 0;
   int pos = start;
   maxJoltage = str[start] - '0';
   for (int i=start; i<=finish; i++)
   {
      if (str[i] - '0' > maxJoltage)
      {
         pos = i;
         maxJoltage = str[i]-'0';
      }
   }

   return(pos);
}
#endif