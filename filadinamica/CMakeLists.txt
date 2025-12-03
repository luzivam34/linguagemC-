cmake_minimum_required(VERSION 4.0)
project(filadinamica)

set(CMAKE_CXX_STANDARD 20)

add_executable(filadinamica main_filadinamica.cpp
        filadinamica.cpp
        filadinamica.h
)