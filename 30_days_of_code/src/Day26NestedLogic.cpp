#include "../include/Day26NestedLogic.h"

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int Day26NestedLogicNS::day26NestedLogic() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int return_day;
    int return_month;
    int return_year;
    int due_day;
    int due_month;
    int due_year;
    std::cin >> return_day >> return_month >> return_year >> due_day >> due_month >> due_year;

    int fine;
    
    // If the book is returned on or before the expected return date, no fine will be charged
    if (return_day <= due_day && return_month <= due_month && return_year <= due_year)
    {
        fine = 0;
    }

    // If the book is returned after the expected return day but still within the same calendar month and year as the expected return date, fine = 15 Hackos x days late
    else if (return_day > due_day && return_month == due_month && return_year == due_year)
    {
        fine = 15 * (return_day - due_day);
    }

    // If the book is returned after the expected return month but still within the same calendar year as the expected return date, the fine = 500 Hackos x months late
    else if (return_month > due_month && return_year == due_year)
    {
        fine = 500 * (return_month - due_month);
    }

    // If the book is returned after the calendar year in which it was expected, there is a fixed fine of 10000 Hackos.
    else if (return_year > due_year)
    {
        fine = 10000;
    }
    
    std::cout << fine << "\n";
    
    return 0;
}
