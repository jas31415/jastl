#pragma once
#include "macros.h"

/*
	jastl UnitTest base class
*/
class UnitTest
{
public:
	// C++98 body
#if USING_STD(CPP98)

	UnitTest();
	virtual ~UnitTest() = 0;

	virtual void PerformTests() = 0;

private:
	UnitTest(const UnitTest& other){};
#endif /* 98 */
};