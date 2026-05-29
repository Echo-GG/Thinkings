cmake_minimum_required(VERSION 3.16)

project(sort_demo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(sort_demo
    main.cpp
    QuickSort.cpp
    Display.cpp
)