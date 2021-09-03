cmake_minimum_required(VERSION 3.16)

project(SqList)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(SqList main.cpp myFunc.h myFunc.cpp)
