cmake_minimum_required(VERSION 3.1)
project(webcam)

find_package(OpenCV 4 REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(webcam webcam.cpp)
target_link_libraries(webcam ${OpenCV_LIBS})