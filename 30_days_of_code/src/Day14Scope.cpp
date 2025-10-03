#include "../include/Day14Scope.h"

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

class Difference {
private:
    std::vector<int> elements;
  
public:
    int maximumDifference;

    Difference(std::vector<int> elements)
    {
        this->elements = elements;
    }

    // Add your code here
    void computeDifference()
    {
        int minVal = std::numeric_limits<int>::max(); // Initialize minVal to the largest possible int
        int maxVal = std::numeric_limits<int>::min(); // Initialize maxVal to the smallest possible int

        for (int i = 0; i < elements.size(); ++i) {
            if (elements[i] < minVal) {
                minVal = elements[i];
            }
            if (elements[i] > maxVal) {
                maxVal = elements[i];
            }
        }

        maximumDifference = std::abs(maxVal - minVal);
    }
    
}; // End of Difference class

int Day14ScopeNS::day14Scope() {
    int N;
    std::cin >> N;

    std::vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        std::cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();

    std::cout << d.maximumDifference;
    
    return 0;
}