#pragma once

// standard versions
// for more info on why: https://en.cppreference.com/w/cpp/preprocessor/replace#Predefined_macros

#define CPP98 199711L
#define CPP11 201103L
#define CPP14 201402L
#define CPP17 201703L
#define CPP20 202002L
#define CPP23 202302L
#define CPP26 202400L // they might change this later lol

// cross-standard compatbility
#if __cplusplus == CPP98

#define nullptr (void*)0

#endif /*  98 */