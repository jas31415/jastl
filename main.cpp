/*
	main.cpp is the file where unit tests are performed on the wrapper classes

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
		"\thelp\t\t\t\tShows this menu\n"
		"\tquit\t\t\t\tFinishes the program\n";

	// string container for the command fetched from user input
	String cmd;

	// the argument length is 18 because the longest valid character sequence is "condition_variable", any argument longer than this would be invalid
	const int maxArgLen = 18;

	// argument to be substringed from the command
	String arg;

	// 
	size_t prev_idx = 0;

	// std::cout << welcomeMessage << helpMessage << std::endl;

	while (true)
	{
		// requesting command
		std::cout << "> ";
		std::getline(std::cin, cmd);

		//begin parsing arguments
		do
		{
			// obtain argument
			arg = cmd.substr(' ', prev_idx);
			prev_idx += arg.size() + 1;

			// validate argument
			if (arg.size() > maxArgLen)
			{
				std::cerr << "'" << arg << "' is not a valid argument." << std::endl;
				// TODO: add context sensitive feedback
				break;
			}
		}
		while (prev_idx < cmd.size());
	}

	return 0;
}

