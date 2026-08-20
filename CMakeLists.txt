cmake_minimum_required(VERSION 3.16)

project(KOCR LANGUAGES CXX)

add_executable(kocr
    src/main.cpp
)

target_compile_features(kocr PRIVATE cxx_std_17)

if(MSVC)
    target_compile_options(kocr PRIVATE /W4 /permissive-)
else()
    target_compile_options(kocr PRIVATE -Wall -Wextra -Wpedantic)
endif()
