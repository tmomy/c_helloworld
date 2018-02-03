cmake_minimum_required(VERSION 3.9)
project(bitree C)

set(CMAKE_C_STANDARD 99)

add_executable(bitree main.c bitree.c bitree.h)