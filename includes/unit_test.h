#pragma once
#include "macros.h"

/*
	jastd UnitTests base class
*/
class UnitTest
{
public:
	// C++98 body
#if USING_STD(CPP98)

	UnitTest();

	virtual void PerformTests() = 0;

	private:
	// = deleted
	UnitTest(const UnitTest& other);
	// = deleted
	UnitTest& operator=(const UnitTest& other);
	// = 
#endif /* 98 */
};
