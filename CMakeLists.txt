
cmake_minimum_required(VERSION 3.8)

project("conditionalAI")

add_executable(conditionalAI "main.cpp" "main.h")

target_sources(
	conditionalAI PUBLIC 
	main.cpp
	main.h
	src/
)

