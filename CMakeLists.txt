PROJECT(cmake_demo)
CMAKE_MINIMUM_REQUIRED(VERSION 3.2)

# include directories
INCLUDE_DIRECTORIES(
    ${PROJECT_SOURCE_DIR}/src
)

# link directories
LINK_DIRECTORIES(
    ${PROJECT_BINARY_DIR}/lib
)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

# add subdir for source code
ADD_SUBDIRECTORY(src)

# add subdir for unit tests
ADD_SUBDIRECTORY(test)
