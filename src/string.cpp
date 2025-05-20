#include "string.h"

/*
	String
*/

void* String::operator new(size_t size)
{
#if __cplusplus == CPP98

	// return std::malloc(sizeof(String98));
	return new String98;

#endif /* 98 */
#if __cplusplus == CPP11

	return new String11;

#endif /* 11 */
#if __cplusplus == CPP14

	return new String14;

#endif /* 14 */
#if __cplusplus == CPP17

	return new String17;

#endif /* 17 */
#if __cplusplus == CPP20

	return new String20;

#endif /* 20 */
#if __cplusplus == CPP23

	return new String23;

#endif /* 23 */
#if __cplusplus == CPP26

	return new String26;

#endif /* 26 */
};

// C++98 String polymorphic definitions
#if __cplusplus == CPP98

String::String() : std::string() {}
String::String(const char* stringliteral) : std::string(stringliteral) {}
String::String(const std::string& string) : std::string(string) {}
String::~String() {}
std::string String::text() { return "String"; }

#endif /* 98 */

// C++11 String polymorphic definitions
#if __cplusplus >= CPP11

String::String(const char* stringliteral) : std::string(stringliteral) {}
String::String(const std::string& string) : std::string(string) {}

#endif /* 11 */

/*
	String98
*/

// C++98 String98 definitions
#if __cplusplus == CPP98

String98::String98() : String() {}
String98::String98(const char* stringliteral) : String(stringliteral) {}
String98::String98(const std::string& string) : String(string) {}
String98::~String98()
{
	String::~String();
}
std::string String98::text() { return "String98"; }

#endif /* 98 */

// C++11 String98 definitions
#if __cplusplus >= CPP11

String98::String98(const std::string& string) : String(string) {}

#endif

/*
	String11
*/

#if __cplusplus >= CPP11

String11::String11(const std::string& string) : String98(string) {}

#endif /* 11 */

/*
	String14
*/

#if __cplusplus >= CPP14

String14::String14(const std::string& string) : String11(string) {}

#endif /* 14 */

/*
	String17
*/

#if __cplusplus >= CPP17

String17::String17(const std::string& string) : String14(string) {}

#endif /* 17 */

/*
	String20
*/

#if __cplusplus >= CPP20

String20::String20(const std::string& string) : String17(string) {}

#endif /* 20 */

/*
	String23
*/

#if __cplusplus >= CPP23

String23::String23(const std::string& string) : String20(string) {}

#endif /* 23 */

/*
	String26
*/

#if __cplusplus >= CPP26

String26::String26(const std::string& string) : String23(string) {}

#endif /* 23*/