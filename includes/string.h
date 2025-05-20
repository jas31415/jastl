#pragma once
#include <string>
#include "macros.h"

/*
	jastl polymoprhic for std::string
*/
class String : public std::string
{
public:
	/*
		using `new` to instantiate a String does not work as expected
		refer to the [README.md](../README.md) for an exaplanation of how it works, and why
	*/
	void* operator new(std::size_t size);

	// C++98 body
#if __cplusplus == CPP98

	explicit String();
	String(const char* stringliteral);
	String(const std::string& string);
	~String();

#endif /* 98 */

	// C++11 (or later) body
#if __cplusplus >= CPP11

	explicit String() = default;
	String(const char* stringliteral);
	String(const std::string& string);
	virtual ~String() = default;

#endif /* 11 */
};

/*
	standard specific String wrappers
*/

class String98 : public String
{
public:

	// C++98 body
#if __cplusplus == CPP98

	explicit String98();
	String98(const char* stringliteral);
	String98(const std::string& string);
	~String98();

#endif /* 98 */

	// C++11 (or later) body
#if __cplusplus >= CPP11

	explicit String98() = default;
	String98(const std::string& string);
	~String98() override = default;

#endif /* 11 */
};

#if __cplusplus >= CPP11

class String11 : public String98
{
public:
	explicit String11() = default;
	String11(const std::string& string);
	~String11() override = default;
};

#if __cplusplus >= CPP14

class String14 : public String11
{
public:
	explicit String14() = default;
	String14(const std::string& string);
	~String14() override = default;
};

#if __cplusplus >= CPP17

class String17 : public String14
{
public:
	explicit String17() = default;
	String17(const std::string& string);
	~String17() override = default;
};

#if __cplusplus >= CPP20

class String20 : public String17
{
public:
	explicit String20() = default;
	String20(const std::string& string);
	~String20() override = default;
};

#if __cplusplus >= CPP23

class String23 : public String20
{
public:
	explicit String23() = default;
	String23(const std::string& string);
	~String23() override = default;
};

#if __cplusplus >= CPP26

class String26 : public String23
{
	explicit String26() = default;
	String26(const std::string& string);
	~String26() override = default;
};

#endif /* 26*/
#endif /* 23 */
#endif /* 20 */
#endif /* 17 */
#endif /* 14 */
#endif /* 11 */