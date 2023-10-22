#include <Constants.hpp> // defined constants stored in seperate central header
#include <MyClass.hpp> // each class should have it's own hpp and cpp file one per class with the same name as the class 

/**
 * \file program_name.cpp
 * \brief main function of program
 *
 * more detailed description
 */

// (please dont ever use globals) but if you must global variables 'g_' prefix and lower case underscore seperated (please dont ever use globals)
int g_my_global_variable = 0; ///< simple global variable example

using namespace MyNameSpace; //namespaces capital cammel case

/**
 * \enum enum_MyEnum
 * \brief enum description
 *
 * detailed description
 */

// please use enum classes not simple enums to avoid name conflicts. enums should have 'enum_' prefix and then use capital cammel case. enum variables can use 'k' prefix to be consistent with root.
enum class enum_MyEnum { 
  kValue1, ///< value description
    kValue2 ///< value description
    }; 

int main(int argc, char* argv[]){

  int my_variable_1 = 0; // variables lower case underscore seperated
  float my_variable_2 = 0.0; 
  double* p_my_variable_3 = 0;  // pointer variables 'p_' prefix, lower case underscore seperate
  const int MY_CONST_4 = 0;  // consts and defined variables all caps underscore seperated  

  MyClass my_class;  //class instances follow same naming as variables, lower case underscore seperated

  my_class.MyFunction1(my_variable_1, p_my_variable_3, my_variable_2);

  
  return 0;

}
