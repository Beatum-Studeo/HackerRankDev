/**
 * Day 2: Operators
 * https://www.hackerrank.com/challenges/30-operators
 *
 * Notes:
 * This was a dumb test. I had to round to an integer. Not actual percents for tip or tax.
 * Very confusing and does not explain any of this ridiculous logic.
 */

#include "../include/Day2Operators.h"

#include <functional>
#include <iostream>

using namespace Day2OperatorsNS;

/*
 * Complete the 'solve' function below.
 *
 * The function accepts following parameters:
 *  1. DOUBLE meal_cost
 *  2. INTEGER tip_percent
 *  3. INTEGER tax_percent
 */

void Day2Operators::solve(double meal_cost, int tip_percent, int tax_percent) {
    double meal = meal_cost;
    double tax = tax_percent/100.00 * meal;
    double tip = tip_percent/100.00 * meal;
    int total =  round(meal + tax + tip);
    std::cout << total << std::endl;
}

int Day2Operators::day2Operators()
{
    std::string meal_cost_temp;
    getline(std::cin, meal_cost_temp);

    double meal_cost = stod(ltrim(rtrim(meal_cost_temp)));

    std::string tip_percent_temp;
    getline(std::cin, tip_percent_temp);

    int tip_percent = stoi(ltrim(rtrim(tip_percent_temp)));

    std::string tax_percent_temp;
    getline(std::cin, tax_percent_temp);

    int tax_percent = stoi(ltrim(rtrim(tax_percent_temp)));

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}

std::string Day2Operators::ltrim(const std::string &str) {
    std::string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), std::not1(std::ptr_fun<int, int>(isspace)))
    );

    return s;
}

std::string Day2Operators::rtrim(const std::string &str) {
    std::string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), std::not1(std::ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
