#include "../include/Day25RunningTimeAndComplexity.h"

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

// Function to check if a number is prime
bool Day25RunningTimeAndComplexityNS::isPrime(int num) {
    // Numbers less than or equal to 1 are not prime
    if (num <= 1) {
        return false;
    }
    // 2 is the only even prime number
    if (num == 2) {
        return true;
    }
    // Even numbers greater than 2 are not prime
    if (num % 2 == 0) {
        return false;
    }
    // Check for divisibility by odd numbers from 3 up to the square root of num
    // If a number has a divisor greater than its square root, it must also have a divisor smaller than its square root.
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false; // Found a divisor, so it's not prime
        }
    }
    // If no divisors were found, the number is prime
    return true;
}

int Day25RunningTimeAndComplexityNS::day25RunningTimeAndComplexity() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int test_cases;
    std::cin >> test_cases;
    while (test_cases>0)
    {
        int test_case;
        std::cin >> test_case;
        
        if (isPrime(test_case))
        {
            std::cout << "Prime\n";
        }
        else{
            std::cout << "Not prime\n";
        }
        test_cases--;
    }
    return 0;
}
