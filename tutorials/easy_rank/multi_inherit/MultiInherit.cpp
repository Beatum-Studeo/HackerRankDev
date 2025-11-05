#include "MultiInherit.h"
#include <iostream>
using namespace std;

class MultiInheritNS::Triangle{
public:
    void triangle(){
        cout<<"I am a triangle\n";
    }
};

class MultiInheritNS::Isosceles : public Triangle{
public:
    void isosceles(){
        cout<<"I am an isosceles triangle\n";
    }
};

class MultiInheritNS::Equilateral : public Isosceles{
public:
    void equilateral(){
        cout<<"I am an equilateral triangle\n";
    }
};

int MultiInheritNS::multi_inherit(){
  
    Equilateral eqr;
    eqr.equilateral();
    eqr.isosceles();
    eqr.triangle();
    return 0;
}
