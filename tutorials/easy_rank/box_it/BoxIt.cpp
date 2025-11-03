#include "BoxIt.h"

#include <iostream>

//Implement the class Box  
class BoxItNS::Box
{

private:
    int length;
    int breadth;
    int height;

public:
    // Constructors: 
    Box()
    {
        length = 0;
        breadth = 0;
        height = 0;
    }
    Box(int length, int breadth, int height)
    {
        this->length=length;
        this->breadth=breadth;
        this->height=height;
    }
    Box(Box& box)
    {
        this->length=box.length;
        this->breadth=box.breadth;
        this->height=box.height;
    }
    int getLength(){return length;} // Return box's length
    int getBreadth (){return breadth;} // Return box's breadth
    int getHeight (){return height;}  //Return box's height

    // Return the volume of the box
    long long CalculateVolume()
    {
        long long volume = 0;
        long long l = this->length;
        long long b = this->breadth;
        long long h = this->height;
        volume = l * b * h;
        return volume;
    } 

    //Overload operator < as specified
    bool operator<(Box& b)
    {
        if (this->length < b.length)
        {
            return true;
        }
        else if (this->breadth < b.breadth && this->length == b.length)
        {
            return true;
        }
        else if (this->height < b.height && this->length == b.length && this->breadth == b.breadth)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

//Overload operator << as specified
std::ostream& BoxItNS::operator<<(std::ostream& out, BoxItNS::Box& B)
{
    return out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
}

void BoxItNS::check2()
{
    int n;
    std::cin>>n;
    Box temp;
    for(int i=0;i<n;i++)
    {
        int type;
        std::cin>>type;
        if(type ==1)
        {
            std::cout<<temp<< std::endl;
        }
        if(type == 2)
        {
            int l,b,h;
            std::cin>>l>>b>>h;
            Box NewBox(l,b,h);
            temp=NewBox;
            std::cout<<temp<< std::endl;
        }
        if(type==3)
        {
            int l,b,h;
            std::cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<temp)
            {
                std::cout<<"Lesser\n";
            }
            else
            {
                std::cout<<"Greater\n";
            }
        }
        if(type==4)
        {
            std::cout<<temp.CalculateVolume()<< std::endl;
        }
        if(type==5)
        {
            Box NewBox(temp);
            std::cout<<NewBox<< std::endl;
        }

    }
}

int BoxItNS::box_it_tutorial()
{
    check2();
    return 0;
}