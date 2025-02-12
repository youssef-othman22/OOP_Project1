cmake_minimum_required(VERSION 3.10)
project(OOP_Project1)

set(CMAKE_CXX_STANDARD 17)

add_executable(OOP_Project1
        run.cpp
        src/person/person.cpp
        src/person/person.cpp
        src/student/student.cpp
        src/student/student.cpp
        src/subject/subject.cpp
        src/subject/subject.cpp
        depend/dep.cpp
        depend/dep.cpp
        src/professor/professor.cpp
        src/professor/professor.cpp       # Make sure this file is correctly placed
#        src/person.cpp
#        src/person.h
)
