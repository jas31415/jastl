#pragma once
#include <string>
#include "macros.h"

/*
	jastl interface for std::string
*/
class String : private std::string
{
public:
	explicit String();
	explicit String(const std::string& string);
	String(const String& other);
	String& operator=(const String& other);
#if __cplusplus >= CPP11
	String(String&& other) noexcept = default;
	String& operator=(String&& other) noexcept = default;
#endif /* 11 */
	virtual ~String() = 0;

	/*
		using `new` to instantiate a String does not work as expected
		refer to the README.md for an exaplanation of 
	*/
	static void* operator new(size_t size);

private:

};

/*
	standard specific String wrappers
*/
#if __cplusplus >= CPP98

class String98 : public String
{
public:
	explicit String98();
	explicit String98(const std::string& string);
	String98(const String98& other);
	String98& operator=(const String98& other);
#if __cplusplus >= CPP11
	String98(String98&& other) noexcept = default;
	String98& operator=(String98&& other) noexcept = default;
#endif /* 11 */
	virtual ~String98();
};

#if __cplusplus >= CPP11

class String11 : public String98
{
public:
	explicit String11() = default;
	String11(const String11& other) = default;
	String11& operator=(const String11& other) = default;
	String11(String11&& other) noexcept = default;
	String11& operator=(String11&&) noexcept = default;
	~String11() override = default;
};

#endif /* 11 */
#endif /* 98 */