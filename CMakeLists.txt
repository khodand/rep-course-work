cmake_minimum_required(VERSION 3.17)
project(cergrsr)

set(CMAKE_CXX_STANDARD 17)

add_executable(cergrsr main.cpp GraphicalComponentInterface.h WindowComponent.cpp WindowComponent.h)