cmake_minimum_required(VERSION 2.8)

project(OpenGL_Proj)
include_directories(RL_CPP_implementation/lab2_OpenGL/lib)
add_subdirectory(src)

aux_source_directory(. DIR_SRCS)
add_executable(Demo main.cpp)

target_link_libraries(Demo lib_src)