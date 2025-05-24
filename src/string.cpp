#include "string.h"
#include <stdexcept>

/*
	jastd string class definition
*/
using namespace jastd;

// C++98 definitions
#if USING_STD(CPP98)

string::string() : std::string() { }
string::string(const char* str_literal) : std::string(str_literal) { }
string::string(const std::string& str) : std::string(str) { }

/**
 * 	@brief  Get a substring using a delimiter.
 * 	@param delim  Character to terminate substring at. Substring terminates at '0/' if no case of @a delim is found.
 *  @param pos  Position to start the substring from. (default 0)
 *  @return  The new string.
 *  @throw  std::out_of_range If pos > size().
 * 
 *  Constructs a new string containing all characters between index @a pos and @a delim.
 * 	If `delim` is never met, the entirety of the remaining string returns.
 *  If `pos` is larger than the size of the string, std::out_of_range is thrown.
 */
string string::substr(char delim, size_t pos)
{
	if (pos > size())
	{
		throw new std::out_of_range("string::substr() - pos was larger than string.size()");
	}
	return std::string::substr(pos, find(' ', pos));
}

#endif /* 98 */