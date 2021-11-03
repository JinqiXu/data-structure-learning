cmake_minimum_required(VERSION 3.16)

project(SString)

add_executable(main src/main.cpp src/myFunc.cpp src/myFunc.h)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
