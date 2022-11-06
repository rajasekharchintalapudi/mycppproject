# Copyright (C) 2022
# Author - Rajasekhar Chintalapudi
# FileName - CMkaeLists.txt
#
# All Rights Reserved


cmake_minimum_required(VERSION 3.12)

set(CMAKE_BUILD_TYPE Debug)
# set(CMAKE_CXX_FLAGS "{CMAKE_CXX_FLAGS} -std=c++11")

project(cpp_project)

set(SOURCE_DIR ${CMAKE_SOURCE_DIR}/src CACHE INTERNAL "")

set(CPP_SOURCE_FILES
    ${SOURCE_DIR}/cpp_project.cc
    ${SOURCE_DIR}/database_connect.cc
    ${SOURCE_DIR}/operator_overloading.cc
    CACHE INTERNAL ""
)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

add_executable(cpp_project
    ${CPP_SOURCE_FILES}
)

target_include_directories(cpp_project
    PUBLIC
        ${CMAKE_SOURCE_DIR}/include
)