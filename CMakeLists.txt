cmake_minimum_required(VERSION 3.28)
project(library_system)

set(CMAKE_CXX_STANDARD 11)

add_executable(library_system main.cpp
        Book.cpp
        Book.h
        Shelf.cpp
        Shelf.h
        University.cpp
        University.h
        Library.cpp
        Library.h
        Student/Student.cpp
        Student/Student.h
)
