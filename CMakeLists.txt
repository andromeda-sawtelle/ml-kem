cmake_minimum_required(VERSION 3.14.0 FATAL_ERROR)

project(ml_kem VERSION 0.1.0 LANGUAGES CXX C)

set(SOURCES src/main.c
            src/util.c)

set(HEADERS include/main.h
            include/util.h)

add_executable(ml_kem ${SOURCES} ${HEADERS})

target_include_directories(ml_kem PRIVATE include)
