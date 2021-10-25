cmake_minimum_required(VERSION 3.16)

project(LinkedList)

include_directories(${ PROJECT_SOURCE_DIR }/include)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(LinkedList src/main.cpp src/myFunc.h src/myFunc.cpp)
