cmake_minimum_required(VERSION 4.0)
project(pilhas)

set(CMAKE_CXX_STANDARD 20)

add_executable(pilhas main_pilha.cpp
        pilha.cpp
        pilha.h
)