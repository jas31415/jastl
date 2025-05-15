cmake_minimum_required(VERSION 3.10)
project(jastl)

include_directories("${PROJECT_SOURCE_DIR}/${PROJECT_NAME}")

# clears pre-existing build directory
if(EXISTS ${CMAKE_BINARY_DIR})
	# message("aaaaaaawoooooooooooooooooooooooo")
	file(REMOVE_RECURSE ${CMAKE_BINARY_DIR})
endif()

# this generates the actual library
add_library(${PROJECT_NAME})
target_sources(${PROJECT_NAME}
PRIVATE
	# add source files here
	src/example.cpp
)

# this is for the unit tests executable
set(EXE_NAME "${PROJECT_NAME}-unit-tests")
add_executable(${EXE_NAME})
target_link_libraries(${EXE_NAME} "${CMAKE_BINARY_DIR}/libjastl.a")
target_sources(${EXE_NAME}
PRIVATE
	unit_tests.cpp
)