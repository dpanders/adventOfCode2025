#ifndef FRESH_HPP
#define FRESH_HPP
#include <iostream>

struct RawSections
{
   std::vector<std::string> ranges;
   std::vector<std::string> values;
};

RawSections split_sections(const std::vector<std::string> &lines)
{
   RawSections out;
   bool second = false;

   for (const auto &line : lines)
   {
      if (line.empty())
      {
         second = true;
         continue;
      }

      if (!second)
         out.ranges.push_back(line);
      else
         out.values.push_back(line);
   }

   return out; // NRVO, no copy
}

std::vector<std::pair<long long, long long>> parse_ranges(const std::vector<std::string> ranges)
{
   std::vector<std::pair<long long, long long>> parsed_ranges;

   for (const auto &r : ranges)
   {
      auto dash = r.find('-');
      long long lo = std::stoll(r.substr(0, dash));
      long long hi = std::stoll(r.substr(dash + 1));
      parsed_ranges.emplace_back(lo, hi);
   }
   return (parsed_ranges);
}

std::vector<long long> parse_values(const std::vector<std::string> values)
{
   std::vector<long long> parsed_values;;

   for (const auto &v : values)
   {
      parsed_values.push_back(std::stoll(v));
   }
   return(parsed_values);
}



#endif