#include "../include/Day17MoreExceptions.h"
#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>

//Write your code here
class Calculator
{
    public:
    int power(int base, int exponent)
    {
        if ( base < 0 || exponent < 0 )
        {
            throw std::invalid_argument("n and p should be non-negative");
        }
        else
        {
            return pow(base, exponent);
        }
    }
};

int Day17MoreExceptionsNS::day17MoreExceptions()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    std::cin>>T;
    while(T-->0){
        if(scanf_s("%d %d",&n,&p)==2){
            try{
                int ans=myCalculator.power(n,p);
                std::cout<<ans<< std::endl; 
            }
            catch(std::exception& e){
                std::cout<<e.what()<< std::endl;
            }
        }
    }
    return 0;
}