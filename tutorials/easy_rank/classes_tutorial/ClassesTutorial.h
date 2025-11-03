#pragma once
#include <string>

namespace ClassesTutorialNS
{
    /*
    Enter code for class Student here.
    Read statement for specification.
    */
    class Student
    {
    private:
        int age;
        std::string first_name;
        std::string last_name;
        int standard;
    public:
        void set_age(int age){this->age = age;}
        void set_first_name(std::string first_name){this->first_name = first_name;}
        void set_last_name(std::string last_name){this->last_name = last_name;}
        void set_standard(int standard){this->standard = standard;}
        int get_age(){return age;}
        std::string get_first_name(){return first_name;}
        std::string get_last_name(){return last_name;}
        int get_standard(){return standard;}
        std::string to_string(){return std::to_string(age)+","+first_name+","+last_name+","+std::to_string(standard);}
    };
    int classes_tutorial();
};
