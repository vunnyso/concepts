cmake_minimum_required(VERSION 3.10)
project(ParenthesesValidator)

enable_testing()
find_package(GTest REQUIRED)

add_executable(runTests 2.cpp)

target_link_libraries(runTests GTest::GTest GTest::Main pthread)

add_test(NAME ParenthesesValidatorTest COMMAND runTests)
