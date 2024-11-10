cmake_minimum_required(VERSION 3.18)

project(
    module1
    VERSION 0.0.0
    DESCRIPTION "Практическая работа 1-го модуля"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_BUILD_TYPE Debug)

add_executable(module1)

set(
    sources
    main.cpp
)

target_sources(module1 PRIVATE ${sources})
