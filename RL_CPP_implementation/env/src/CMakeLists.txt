cmake_minimum_required(VERSION 3.20)
aux_source_directory(. DIR_LIB_SRCS)
add_library(my_library ${DIR_LIB_SRCS})
