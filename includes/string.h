#pragma once
#include <string>
#include "macros.h"

namespace jastd
{
	/*
		jastd wrapper for std::string
	*/
	class string : public std::string
	{
	public:
		// C++98 body
	#if USING_STD(CPP98)

		explicit string();
		string(const char* str_literal);
		string(const std::string& str);

		string substr(char delim, size_t pos = 0);

	#endif /* 98 */
	};
}
