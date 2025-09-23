/**
* Day 5: Loops
 * https://www.hackerrank.com/challenges/30-loops/problem
 **/

#include "../include/Day5Loops.h"

#include <functional>
#include <iostream>
#include <string>

int Day5LoopsNS::day5Loops()
{
    std::string n_temp;
    getline(std::cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    
    int i = 1;
    while(i < 11){
        std::cout << n << " x " << i << " = " << n * i << std::endl;
        i++;
    }

    return 0;
}

std::string Day5LoopsNS::ltrim(const std::string &str) {
    std::string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), std::not1(std::ptr_fun<int, int>(isspace)))
    );

    return s;
}

std::string Day5LoopsNS::rtrim(const std::string &str) {
    std::string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(std::ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
