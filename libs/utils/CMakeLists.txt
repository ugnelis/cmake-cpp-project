cmake_minimum_required(VERSION 3.12)
project(utils)

set(CMAKE_CXX_STANDARD 14)

# Add sources.
add_library(${PROJECT_NAME}
        include/utils/math.h
        src/math.cpp
        )

# Add headers.
target_include_directories(
        ${PROJECT_NAME} PUBLIC
        include
)

# Enable testing
include(../../cmake/googletest.cmake)
fetch_googletest(
        ../../cmake
        ${PROJECT_BINARY_DIR}/googletest
)
enable_testing()

# Add test folder.
add_subdirectory(tests)
