cmake_minimum_required(VERSION 3.29)
project(app2)

include(FetchContent)
FetchContent_Declare(json URL https://github.com/nlohmann/json/releases/download/v3.11.3/json.tar.xz)
FetchContent_MakeAvailable(json)

add_executable(app2 main.cpp)
target_link_libraries(app2 PRIVATE common nlohmann_json::nlohmann_json)
target_include_directories(app2 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
