#include "Tutorials.h"

#include <iostream>

#include "basic_data_types/BasicDataTypes.h"

int TutorialsNS::basic_data_types_print() {
    return BasicDataTypesNS::basic_data_types_print();
}

void TutorialsNS::tutorials()
{
    std::cout << "Tutorials!\n";
    basic_data_types_print();
}