#include "StringStreamsTutorial.h"
#include <sstream>
#include <vector>
#include <iostream>
#include <optional>

std::vector<int> StringStreamsTutorialNS::parseInts(std::string str) {
    // Complete this function
    
    std::stringstream sstream(str);
    std::vector<int> result;
    
    int number;
    if (sstream >> number)
    {
        result.push_back(number);
        
        char delimiter;
        while (sstream >> delimiter)
        {
            sstream >> number;
            result.push_back(number);
        }
    }

    return result;
}

int StringStreamsTutorialNS::string_streams_tutorials() {
    std::string str;
    std::cin >> str;
    std::vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        std::cout << integers[i] << "\n";
    }
    
    return 0;
}