cmake_minimum_required(VERSION 3.17)
project(AnimalInheritance)

set(CMAKE_CXX_STANDARD 14)

add_executable(AnimalInheritance main.cpp Cat.cpp Cat.h Animal.cpp Animal.h Dog.cpp Dog.h Duck.cpp Duck.h)