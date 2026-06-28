cmake_minimum_required(VERSION 3.20)

project(embedded-linux-utils
    VERSION 0.1.0
    DESCRIPTION "Modern C++ utility library for Embedded Linux"
    LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(elu STATIC
    src/logger.cpp
)

target_include_directories(elu
    PUBLIC
        include
)

add_executable(logger_example
    examples/logger_example.cpp
)

target_link_libraries(logger_example
    PRIVATE
        elu
)