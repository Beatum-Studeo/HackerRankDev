#include "Tutorials.h"

#include <iostream>

#include "arrays_tutorial/ArraysTutorial.h"
#include "basic_data_types/BasicDataTypes.h"
#include "box_it/BoxIt.h"
#include "classes_tutorial/ClassesTutorial.h"
#include "class_object_tutorial/ClassesObjectsTutorial.h"
#include "conditional_statements/ConditionalStatements.h"
#include "for_loops/ForLoops.h"
#include "functions_tutorials/FunctionsTutorials.h"
#include "lower_bound_stl/LowerBoundStl.h"
#include "maps_stl_tutorial/MapsStlTutorial.h"
#include "pointers_tutorial/PointersTutorial.h"
#include "sets_stl_tutorial/SetsStlTutorial.h"
#include "strings_tutorial/StringsTutorial.h"
#include "string_streams_tutorial/StringStreamsTutorial.h"
#include "structs_tutorial/StructsTutorial.h"
#include "variable_sized_arrays_tutorial/VariableSizedArraysTutorial.h"
#include "vector_erase/VectorEraseTutorial.h"
#include "vector_sort_tutorial/VectorSortTutorial.h"

void TutorialsNS::tutorials()
{
    std::cout << "Tutorials!\n";
    //basic_data_types_print();
    //conditional_statements();
    //for_loops_tutorials();
    //functionsTutorials();
    //pointers_tutorial();
    //arrays_tutorial();
    //variable_sized_arrays_tutorial();
    //strings_tutorial();
    //string_streams_tutorials();
    //structs_tutorial();
    //classes_tutorial();
    //class_object_tutorial();
    //box_it_tutorial();
    //vector_sort_tutorial();
    //vector_erase_tutorial();
    //lower_bounds_stl_tutorial();
    //sets_stl_tutorial();
    maps_stl_tutorial();
}

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

int TutorialsNS::pointers_tutorial() {
    return PointersTutorialNS::pointers_tutorial();
}

int TutorialsNS::arrays_tutorial() {
    return ArraysTutorialNS::arrays_tutorial();
}

int TutorialsNS::variable_sized_arrays_tutorial() {
    return VariableSizedArraysTutorialNS::variable_sized_arrays_tutorial();
}

int TutorialsNS::strings_tutorial() {
    return StringsTutorialNS::strings_tutorial();
}

int TutorialsNS::string_streams_tutorials() {
    return StringStreamsTutorialNS::string_streams_tutorials();
}

int TutorialsNS::structs_tutorial() {
    return StructsTutorialNS::structs_tutorial();
}

int TutorialsNS::classes_tutorial() {
    return ClassesTutorialNS::classes_tutorial();
}

int TutorialsNS::class_object_tutorial() {
    return ClassesObjectsTutorialNS::class_object_tutorial();
}

int TutorialsNS::box_it_tutorial() {
    return BoxItNS::box_it_tutorial();
}

int TutorialsNS::vector_sort_tutorial() {
    return VectorSortTutorialNS::vector_sort_tutorial();
}

int TutorialsNS::vector_erase_tutorial() {
    return VectorEraseTutorialNS::vector_erase_tutorial();
}

int TutorialsNS::lower_bounds_stl_tutorial() {
    return LowerBoundStlNS::lower_bounds_stl_tutorial();
}

int TutorialsNS::sets_stl_tutorial() {
    return SetsStlTutorialNS::sets_stl_tutorial();
}

int TutorialsNS::maps_stl_tutorial() {
    return MapsStlTutorialNS::maps_stl_tutorial();
}