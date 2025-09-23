/**
 * Day 3: Intro to Conditional Statements
 * https://www.hackerrank.com/challenges/30-conditional-statements/problem
 */

#include "../include/Day3ConditionalStatements.h"

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
    std::string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), std::not1(std::ptr_fun<int, int>(isspace)))
    );

    return s;
}

std::string Day3ConditionalStatements::rtrim(const std::string &str) {
    std::string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), std::not1(std::ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
