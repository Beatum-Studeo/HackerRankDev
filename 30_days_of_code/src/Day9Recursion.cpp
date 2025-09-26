#define _CRT_SECURE_NO_WARNINGS
#include "../include/Day9Recursion.h"

#include <functional>
#include <iostream>
#include <fstream>
#include <filesystem> // Requires C++17


/*
 * Complete the 'factorial' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int Day9RecursionNS::factorial(int n) {
    if(n > 1){
        return n * factorial(n - 1);
    }
    else {
        return 1;
    }
}

int Day9RecursionNS::day9Recursion()
{
    //std::ofstream fout(".\\OUTPUT_PATH\\Day9Recursion.txt");

    std::string n_temp;
    getline(std::cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    int result = factorial(n);

    //fout << result << "\n";
    std::cout << result << std::endl;

    //fout.close();

    return 0;
}

std::string Day9RecursionNS::ltrim(const std::string &str) {
    std::string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), std::not1(std::ptr_fun<int, int>(isspace)))
    );

    return s;
}

std::string Day9RecursionNS::rtrim(const std::string &str) {
    std::string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), std::not1(std::ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
