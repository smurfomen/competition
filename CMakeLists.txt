cmake_minimum_required(VERSION 3.5)

project(competition VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

include_directories(lib/)
add_subdirectory(lib)


add_executable(competition main.cpp)

target_link_libraries(competition PUBLIC Competition::Lib)
