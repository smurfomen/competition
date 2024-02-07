cmake_minimum_required(VERSION 3.5)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_library(single-number-lib STATIC
    single_number.hpp
    single_number.cpp)

add_library(counting-bits-lib STATIC
    counting_bits.hpp
    counting_bits.cpp)

add_library(competition-lib
    single_number.hpp
    counting_bits.hpp
    )

target_link_libraries(competition-lib
    PRIVATE
        single-number-lib
        counting-bits-lib
    )

add_library(Competition::Lib ALIAS competition-lib)
