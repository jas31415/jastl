cmake_minimum_required(VERSION 3.25)
set(CMAKE_CXX_STANDARD 98) # <----------- ATTENTION ALL BUILDERS! change c++ standard here, and nowhere else
project(jastl-${CMAKE_CXX_STANDARD} CXX)

# clears pre-existing build directory
if(EXISTS ${CMAKE_BINARY_DIR})
	file(REMOVE_RECURSE ${CMAKE_BINARY_DIR})
endif()

# manage include folders here, depending on selected STL standard
include_directories(includes)

# this generates the actual library (static)
add_library(${PROJECT_NAME}
	src/example.cpp
)

# this is for the unit tests executable
add_executable(${PROJECT_NAME}-unit-tests
	unit_tests.cpp
)
# library doesn't need linking here due to the src/ folder's presence
# in fact, linking the libjastl-xx.a would actually result in a building error
# i admit that i do not understand why it does that