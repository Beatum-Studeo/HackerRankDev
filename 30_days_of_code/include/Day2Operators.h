/**
 * Day 2: Operators
 * https://www.hackerrank.com/challenges/30-operators
 */


#ifndef HACKERRANKDEV_DAY2OPERATORS_H
#define HACKERRANKDEV_DAY2OPERATORS_H
#include <string>

namespace Day2OperatorsNS {
    class Day2Operators {
    public:
        Day2Operators() = default;
        ~Day2Operators() = default;
        std::string ltrim(const std::string &);
        std::string rtrim(const std::string &);
        void solve(double meal_cost, int tip_percent, int tax_percent);
        int day2Operators();
    };
}

#endif //HACKERRANKDEV_DAY2OPERATORS_H