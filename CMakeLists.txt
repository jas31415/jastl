cmake_minimum_required(VERSION 3.10)
project(jastl)

# clears pre-existing build directory
if(EXISTS "${PROJECT_SOURCE_DIR}/build")
	# message("aaaaaaawoooooooooooooooooooooooo")
	file(REMOVE_RECURSE "${PROJECT_SOURCE_DIR}/build")
endif()

set(SRC
	# add source files here
	src/class.cpp
)

add_library(${PROJECT_NAME})
target_sources(${PROJECT_NAME}
PRIVATE
	${SRC}
)

set(EXE_NAME "${PROJECT_NAME}-unit-tests")
add_executable(${EXE_NAME})
target_link_libraries(${EXE_NAME} "${PROJECT_SOURCE_DIR}/libjastl.a")
target_sources(${EXE_NAME}
PRIVATE
	unit_tests.cpp
)