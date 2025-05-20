#pragma once

// standard versions
// for more info on why: https://en.cppreference.com/w/cpp/preprocessor/replace#Predefined_macros

#define CPP98 199711L // C++98 macro value
#define CPP11 201103L // C++11 macro value
#define CPP14 201402L // C++14 macro value
#define CPP17 201703L // C++17 macro value
#define CPP20 202002L // C++20 macro value
#define CPP23 202302L // C++23 macro value
#define CPP26 202400L // C++26 macro value (they might change this later lol)

// @returns  If 
#define USING_STD(ver) __cplusplus == ver
// @returns  If 
#define USING_STD_MINIMUM(ver) __cplusplus >= ver

// cross-standard compatbility
#if USING_STD(CPP98)

#define nullptr (void*)0

#endif /* USING_STD(CPP98) */