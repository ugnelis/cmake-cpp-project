cmake_minimum_required(VERSION 3.12)
project(cmake-cpp-project)

set(CMAKE_CXX_STANDARD 14)

# Add libs.
add_subdirectory(libs)

# Add headers.
include_directories(include)

# Add sources.
add_executable(${PROJECT_NAME}
        include/cmake-cpp-project/app.h
        src/app.cpp
        src/main.cpp
        )

target_link_libraries(${PROJECT_NAME} utils)
