cmake_minimum_required(VERSION 3.10)
project(jastl)

add_executable(${PROJECT_NAME})

target_sources(${PROJECT_NAME}
PRIVATE
	main.cpp	
)