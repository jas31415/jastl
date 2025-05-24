cmake_minimum_required(VERSION 3.25)
set(CMAKE_CXX_STANDARD 98) # <----- ATTENTION ALL BUILDERS! change c++ standard here, and nowhere else
project(jastd-${CMAKE_CXX_STANDARD} CXX)

# clears pre-existing build directory
if(EXISTS ${CMAKE_BINARY_DIR})
	file(REMOVE_RECURSE ${CMAKE_BINARY_DIR})
endif()

# add includes directory to library and executable
include_directories(includes)

# this generates the actual library (static)
add_library(${PROJECT_NAME}
	src/macros.cpp
	src/string.cpp
)

# this is for the unit tests executable
add_executable(${PROJECT_NAME}-unit-tests
	main.cpp
	src/unit_test.cpp
)
add_dependencies(${PROJECT_NAME}-unit-tests ${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME}-unit-tests ${CMAKE_BINARY_DIR}/lib${PROJECT_NAME}.a)
