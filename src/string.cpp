#include "string.h"

/*
	String
*/

String::String()
	: std::string()
{
}

String::String(const std::string& string)
	: std::string(string)
{
}

String::String(const String& other)
	: std::string(other)
{
}

void* String::operator new(size_t size)
{
#if __cplusplus == CPP98
	return new String98; 
#else
#if __cplusplus == CPP11
	return new String11;
#endif /* 11 */
#endif /* 98 */
};

/*
	String98
*/

String98::String98()
	: String()
{
}
