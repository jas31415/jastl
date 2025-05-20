#include "string.h"
#include <stdexcept>

/*
	String
*/

// C++98 definitions
#if USING_STD(CPP98)

String::String() : std::string() { }
String::String(const char* str_literal) : std::string(str_literal) { }
String::String(const std::string& str) : std::string(str) { }
String::~String() { }

/**
 * 	@brief  Get a substring using a delimiter.
 * 	@param delim  Character to terminate substring at. Substring terminates at '0/' if no case of @a delim is found.
 *  @param pos  Position to start the substring from. (default 0)
 *  @return  The new string.
 *  @throw  std::out_of_range If pos > size().
 * 
 *  Constructs a new string containing all characters between index @a pos and @a delim.
 * 	If @a delim is never met, the entirety of the remaining string returns.
 *  If @a pos is larger than the size of the string, std::out_of_range is thrown.
 */
 String String::substr(char delim, size_t pos)
{
	if (pos > size())
	{
		throw new std::out_of_range("String::substr() - pos was larger than String.size()");
	}
	return std::string::substr(pos, find(' ', pos));
}

#endif /* 98 */

// C++11 definitions
#if USING_STD(CPP11)

String::String(const char* str_literal) : std::string(str_literal) { }
String::String(const std::string& str) : std::string(str) { }

#endif /* 11 */