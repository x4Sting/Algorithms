cmake_minimum_required(VERSION 3.2)

project(Algorithms)

set(Search_SOURCE
	Source/Search/Search.h
	Source/Search/Search.cpp
)

add_executable(Algorithms 
	Source/main.cpp
	${Search_SOURCE}
)

source_group("Search" FILES ${Search_SOURCE})