cmake_minimum_required(VERSION 3.10)
project(EnvDemo)

include_directories(${Boost_INCLUDE_DIR} 
/usr/include/python2.7)
add_executable(Demo PyCall.cpp)
target_link_libraries(Demo
    ${Boost_LIBRARIES}
    /usr/lib/x86_64-linux-gnu/libboost_python-py27.so
    /usr/lib/x86_64-linux-gnu/libstdc++.so.6
    /usr/lib/x86_64-linux-gnu/libpython2.7.so
    )    
