cmake_minimum_required(VERSION 3.16)
project(UniversityDb)

set(CMAKE_CXX_COMPILER g++-10)

set(SRC student.cpp student.hpp address.hpp studentlist.cpp)

add_executable(${PROJECT_NAME} main.cpp ${SRC})
