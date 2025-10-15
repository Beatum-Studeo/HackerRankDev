#include "../include/Day28RegExPatternsIntroDatabases.h"

#include <algorithm>
#include <functional>
#include <iostream>
#include <map>
#include <string>
#include <vector>

int Day28RegExPatternsIntroDatabasesNS::day28RegExPatternsIntroDatabases()
{
    std::string N_temp;
    getline(std::cin, N_temp);

    int N = stoi(ltrim(rtrim(N_temp)));

    std::vector<std::string> names;
    for (int N_itr = 0; N_itr < N; N_itr++) {
        std::string first_multiple_input_temp;
        getline(std::cin, first_multiple_input_temp);

        std::vector<std::string> first_multiple_input = split(rtrim(first_multiple_input_temp));

        std::string firstName = first_multiple_input[0];

        std::string emailID = first_multiple_input[1];

        // check for @gmail
        if (emailID.find("@gmail.com") != std::string::npos)
        {
            names.push_back(firstName);
        }
        
    }

    std::sort(names.begin(), names.end());
    for (int i = 0; i < names.size(); i++)
    {
        std::cout << names[i] << std::endl;
    }

    return 0;
}

std::string Day28RegExPatternsIntroDatabasesNS::ltrim(const std::string &str) {
    std::string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), std::not1(std::ptr_fun<int, int>(isspace)))
    );

    return s;
}

std::string Day28RegExPatternsIntroDatabasesNS::rtrim(const std::string &str) {
    std::string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), std::not1(std::ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

std::vector<std::string> Day28RegExPatternsIntroDatabasesNS::split(const std::string &str) {
    std::vector<std::string> tokens;

    std::string::size_type start = 0;
    std::string::size_type end = 0;

    while ((end = str.find(" ", start)) != std::string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
