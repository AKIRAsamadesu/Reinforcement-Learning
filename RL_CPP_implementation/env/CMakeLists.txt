cmake_minimum_required(VERSION 3.20)
project(Demo_ch1)

include_directories("C:/Python27/include")
link_directories("C:/Program Files/mingw-w64/x86_64-8.1.0-posix-seh-rt_v6-rev0/mingw64/opt/lib/python2.7/config")

aux_source_directory(. DIR_SRCS)
add_subdirectory(src)
add_executable(Demo ${DIR_SRCS})
target_link_libraries(Demo my_library)