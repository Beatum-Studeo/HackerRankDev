#include "../include/Day27UnitTesting.h"

#include <algorithm>
#include <array>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <cassert>
#include <set>

class TestDataEmptyArray
{
    public:
    static std::vector<int> get_array()
    {
        std::vector<int> empty_array = std::vector<int>(0);
        return empty_array;
    }
};

class TestDataUniqueValues
{
public:
    static std::vector<int> get_array()
    {
        std::vector<int> unique_array = std::vector<int>(5);
        unique_array[0] = 35;
        unique_array[1] = 5;
        unique_array[2] = 2;
        unique_array[3] = 23;
        unique_array[4] = 107;
        return unique_array;
    }
    static int get_expected_result()
    {
        return 2;
    }
};

class TestDataExactlyTwoDifferentMinimums
{
public:
    static std::vector<int> get_array()
    {
        std::vector<int> exactly_two_different_minimums = std::vector<int>(5);
        exactly_two_different_minimums[0] = 5;
        exactly_two_different_minimums[1] = 3;
        exactly_two_different_minimums[2] = 2;
        exactly_two_different_minimums[3] = 4;
        exactly_two_different_minimums[4] = 2;
        return exactly_two_different_minimums;
    }
    static int get_expected_result()
    {
        return 2;
    }
};



int Day27UnitTestingNS::minimum_index(std::vector<int> seq) {
    if (seq.empty()) {
        throw std::invalid_argument("Cannot get the minimum value index from an empty sequence");
    }
    int min_idx = 0;
    for (int i = 1; i < seq.size(); ++i) {
        if (seq[i] < seq[min_idx]) {
            min_idx = i;
        }
    }
    return min_idx;
}


void Day27UnitTestingNS::TestWithEmptyArray() {
    try {
        auto seq = TestDataEmptyArray::get_array();
        auto result = minimum_index(seq);
    } catch (std::invalid_argument& e) {
        return;
    }
    assert(false);
}

void Day27UnitTestingNS::TestWithUniqueValues() {
    auto seq = TestDataUniqueValues::get_array();
    assert(seq.size() >= 2);

    assert(std::set<int>(seq.begin(), seq.end()).size() == seq.size());

    auto expected_result = TestDataUniqueValues::get_expected_result();
    auto result = minimum_index(seq);
    assert(result == expected_result);
}

void Day27UnitTestingNS::TestWithExactlyTwoDifferentMinimums() {
    auto seq = TestDataExactlyTwoDifferentMinimums::get_array();
    assert(seq.size() >= 2);

    auto tmp = seq;
    std::sort(tmp.begin(), tmp.end());
    assert(tmp[0] == tmp[1] and (tmp.size() == 2 or tmp[1] < tmp[2]));

    auto expected_result = TestDataExactlyTwoDifferentMinimums::get_expected_result();
    auto result = minimum_index(seq);
    assert(result == expected_result);
}

int Day27UnitTestingNS::day27UnitTesting() {
    TestWithEmptyArray();
    TestWithUniqueValues();
    TestWithExactlyTwoDifferentMinimums();
    std::cout << "OK" << std::endl;
    return 0;
}
