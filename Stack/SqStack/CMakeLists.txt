cmake_minimum_required(VERSION 3.16)

project(SqStack)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(SqStack src/main.cpp src/myFunc.h src/myFunc.cpp)
