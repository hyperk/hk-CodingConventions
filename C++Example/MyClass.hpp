#ifndef MY_CLASS_H // file definitions should be underscore seperated all caps definitions
#define MY_CLASS_H 

/**
 * \file MyClass.hpp
 * \brief breif class description
 *
 * detailed classs description
 */

/**
 * \namespace MyNameSpace
 * \brief a brief description if you want to
 *
 * This is wher you should describe the name in more detail and it's purpose. 
 *
 */
namespace MyNameSpace{ //capital camel case namespaces. namespaces should have preceeding Doxyen comment block.  

  /**
   * \class MyClass
   * \brief a brief description if you want to
   *
   * This is wher you should describe the class in more detail and it's purpose. This class is designed to demonstraite HK coding conventions
   *
   */
  class MyClass{  //capital camel case class names classes should have preceeding Doxygen comment block

    
  public:

    // function definitions in seperate cpp file where possible all funcitons should have comments
    MyClass(); ///< simple inline Doxygen brief comment for variables and functions without return or variables e.g default constructor

    /** 
     * \fn MyFunction1
     * \brief an example function
     *
     * example of how to define and document a function
     *
     * @param variable_1 description of vairable 1
     * @param p_variable_2 description of variable 2
     * @param r_variable_3 description of variable 3
     *
     * @return description of return type
     */
    void MyFunction1(int variable_1, double* p_variable_2, float &r_variable_3); //capital cammel case function names (same variable conventions for arguments as below) with preceeding Doxygen comment block.
 
    //variable names lower case underscore seperated (getters and setters prefered to public variables). variables should have Doxygen descriptions
    int my_variable_1; ///< variable to store x (can use a longer comment block if need longer desciption)
    
    //consts variables all caps underscore seperated
    const int MAX_VALUE = 5; ///< const to store x
    
  private:
    
    //private memner variable 'm_' prefix, names lower case underscore seperated;
    int m_my_variable_3; ///< breif variable description e.g. private variable to store x
    
    //private member static variable 'm_s_' prefix (alphabetical), names lower case underscore seperated;
    /**
     * \var m_s_my_variable_4
     * \brief breif var description
     * 
     * longer variable description
     */
    static int m_s_my_variable_4; ///< private static variable to store x
    
    //private memer pointer variable 'm_p_' prefix (alphabetical), names lower case underscore seperated;
    int* m_p_variable_5; ///< private pointer variable to store x
 
  };

}

#endif
