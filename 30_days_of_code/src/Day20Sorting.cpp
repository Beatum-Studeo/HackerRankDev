#include "../include/Day20Sorting.h"

#include <functional>
#include <iostream>
#include <string>
#include <vector>

void Day20SortingNS::bubbleSort(std::vector<int> a)
{
    int n = a.size();
    int swapsSum = 0;
    for (int i = 0; i < n; i++) {
        // Track number of elements swapped during a single array traversal
        int numberOfSwaps = 0;
    
        for (int j = 0; j < n - 1; j++) {
            // Swap adjacent elements if they are in decreasing order
            if (a[j] > a[j + 1]) {
                std::swap(a[j], a[j + 1]);
                numberOfSwaps++;
                swapsSum++;
            }
        }
    
        // If no elements were swapped during a traversal, array is sorted
        if (numberOfSwaps == 0) {
            break;
        }
    }
    /**
    Array is sorted in 5 swaps.
    First Element: 1
    Last Element: 4
    */
    std::cout << "Array is sorted in " << swapsSum << " swaps." << "\n";
    std::cout << "First Element: " << a[0] << "\n";
    std::cout << "Last Element: " << a[n -1] << "\n";
}

int Day20SortingNS::day20Sorting()
{
    std::string n_temp;
    getline(std::cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    std::string a_temp_temp;
    getline(std::cin, a_temp_temp);

    std::vector<std::string> a_temp = split(rtrim(a_temp_temp));

    std::vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }

    // Write your code here
    bubbleSort(a);
    
    return 0;
}

std::string Day20SortingNS::ltrim(const std::string &str) {
    std::string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(std::ptr_fun<int, int>(isspace)))
    );

    return s;
}

std::string Day20SortingNS::rtrim(const std::string &str) {
    std::string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(std::ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

std::vector<std::string> Day20SortingNS::split(const std::string &str) {
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
