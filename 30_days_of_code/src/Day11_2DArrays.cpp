#include "../include/Day11_2DArrays.h"

#include <functional>
#include <iostream>
#include <string>
#include <vector>

int Day11_2DArraysNS::day11_2DArrays()
{
    std::vector<std::vector<int>> arr(6);

    for (int i = 0; i < 6; i++)
    {
        arr[i].resize(6);

        std::string arr_row_temp_temp;
        getline(std::cin, arr_row_temp_temp);

        std::vector<std::string> arr_row_temp = split(rtrim(arr_row_temp_temp));

        for (int j = 0; j < 6; j++)
        {
            int arr_row_item = stoi(arr_row_temp[j]);

            arr[i][j] = arr_row_item;
        }
    }

    int max_hr_glass_value = -64; // -9 * 7 = -63 + (-1) // min - 1
    for (int row = 0; row < 4; row++)
    {
        for (int col_shift = 0; col_shift < 4; col_shift++)
        {
            int temp_value = 0;
            temp_value += arr[row][0 + col_shift] + arr[row][1 + col_shift] + arr[row][2 + col_shift];
            temp_value += arr[row + 1][1 + col_shift];
            temp_value += arr[row + 2][0 + col_shift] + arr[row + 2][1 + col_shift] + arr[row + 2][2 + col_shift];

            if (temp_value > max_hr_glass_value)
            {
                max_hr_glass_value = temp_value;
            }
        }
    }

    std::cout << max_hr_glass_value << std::endl;
    
    return 0;
}

std::string Day11_2DArraysNS::ltrim(const std::string& str)
{
    std::string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(std::ptr_fun<int, int>(isspace)))
    );

    return s;
}

std::string Day11_2DArraysNS::rtrim(const std::string& str)
{
    std::string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), std::not1(std::ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

std::vector<std::string> Day11_2DArraysNS::split(const std::string& str)
{
    std::vector<std::string> tokens;

    std::string::size_type start = 0;
    std::string::size_type end = 0;

    while ((end = str.find(" ", start)) != std::string::npos)
    {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
