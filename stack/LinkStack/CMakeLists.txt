cmake_minimum_required(VERSION 3.16)
project(linkstack)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(linkstack src/main.cpp src/myFunc.h src/myFunc.cpp)
