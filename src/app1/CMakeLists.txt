cmake_minimum_required(VERSION 3.29)
project(app1)

#file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
#        ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
#)
#
#add_lic
#
#add_executable(app1 ${SRC_FILES})

include(FetchContent)
FetchContent_Declare(fmt
        GIT_REPOSITORY  https://github.com/fmtlib/fmt.git
        GIT_TAG         10.2.1
)
FetchContent_MakeAvailable(fmt)

add_executable(app1 main.cpp Foo.cpp)
target_link_libraries(app1 PRIVATE common fmt::fmt)
target_include_directories(app1 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
