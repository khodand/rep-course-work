cmake_minimum_required(VERSION 3.17)
project(cergrsr)

set(CMAKE_CXX_STANDARD 17)

add_executable(cergrsr main.cpp AbstractGraphicalComponent.h WindowComponent.cpp WindowComponent.h AbstractGraphicalComponent.cpp AbstractParentComponent.cpp AbstractParentComponent.h PanelComponent.cpp PanelComponent.h TextComponent.cpp TextComponent.h ButtonComponent.cpp ButtonComponent.h LineComponent.cpp LineComponent.h)