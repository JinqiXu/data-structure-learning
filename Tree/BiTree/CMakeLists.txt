cmake_minimum_required(VERSION 3.16)

project(BiTree)

set(SOURCES src/main.cpp src/myFunc.h src/myFunc.cpp src/Queue.h src/Queue.cpp)

add_executable(BiTree ${SOURCES})

target_include_directories(BiTree PRIVATE ${PROJECT_SOURCE_DIR}/include)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
