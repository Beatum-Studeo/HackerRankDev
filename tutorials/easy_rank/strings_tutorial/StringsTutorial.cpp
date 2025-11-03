#include "StringsTutorial.h"
#include <iostream>
#include <string>

int StringsTutorialNS::strings_tutorial() {
    // Complete the program

    // input
    std::string a,b;
    char a_first, b_first;
    std::cin >> a >> b;

    // output
    std::cout << a.size() << " " << b.size() << "\n";
    std::cout << a + b << "\n";
    a_first = a[0];
    b_first = b[0];
    a[0] = b_first;
    b[0] = a_first;
    std::cout << a << " " << b << "\n";
    
    return 0;
}