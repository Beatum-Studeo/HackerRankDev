/**
 * Day 3: Intro to Conditional Statements
 * https://www.hackerrank.com/challenges/30-conditional-statements/problem
 */

#include "../include/Day3ConditionalStatements.h"

#include <algorithm>
#include <functional>
#include <iostream>

using namespace Day3ConditionalStatementsNS;

int Day3ConditionalStatements::day3ConditionalStatements()
{
    std::string N_temp;
    getline(std::cin, N_temp);

    int N = stoi(ltrim(rtrim(N_temp)));

    const std::string WEIRD = "Weird";
    const std::string NOT_WEIRD = "Not Weird";
    std::string answer;

    // If is odd, print Weird
    if(N%2 > 0){
        answer = WEIRD;
    }

    // If is even and in the inclusive range of 2 to 5, print Not Weird
    else if (N > 1 && N < 6){
        answer = NOT_WEIRD;
    }

    // f is even and in the inclusive range of 6 to 20 , print Weird
    else if (N > 5 && N < 21){
        answer = WEIRD;
    }

    // If is even and greater than 20, print Not Weird
    else if (N > 20){
        answer = NOT_WEIRD;
    }
    else {
        std::cout << N << " Unknown" << std::endl;
    }

    std::cout << answer << std::endl;


    return 0;
}

std::string Day3ConditionalStatements::ltrim(const std::string &str) {
    std::string temp(str);
    // Trim leading whitespace
    auto first_non_space = std::find_if_not(temp.begin(), temp.end(), 
                                            [](unsigned char c){ return std::isspace(c); });
    temp.erase(temp.begin(), first_non_space);

    // Trim trailing whitespace
    auto last_non_space = std::find_if_not(temp.rbegin(), temp.rend(), 
                                           [](unsigned char c){ return std::isspace(c); });
    temp.erase(last_non_space.base(), temp.end());
    return temp;
}

std::string Day3ConditionalStatements::rtrim(const std::string &str) {
    std::string temp(str);
    // Trim leading whitespace
    auto first_non_space = std::find_if_not(temp.begin(), temp.end(), 
                                            [](unsigned char c){ return std::isspace(c); });
    temp.erase(temp.begin(), first_non_space);

    // Trim trailing whitespace
    auto last_non_space = std::find_if_not(temp.rbegin(), temp.rend(), 
                                           [](unsigned char c){ return std::isspace(c); });
    temp.erase(last_non_space.base(), temp.end());
    return temp;
}
