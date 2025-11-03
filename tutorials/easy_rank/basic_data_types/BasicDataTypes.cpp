#include "BasicDataTypes.h"

#include <iostream>
#include <cstdio>

int BasicDataTypesNS::basic_data_types_print() {
    // Complete the code.
    
    std::string i;
    std::string l;
    std::string c;
    std::string f;
    std::string d;
    
    std::cin >> i >> l >> c >> f >> d;
    std::cout << i << "\n";
    std::cout << l << "\n";
    std::cout << c << "\n";
    std::cout << f << "\n";
    std::cout << d << "\n";
    
    return 0;
}