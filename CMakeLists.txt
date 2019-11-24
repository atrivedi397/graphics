cmake_minimum_required(VERSION 3.14)
project(Graphics)

set(CMAKE_CXX_STANDARD 14)
link_libraries(graph SDL_image SDL2_image)
add_executable(Graphics main.cpp differential_digital_analyzer.h Bresenham_line_drawing.h Generalized_bresenham_line.h Bresenham_circle.h question1.h question2.h question3.h question4.h question5.h question5b.h question6.h question7.h "Bezier Curve.h" abhiyan.cpp)
add_executable(abhiyan abhiyan.cpp)