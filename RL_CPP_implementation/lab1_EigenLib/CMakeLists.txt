cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)#enable C++11
project(Demo) 
include_directories(
    /home/zhou/My_Code/Reinforcement-Learning/RL_CPP_implementation/lab1_EigenLib/lib/
    )
add_subdirectory(src)

aux_source_directory(. main_dir)
add_executable(demo_main ${main_dir})

target_link_libraries(demo_main eigen_demo_src)