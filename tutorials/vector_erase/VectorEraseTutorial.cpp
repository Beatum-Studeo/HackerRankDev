#include "VectorEraseTutorial.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int VectorEraseTutorialNS::vector_erase_tutorial() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size;
    std::cin >> size;
    std::vector<int> numbers_vector(size);
    for (int i = 0; i < size; i++)
    {
        std::cin >> numbers_vector[i];
    }
    int query_1_remove, query_2_remove_range_start, query_2_remove_range_end;
    std::cin >> query_1_remove >> query_2_remove_range_start >> query_2_remove_range_end;
    numbers_vector.erase(numbers_vector.begin()+query_1_remove - 1);
    numbers_vector.erase(numbers_vector.begin()+query_2_remove_range_start - 1, numbers_vector.begin()+query_2_remove_range_end - 1);

    size = numbers_vector.size();
    std::cout << size << "\n";
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            std::cout << numbers_vector[i] << "\n";
        }
        else
        {
            std::cout << numbers_vector[i] << " ";
        }
    }
    
    return 0;
}

