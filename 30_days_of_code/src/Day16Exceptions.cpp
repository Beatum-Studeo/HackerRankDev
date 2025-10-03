#include "../include/Day16Exceptions.h"

#include <iostream>
#include <string>

int Day16ExceptionsNS::day16Exceptions()
{
    std::string S;
    getline(std::cin, S);

    try
    {
        int output;
        output = std::stoi(S);
        std::cout << output << std::endl;
    }
    catch(...)
    {
        std::cout << "Bad String" << std::endl;
    }
    
    return 0;
}
