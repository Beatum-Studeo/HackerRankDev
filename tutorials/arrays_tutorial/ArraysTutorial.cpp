#include "ArraysTutorial.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>


int ArraysTutorialNS::arrays_tutorial() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int count;
    std::cin >> count;
    int* arr = new int[count];
    for (int i = 0; i < count; i++)
    {
        std::cin >> arr[i];
    }
    std::string output = "";
    for (int i = count - 1; i >= 0; i--)
    {
        output += std::to_string(arr[i]);
        if (i > 0)
        {
            output += " ";
        }
    }
    std::cout << output;
    return 0;
}

