#include "ConditionalStatements.h"

#include <algorithm>
#include <functional>
#include <iostream>
#include <map>
#include <string>



int ConditionalStatementsNS::conditional_statements()
{
    std::string n_temp;
    getline(std::cin, n_temp);

    int n = std::stoi(ltrim(rtrim(n_temp)));

    // Write your code here
    std::map<int,std::string> Numbers =
    {
        {1, "one"},
        {2, "two"},
        {3, "three"},
        {4, "four"},
        {5, "five"},
        {6, "six"},
        {7, "seven"},
        {8, "eight"},
        {9, "nine"}
    };
    
    std::string output;
    if (n < 10 )
    {
        output = Numbers[n];
    }
    else
    {
        output = "Greater than 9";
    }
    std::cout << output << "\n";
    
    return 0;
}

std::string ConditionalStatementsNS::ltrim(const std::string &s) {
    std::string temp(s);
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

std::string ConditionalStatementsNS::rtrim(const std::string &s) {
    std::string temp(s);
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
