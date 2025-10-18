#include "ConditionalStatements.h"

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

std::string ConditionalStatementsNS::ltrim(const std::string &str) {
    std::string s(str);

    s.erase(
        s.begin(),
        std::find_if(s.begin(), s.end(), std::not1(std::ptr_fun<int, int>(isspace)))
    );

    return s;
}

std::string ConditionalStatementsNS::rtrim(const std::string &str) {
    std::string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), std::not1(std::ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
