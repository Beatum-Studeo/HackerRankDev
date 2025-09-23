/**
 * Day 4: Class vs. Instance
 * https://www.hackerrank.com/challenges/30-class-vs-instance/problem
 */

#pragma once
#include <iostream>

namespace Day4ClassVsInstanceNS
{
    class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    
    int day4ClassVsInstance();

}

