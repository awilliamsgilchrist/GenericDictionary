cmake_minimum_required(VERSION 3.6)
project(GenericDictionary)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp KeyValue.h Dictionary.h)
add_executable(GenericDictionary ${SOURCE_FILES})

set(TEST_FILES testMain.cpp KeyValue.h Dictionary.h)
add_executable(Test ${TEST_FILES})