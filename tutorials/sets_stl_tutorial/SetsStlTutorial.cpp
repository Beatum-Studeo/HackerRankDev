#include "SetsStlTutorial.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
#include <iomanip>
using namespace std;


int SetsStlTutorialNS::sets_stl_tutorial() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set<int> numbers;
    set<int>::iterator itr;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int q_type, value;
        cin >> q_type >> value;
        switch (q_type)
        {
            case 1:
            numbers.insert(value);
            break;
            case 2:
            numbers.erase(value);
            break;
            case 3:
            itr = numbers.find(value);
            (itr != numbers.end())?cout << "Yes" << "\n":cout << "No" << "\n";
            break;
            default:
            cout << "Invalid input." << "\n";
            break;
        }
    }
    return 0;
}