#include "VectorSortTutorial.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int VectorSortTutorialNS::vector_sort_tutorial() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size = 0;
    cin >> size;
    vector<int> v(size);
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    string s;
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            s += to_string(v[i]);
        }
        else
        {
            s += to_string(v[i]) + " ";
        }
    }
    cout << s << endl;
    return 0;
}