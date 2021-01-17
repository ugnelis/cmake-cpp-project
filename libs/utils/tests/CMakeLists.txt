set(SOURCE_FILES
        math_tests.cpp)

add_executable(utils_tests ${SOURCE_FILES})

target_link_libraries(utils_tests ${PROJECT_NAME} gtest_main gmock_main)

add_test(
        NAME utils_tests
        COMMAND ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR}/utils_tests
)
