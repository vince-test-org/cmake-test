cmake_minimum_required(VERSION 3.29)
#add_library(common
#    SomeClass.cpp
#    SomeClass.h
#)

file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
        ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)
add_library(common ${SRC_FILES})


#add_library(common
#        Unused.cpp
#)

target_include_directories(common PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
