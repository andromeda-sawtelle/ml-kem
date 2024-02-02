cmake_minimum_required(VERSION 3.14.0 FATAL_ERROR)

project(ml_kem VERSION 0.1.0 LANGUAGES CXX C)

add_executable(ml_kem src/main.c
                      src/main.h
                      src/util.c
                      src/util.h)
