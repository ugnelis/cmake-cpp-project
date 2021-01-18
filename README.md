# cmake-cpp-project
A simple CMake C++ project structure.

## Structure
```
cmake-cpp-project
 ├── cmake
 │   ├── googletest.cmake
 │   └── googletest-download.cmake
 ├── include
 │   └── cmake-cpp-project
 │       └── app.h
 ├── src
 │   ├── app.cpp
 │   └── main.cpp
 ├── libs
 │   ├── utils
 │   │   ├── include
 │   │   │   └── utils
 │   │   │       └── math.h
 │   │   ├── src
 │   │   │   └── math.cpp
 │   │   ├── tests
 │   │   │   ├── math_tests.cpp
 │   │   │   └── CMakeLists.txt
 │   │   └── CMakeLists.txt
 │   └── CMakeLists.txt
 └── CMakeLists.txt
```

## Build and Run
Commands for building this project:
```bash
mkdir build
cd build
cmake ..
make
```

To run app from the `build` folder:
```bash
./cmake-cpp-project
```

To build and run Utils tests from the `build` folder:
```bash
make utils_tests
./libs/utils/tests/utils_tests
```
