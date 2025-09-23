/**
 * Day 1: Data Types
 * https://www.hackerrank.com/challenges/30-data-types/problem?isFullScreen=true
 **/

#include "../include/Day1DataTypes.h"

#include <iomanip>
#include <iostream>
#include <limits>
#include <string>

using namespace std;

Day1DataTypes::Day1DataTypes() = default;
Day1DataTypes::~Day1DataTypes() = default;


int Day1DataTypes::day1DataTypes() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int myInt;
    double myDouble;
    string myString;

    cin >> myInt;
    cin >> myDouble;

    // Clear the input buffer before calling getline()
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    getline(cin, myString);

    cout << i + myInt << endl;
    cout << fixed << setprecision(1) <<  d + myDouble << endl;
    cout << s + myString << endl;

    return 0;
}