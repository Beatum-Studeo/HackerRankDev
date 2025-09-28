#include "../include/Day10BinaryNumbers.h"
#include <functional>
#include <iostream>
#include <string>
#include <vector>

int Day10BinaryNumbersNS::day10BinaryNumbers()
{
    std::string n_temp;
    getline(std::cin, n_temp);

    int n = std::stoi(ltrim(rtrim(n_temp)));

    int decimal_num = n;

    std::vector<int> binary_digits; // To store the remainders

    // Perform repeated division by 2
    int temp_num = decimal_num;
    while (temp_num > 0)
    {
        binary_digits.push_back(temp_num % 2); // Store the remainder
        temp_num /= 2; // Divide by 2
    }

    // Reverse the vector to get the correct binary order
    std::reverse(binary_digits.begin(), binary_digits.end());

    int max_ones = 0;
    int final_max_ones = 0;
    int size = binary_digits.size();
    for (int index = 0; index < size; index++)
    {
        int binary_digit = binary_digits[index];
        if (binary_digit == 0)
        {
            if (max_ones > final_max_ones)
            {
                final_max_ones = max_ones;
            }
            max_ones = 0;
        }
        else
        {
            max_ones++;
        }
        if (index == size - 1)
        {
            if (max_ones > final_max_ones)
            {
                final_max_ones = max_ones;
            }
            break;
        }
    }
    std::cout << final_max_ones << std::endl;

    return 0;
}

std::string Day10BinaryNumbersNS::ltrim(const std::string& str)
{
    std::string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), std::not1(std::ptr_fun<int, int>(isspace)))
    );

    return s;
}

std::string Day10BinaryNumbersNS::rtrim(const std::string& str)
{
    std::string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), std::not1(std::ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
