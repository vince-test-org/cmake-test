cmake_minimum_required(VERSION 3.29)
project(cmake_temp
        VERSION 1.0
        DESCRIPTION "cmake temp"
        LANGUAGES CXX
)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(src/app1)
add_subdirectory(src/app2)
add_subdirectory(src/common)
