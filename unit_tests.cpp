/*
	unit-tests.cpp is the file where unit tests are performed with the wrapper classes
	the main function is therefore also defined here
*/

#include <iostream>

#include "example.h"

int main()
{
	Example* pExample( new Example );
	delete pExample;
	Example example;

	std::cout << __cplusplus << std::endl;

	return 0;
}