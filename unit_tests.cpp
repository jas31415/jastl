/*
	unit-tests.cpp is the file where unit tests are performed with the wrapper classes
	the main function is therefore also defined here

	note for developers
		since this program is not complicated but needs to compile in all standards
		i advise you to default to C++98 features whenever possible
*/

#include <iostream>

#include "example.h"

int main()
{
	const std::string welcomeMessage = "Welcome to the unit tester for jastl!";
	const std::string helpMessage =
		"\nConsider the following\n"
		"\ttest -e, --everything\t\tPerforms unit tests on all headers\n"
		"\test -a, --available\t\tPerforms unit tests on all headers available in this C++ Standard version\n"
		"\ttest header1 header2 ...\tPerforms unit tests on each header listed\n"
		"\tlist -e, --everything\t\tLists all headers\n"
		"\tlist -a, --available\t\tLists all header available in this C++ Standard version\n"
		"\tstd\t\t\t\tShows the C++ Standard version currently being used\n"
		"\tjastl\t\t\t\tShows the jastl version currently being used\n"
		"\thelp\t\t\t\tShows this menu\n";

	// the input length is 18 because the longest valid character sequence is "condition_variable", any input longer than this would be invalid
	char input[18]( "" );

	std::cout << welcomeMessage << helpMessage << std::endl;

	while (true)
	{
		break;
	}

	// Singleton<Example> s{};
	

	std::cout << "Press any key to exit the terminal." << std::endl;
	std::cin.get();

	return 0;
}