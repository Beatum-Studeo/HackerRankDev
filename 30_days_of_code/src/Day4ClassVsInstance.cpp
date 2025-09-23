/**
 * Day 4: Class vs. Instance
 * https://www.hackerrank.com/challenges/30-class-vs-instance/problem
 */

#include "../include/Day4ClassVsInstance.h"


Day4ClassVsInstanceNS::Person::Person(int initialAge){
    // Add some more code to run some checks on initialAge
    if (initialAge < 0)
    {
        age = 0;
        std::cout << "Age is not valid, setting age to 0." << std::endl;
    }
    age = initialAge;
}

void Day4ClassVsInstanceNS::Person::amIOld(){
    // Do some computations in here and print out the correct statement to the console
    if (age < 13)
    {
        std::cout << "You are young." << std::endl;
    }
    else if (age >= 13 && age < 18)
    {
        std::cout << "You are a teenager." << std::endl;
    }
    else
    {
        std::cout << "You are old." << std::endl;
    }
}

void Day4ClassVsInstanceNS::Person::yearPasses(){
    // Increment the age of the person in here
    age++;
}

int Day4ClassVsInstanceNS::day4ClassVsInstance(){
    int t;
    int age;
    std::cin >> t;
    for(int i=0; i < t; i++) {
        std::cin >> age;
        Day4ClassVsInstanceNS::Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
            p.yearPasses(); 
        }
        p.amIOld();

        std::cout << '\n';
    }

    return 0;
}