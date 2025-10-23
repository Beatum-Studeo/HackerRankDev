#include "VariableSizedArraysTutorial.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>

int VariableSizedArraysTutorialNS::variable_sized_arrays_tutorial() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    std::stringstream ss;
    std::string line;
    std::string temp_s;
    
    // read test params for number of arrays and the query index pairs to print
    getline(std::cin, line);
    ss = std::stringstream(line);
    std::vector<int> test_case;
    while (std::getline(ss, temp_s, ' '))
    {
        test_case.push_back(std::stoi(temp_s));
    }
    int n = test_case[0];
    int q = test_case[1];
    int j, k;

    // get the arrays
    std::vector<std::vector<int>> arrays(n);
    for (int i = 0; i < n; i++)
    {
        getline(std::cin, line);
        ss = std::stringstream(line);
        j = k = 0;
        while (std::getline(ss, temp_s, ' '))
        {
            if (k == 0)
            {
                k = std::stoi(temp_s);
                arrays[i] = std::vector<int>(k);
            }
            else
            {
                arrays[i][j] = std::stoi(temp_s);
                j++;
            }
        }
    }

    // get queries
    std::vector<std::vector<int>> queries(q);
    for (int i = 0; i < q; i++)
    {
        getline(std::cin, line);
        ss = std::stringstream(line);
        while (std::getline(ss, temp_s, ' '))
        {
            queries[i].push_back(std::stoi(temp_s));
        }
    }

    // output queries
    for (std::vector<int>::size_type query = 0; query < queries.size(); query++)
    {
        int i = queries[query][0];
        int j = queries[query][1];
        int value = arrays[i][j];
        std::cout << value << "\n";
    }
    
    return 0;
}

