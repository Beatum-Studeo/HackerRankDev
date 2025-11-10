#include "Tutorials.h"

#include <iostream>

#include "easy_rank/arrays_tutorial/ArraysTutorial.h"
#include "easy_rank/basic_data_types/BasicDataTypes.h"
#include "easy_rank/box_it/BoxIt.h"
#include "easy_rank/classes_tutorial/ClassesTutorial.h"
#include "easy_rank/class_object_tutorial/ClassesObjectsTutorial.h"
#include "easy_rank/class_template/ClassTemplate.h"
#include "easy_rank/conditional_statements/ConditionalStatements.h"
#include "easy_rank/for_loops/ForLoops.h"
#include "easy_rank/functions_tutorials/FunctionsTutorials.h"
#include "easy_rank/inheritance_intro_tut/InheritanceIntroTut.h"
#include "easy_rank/lower_bound_stl/LowerBoundStl.h"
#include "easy_rank/maps_stl_tutorial/MapsStlTutorial.h"
#include "easy_rank/multi_inherit/MultiInherit.h"
#include "easy_rank/overload_operators/OverloadOperators.h"
#include "easy_rank/pointers_tutorial/PointersTutorial.h"
#include "easy_rank/rectangle_area/RectangleArea.h"
#include "easy_rank/sets_stl_tutorial/SetsStlTutorial.h"
#include "easy_rank/strings_tutorial/StringsTutorial.h"
#include "easy_rank/string_streams_tutorial/StringStreamsTutorial.h"
#include "easy_rank/structs_tutorial/StructsTutorial.h"
#include "easy_rank/variable_sized_arrays_tutorial/VariableSizedArraysTutorial.h"
#include "easy_rank/vector_erase/VectorEraseTutorial.h"
#include "easy_rank/vector_sort_tutorial/VectorSortTutorial.h"

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
    //maps_stl_tutorial();
    //inherit_intro_tut();
    //rectangle_area();
    //multi_inherit();
    //overload_operators();
    class_template();
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

int TutorialsNS::inherit_intro_tut() {
    return InheritanceIntroTutNS::inherit_intro_tut();
}

int TutorialsNS::rectangle_area() {
    return RectangleAreaNS::rectangle_area();
}

int TutorialsNS::multi_inherit() {
    return MultiInheritNS::multi_inherit();
}

int TutorialsNS::overload_operators() {
    return OverloadOperatorsNS::overload_operators();
}

int TutorialsNS::class_template() {
    return ClassTemplateNS::class_template();
}