cmake_minimum_required(VERSION 3.21)

project(KOCR LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

add_executable(kocr
    src/main.cpp
)

target_link_libraries(kocr PRIVATE Qt6::Core)

if(MSVC)
    target_compile_options(kocr PRIVATE /W4 /permissive-)
else()
    target_compile_options(kocr PRIVATE -Wall -Wextra -Wpedantic)
endif()
