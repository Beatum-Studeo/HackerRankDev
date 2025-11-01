#include "LowerBoundStl.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int LowerBoundStlNS::lower_bounds_stl_tutorial() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    // get numbers vector
    int n_size;
    std::cin >> n_size;
    std::vector<int> numbers(n_size);
    for (int i = 0; i < n_size; i++)
    {
        std::cin >> numbers[i];
    }
    // std::sort (v.begin(), v.end());  // pre-sorted

    // query results
    int q_size;
    std::cin >> q_size;
    for (int i = 0; i < q_size; i++)
    {
        int query;
        std::cin >> query;

        std::vector<int>::iterator lower,upper;
        lower = std::lower_bound (numbers.begin(), numbers.end(), query); 
        upper = std::upper_bound (numbers.begin(), numbers.end(), query);
        int lower_index = lower - numbers.begin();
        int upper_index = upper - numbers.begin();
        if (query == numbers[lower_index])
        {
            cout << "Yes " << lower_index + 1 << "\n";
        }
        else
        {
            cout << "No " << upper_index + 1 << "\n";
        }
    }
    
    return 0;
}
