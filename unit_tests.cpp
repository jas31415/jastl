/*
	unit-tests.cpp is the file where unit tests are performed with the wrapper classes
	the main function is therefore also defined here
*/

#include "example.h"

int main()
{
	Example* pExample{ new Example };
	delete pExample;

	return 0;
}