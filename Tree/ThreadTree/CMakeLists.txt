cmake_minimum_required(VERSION 3.16)

project(ThreadTree)

set(SOURCES src/myFunc.h src/myFunc.cpp src/main.cpp)

add_executable(ThreadTree ${SOURCES})

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
