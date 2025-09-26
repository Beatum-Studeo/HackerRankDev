#include "../include/Day7Arrays.h"

#include <functional>
#include <iostream>
#include <string>
#include <vector>


int Day7ArraysNS::day7Arrays()
{
    std::string n_temp;
    getline(std::cin, n_temp);

    int n = std::stoi(Day7ArraysNS::ltrim(Day7ArraysNS::rtrim(n_temp)));

    std::string arr_temp_temp;
    getline(std::cin, arr_temp_temp);

    std::vector<std::string> arr_temp = Day7ArraysNS::split(Day7ArraysNS::rtrim(arr_temp_temp));

    std::vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);
        arr[i] = arr_item;
    }
    
    for (int i = n - 1; i >= 0; i--) {
        std::cout << arr[i] << " ";
    }
    
    return 0;
}

std::string Day7ArraysNS::ltrim(const std::string &str) {
    std::string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), std::not1(std::ptr_fun<int, int>(isspace)))
    );

    return s;
}

std::string Day7ArraysNS::rtrim(const std::string &str) {
    std::string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), std::not1(std::ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

std::vector<std::string> Day7ArraysNS::split(const std::string &str) {
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