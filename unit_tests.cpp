/*
	unit-tests.cpp is the file where unit tests are performed with the wrapper classes
	the main function is therefore also defined here

	in theory, i'd like the unit tests to operate as below
		Consider the following:
    		test -a                       performs unit tests on all headers available in this c++ standard version
   			test -e                       performs unit tests on all headers regardless of availability
    		test <header1 header2 ...>    performs unit tests on each header listed
    		list -a                       lists all headers available in this c++ standard version
    		list -e                       lists all headers regardless of availability
    		std                           shows the c++ standard version currently being used
    		jastl                         shows the jastl version currently being used
    		help                          shows this menu
*/

#include <iostream>

#include "example.h"

int main()
{
	std::cout << "Press any key to exit the terminal." << std::endl;
	std::cin.get();

	return 0;
}