cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 98)
project(jastl-${CMAKE_CXX_STANDARD} CXX)

# clears pre-existing build directory
if(EXISTS ${CMAKE_BINARY_DIR})
	file(REMOVE_RECURSE ${CMAKE_BINARY_DIR})
endif()

# manage include folders here, depending on selected STL standard
include_directories(includes)

# this generates the actual library
add_library(${PROJECT_NAME}
	src/example.cpp
)

# this is for the unit tests executable
add_executable(${PROJECT_NAME}-unit-tests
	unit_tests.cpp
)