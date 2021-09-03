cmake_minimum_required(VERSION 3.16)
project(SqList_Dynamic)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(SqList_Dynamic src/main.cpp src/myFunc.h src/myFunc.cpp)
