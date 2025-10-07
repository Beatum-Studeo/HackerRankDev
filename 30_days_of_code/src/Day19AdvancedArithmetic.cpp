#include "../include/Day19AdvancedArithmetic.h"

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>

class AdvancedArithmetic{
public:
    virtual int divisorSum(int n)=0;
};
class Calculator : public AdvancedArithmetic {
public:
    int divisorSum(int n) {
        std::vector<int> divisors;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                divisors.push_back(i);
            }
        }
        int sum = 0;
        for (int divisor : divisors)
        {
            sum += divisor;
        }
        return sum;
    }
};

int Day19AdvancedArithmeticNS::day19AdvancedArithmetic(){
    int n;
    std::cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator(); 
    int sum = myCalculator->divisorSum(n);
    std::cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}