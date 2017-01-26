PROJECT(cmake_demo)
CMAKE_MINIMUM_REQUIRED(VERSION 3.2)

SET(DEMO_SRCS
    person.cpp
)

ADD_EXECUTABLE(demo_exec ${DEMO_SRCS} main.cpp)

ADD_LIBRARY(demo_shared SHARED ${DEMO_SRCS})
set_target_properties(demo_shared PROPERTIES OUTPUT_NAME demo)

ADD_LIBRARY(demo_static STATIC ${DEMO_SRCS})
set_target_properties(demo_static PROPERTIES OUTPUT_NAME demo)
