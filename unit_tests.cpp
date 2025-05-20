/*
	unit-tests.cpp is the file where unit tests are performed with the wrapper classes
	the main function is therefore also defined here

	note for developers
		since this program is not complicated but needs to compile in all standards
		i advise you to restrict yourself to C++98 features, and deal with deprecations using pre-processor statements
		i will leave you with a good resource for C++98 here: https://cplusplus.com/doc/oldtutorial/
*/

#include <iostream>

#include "string.h"

int main()
{
	const String welcomeMessage = "Welcome to the unit tester for jastl!";
	
	const String helpMessage =
		"\nConsider the following\n"
		"\ttest -e, --everything\t\tPerforms unit tests on all headers\n"
		"\test -a, --available\t\tPerforms unit tests on all headers available in this C++ Standard version\n"
		"\ttest header1 header2 ...\tPerforms unit tests on each header listed\n"
		"\tlist -e, --everything\t\tLists all headers\n"
		"\tlist -a, --available\t\tLists all header available in this C++ Standard version\n"
		"\tstd\t\t\t\tShows the C++ Standard version currently being used\n"
		"\tjastl\t\t\t\tShows the jastl version currently being used\n"
		"\thelp\t\t\t\tShows this menu\n";

	// the argument length is 18 because the longest valid character sequence is "condition_variable", any argument longer than this would be invalid
	// const int maxInputLength = 18;
	// char argument[maxInputLength];
	String command;

	// std::cout << welcomeMessage << helpMessage << std::endl;

	while (true)
	{
		// requesting command
		std::cout << "> ";
		std::getline(std::cin, command);

		//begin parsing arguments
		do
		{
			// if ();
			std::cout << __cplusplus;
		}
		while (false);

		break;
	}
	

	std::cout << "Press any key to exit the terminal." << std::endl;
	std::cin.get();

	return 0;
}

