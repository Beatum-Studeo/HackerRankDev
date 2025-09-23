/**
 * Day 3: Intro to Conditional Statements
 * https://www.hackerrank.com/challenges/30-conditional-statements/problem
 */

#ifndef HACKERRANKDEV_DAY3CONDITIONALSTATEMENTS_H
#define HACKERRANKDEV_DAY3CONDITIONALSTATEMENTS_H
#include <string>

namespace Day3ConditionalStatementsNS {
 class Day3ConditionalStatements {

 public:
  Day3ConditionalStatements() = default;
  ~Day3ConditionalStatements() = default;
  std::string ltrim(const std::string &);
  std::string rtrim(const std::string &);
  int day3ConditionalStatements();

 };
}

#endif //HACKERRANKDEV_DAY3CONDITIONALSTATEMENTS_H