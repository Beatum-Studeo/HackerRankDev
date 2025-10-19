#include "ForLoops.h"

#include <iostream>
#include <cstdio>
#include <map>

int ForLoopsNS::for_loops_tutorials() {
    // Complete the code.
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
    int start, end;
    std::cin >> start >> end;
    for (int index = start; index <= end; index++)
    {
        if (index < 10)
        {
            std::cout << Numbers[index] << "\n";
        }
        else
        {
            if (index % 2 == 0)
            {
                std::cout << "even\n";
            }
            else
            {
                std::cout << "odd\n";
            }
        }
    }
    return 0;
}
