# hk-CodingConventions

## Documentation conventions:
- Doxygen should be used to define API for both C++ and python commenting in code
- Files, classes, structs, functions, variables, namespaces, enums should be commented using either preceding comment blocks or inline comments in the style (see Examples)
	
>
	/**
	 * \<type> <name>
	 * \brief <description>
	 *
	 * <longer description>
	 *
	 * @param <name> <description>
	 * @return <description>
	 */
  	   
Or

	///< inline comment
 
- Doxygen docs should be:
  	- Generated html stored in a dedicated branch (e.g. gh-pages for github)
	- Auto generated with PR merges
	- Hosted on Git solution with repository
- Other docs (introduction, installation, tutorials…etc)  should be:
 	- stored in a docs folder in each package on code branch. 
This allows tutorials and docs to be version controlled along with code. It also allows package managers to quickly and easily see if docs are updated in PRs for enforcement.
These docs can then be linked to on a single central wiki/read the docs or even in Doxygen as central web services desire.

## Naming Conventions:

### General:
- Avoid acronyms and short names (avoid HK in variable names use namespaces)
- Consistent naming for parts of the detector across packages

### Python: (python follow pep8)

### C++ :
- Each class should have a separate header and implementation file of the same name as the class
- C++ File name conventions
	>
 		name.hpp
		name.cpp
- Implementation file containing main 
	>
 		program_name.cpp
- Processor header definitions (capital with underscore word separators)
	>
 		#ifndef TEST_HEADER_H
		#define TEST_HEADER_H
- Includes should be in header or implementation as appropriate
- Class names (Capital camel case)
	>
  		class TestClass{
- All Functions (Capital camel case)
	>
 		 TestFunction1(int energy)
- Variables (lower case underscore separated)
	>
  		 int variable_type_1
- Single letter prefixes for variables 
	- Global variables (**g_**) [heavily discouraged]
	- Static member variables (**s_**)
	- Public member variables (no prefix) [getters & setters preferred]
	- Private member variable (**m_**)
	- Pointer member variables (**p_**)
	- Reference variables (**r_**)
	- Addition of prefixes private first then static then others underscore separated. (e.g. **m_s_p_**) 
	- Global statics all Caps apart from “**g_**” prefix
- Constants (all caps underscore separated) 
	>
 		 const MAX_HEIGHT = 8
- Class instances (lowercase underscore separated)
	>
 		TestClass bob_version_1;
- Don't use plain enums, use enum classes instead **Enum class** (“**enum_**” prefix and “**k**” prefix names)
	>
 		enum class enum_PMTTypes = {, kRed,, ...} 
- Namespaces (capital camel case)
	>
		namespace  MyNamespace {

## Style conventions:
To ensure a consistent coding style for all packages we propose using auto formatters on 
code. These should be run on automated hooks when PRs are made and also tested during CI checks


### Python: 
Use black auto formatter

### C++: 
For C++ use clang-format  with custom HK format here


## Other recommendations include use of:
- Python >3.8
- Use of Modern c++ practices (max C++17)
- Smart pointers 
- Avoid using deprecated features
- Namespaces
- Not including all of std (i.e. not  <using namespace std>)
- Custom Exception class to be specified for all code
- US spellings 
- Getters and setters should be thread safe
- Compiler warnings should be addressed, rather than ignored (all warnings are errors)
- Defined a set of standard compiler flags (in progress)
- Avoid C style arrays, use standard containers e.g. vectors
- Centralised **#define** constants to avoid conflicts


