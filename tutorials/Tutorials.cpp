#include "Tutorials.h"

#include <iostream>

#include "basic_data_types/BasicDataTypes.h"
#include "conditional_statements/ConditionalStatements.h"

int TutorialsNS::basic_data_types_print() {
    return BasicDataTypesNS::basic_data_types_print();
}

int TutorialsNS::conditional_statements() {
    return ConditionalStatementsNS::conditional_statements();
}

void TutorialsNS::tutorials()
{
    std::cout << "Tutorials!\n";
    //basic_data_types_print();
    conditional_statements();
}