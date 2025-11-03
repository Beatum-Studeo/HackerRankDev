#include "MapsStlTutorial.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int MapsStlTutorialNS::maps_stl_tutorial() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int queries, query_type, score;
    string student_name;
    cin >> queries;
    map<string, int> student_scores;
    for (int i = 0; i < queries; i++)
    {
        cin >> query_type >> student_name;
        if (query_type == 1)
        {
            cin >> score;
            if (student_scores.contains(student_name))
            {
                int original_score = student_scores[student_name];
                student_scores[student_name] = original_score + score;
            }
            else
            {
                student_scores.insert(make_pair(student_name, score));
            }
        }
        else if (query_type == 2)
        {
            student_scores.erase(student_name);
        }
        else if (query_type == 3)
        {
            if (student_scores.contains(student_name))
            {
                score = student_scores[student_name];
            }
            else
            {
                score = 0;
            }
            cout << score << "\n";
        }
    }
    return 0;
}
