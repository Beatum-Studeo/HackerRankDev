#pragma once
#include <string>
#include <vector>

namespace Day20SortingNS
{
    std::string ltrim(const std::string &);
    std::string rtrim(const std::string &);
    std::vector<std::string> split(const std::string &);
    void bubbleSort(std::vector<int> a);
    int day20Sorting();
};
