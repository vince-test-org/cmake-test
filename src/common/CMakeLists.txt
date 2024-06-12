cmake_minimum_required(VERSION 3.29)
add_library(common
    SomeClass.cpp
    SomeClass.h
)

target_include_directories(common PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
