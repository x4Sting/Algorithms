cmake_minimum_required(VERSION 3.2)

project(Algorithms_And_Data_Structures)

set(Search_SOURCE
	Source/Search/BinarySearch.cpp
)

add_executable(AlgorithmsAndDataStructures 
	Source/main.cpp
	${Search_SOURCE}
)

source_group("Search" FILES ${Search_SOURCE})