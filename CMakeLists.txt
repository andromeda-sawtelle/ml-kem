cmake_minimum_required(VERSION 3.14.0 FATAL_ERROR)

project(ml_kem VERSION 0.1.0 LANGUAGES CXX C)

set(SOURCES src/main.c
            src/util.c)

set(HEADERS include/main.h
            include/util.h)

set(TEST_SOURCES tests/ml_kem_test.c
                 tests/ml_kem_test.h
                 tests/util_test.c
                 src/util.c
                 include/util.h)

add_executable(ml_kem ${SOURCES} ${HEADERS})
target_include_directories(ml_kem PRIVATE include)

enable_testing()

add_executable(ml_kem_test ${TEST_SOURCES})
target_include_directories(ml_kem_test PRIVATE include)
