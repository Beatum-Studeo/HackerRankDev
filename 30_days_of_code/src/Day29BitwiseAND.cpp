#include "../include/Day29BitwiseAND.h"

#include <functional>
#include <iostream>
#include <string>
#include <vector>

/*
 * Complete the 'bitwiseAnd' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER N
 *  2. INTEGER K
 */

int Day29BitwiseANDNS::bitwiseAnd(int N, int K) {
    bool found = false;
    int max_bitwise_value = 0;
    for (int i = 1; i < N; i++)
    {
        for (int j = i + 1; j <= N; j++)
        {
            int bitwise_value = i & j;
            if (bitwise_value < K && bitwise_value > max_bitwise_value)
            {
                max_bitwise_value = bitwise_value;
            }

            if (max_bitwise_value == K - 1)
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            break;
        }
    }
    return max_bitwise_value;
}

int Day29BitwiseANDNS::day29BitwiseAND()
{
    //std::ofstream fout(getenv("OUTPUT_PATH"));

    std::string t_temp;
    getline(std::cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        std::string first_multiple_input_temp;
        getline(std::cin, first_multiple_input_temp);

        std::vector<std::string> first_multiple_input = split(rtrim(first_multiple_input_temp));

        int count = stoi(first_multiple_input[0]);

        int lim = stoi(first_multiple_input[1]);

        int res = bitwiseAnd(count, lim);

        std::cout << res << "\n";
    }

    //fout.close();

    return 0;
}

std::string Day29BitwiseANDNS::ltrim(const std::string &str) {
    std::string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), std::not1(std::ptr_fun<int, int>(isspace)))
    );

    return s;
}

std::string Day29BitwiseANDNS::rtrim(const std::string &str) {
    std::string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), std::not1(std::ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

std::vector<std::string> Day29BitwiseANDNS::split(const std::string &str) {
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
