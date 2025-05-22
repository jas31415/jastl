#pragma once
#include <string>
#include "macros.h"

/*
	jastd wrapper for std::string
*/
class String : public std::string
{
public:
	// C++98 body
#if __cplusplus == CPP98

	explicit String();
	String(const char* str_literal);
	String(const std::string& str);
	~String();

	String substr(char delim, size_t pos = 0);

#endif /* 98 */

	// C++11 body
#if __cplusplus >= CPP11

	explicit String() = default;
	String(const char* str_literal);
	String(const std::string& str);
	virtual ~String() = default;

	String substr(char delim, size_t pos = 0);

#endif /* 11 */
};

/*
	jastl unit-tester for the std::string wrapper
*/
