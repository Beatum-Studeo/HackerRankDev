#include "PointersTutorial.h"

#include <chrono>
#include <cmath>
#include <stdio.h>

void PointersTutorialNS::update(int *a,int *b) {
    // Complete this function
    int sum = *a + *b;
    int abs_value = std::abs(*a - *b);
    *a = sum;
    *b = abs_value;
}

int PointersTutorialNS::pointers_tutorial() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf_s("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}