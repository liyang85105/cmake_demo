PROJECT(cmake_demo)
CMAKE_MINIMUM_REQUIRED(VERSION 3.2)

ADD_EXECUTABLE(person_test person_test.cpp)
#TARGET_LINK_LIBRARIES(person_test demo gtest)
TARGET_LINK_LIBRARIES(person_test demo gtest gtest_main)
