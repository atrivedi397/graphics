cmake_minimum_required(VERSION 3.14)
project(Graphics)

set(CMAKE_CXX_STANDARD 14)
link_libraries(graph)
add_executable(Graphics main.cpp differential_digital_analyzer.h Bresenham_line_drawing.h Generalized_bresenham_line.h Bresenham_circle.h)