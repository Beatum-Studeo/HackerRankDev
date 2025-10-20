#include "FunctionsTutorials.h"

#include <cstdio>
#include <vector>

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int FunctionsTutorialsNS::max_of_four(int a, int b, int c, int d)
{
    std::vector<int> numbers = {a, b, c, d};
    return *std::max_element(numbers.begin(), numbers.end());
}

int FunctionsTutorialsNS::functionsTutorials() {
    int a, b, c, d;
    scanf_s("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}