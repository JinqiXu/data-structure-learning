cmake_minimum_required(VERSION 3.16)

project(Sort)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(Sort src/main.cpp src/myFunc.cpp src/myFunc.h)
