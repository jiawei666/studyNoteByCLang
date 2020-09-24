cmake_minimum_required(VERSION 3.16)
project(my_first C)

set(CMAKE_C_STANDARD 99)

add_executable(my_first main.c)
add_executable(test_int test_int.c)
add_executable(array array.c)
add_executable(function function.c)
add_executable(pointer pointer.c)
add_executable(define define.c)
add_executable(struct struct.c)