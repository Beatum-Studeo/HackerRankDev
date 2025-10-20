#include "Tutorials.h"

#include <iostream>

#include "basic_data_types/BasicDataTypes.h"
#include "conditional_statements/ConditionalStatements.h"
#include "for_loops/ForLoops.h"
#include "functions_tutorials/FunctionsTutorials.h"

int TutorialsNS::basic_data_types_print() {
    return BasicDataTypesNS::basic_data_types_print();
}

int TutorialsNS::conditional_statements() {
    return ConditionalStatementsNS::conditional_statements();
}

int TutorialsNS::for_loops_tutorials() {
    return ForLoopsNS::for_loops_tutorials();
}

int TutorialsNS::functionsTutorials() {
    return FunctionsTutorialsNS::functionsTutorials();
}

void TutorialsNS::tutorials()
{
    std::cout << "Tutorials!\n";
    //basic_data_types_print();
    //conditional_statements();
    //for_loops_tutorials();
    functionsTutorials();
}