
cmake_minimum_required(VERSION 3.10)
project(cppproject)
 
set(CMAKE_CXX_STANDARD 11)

add_subdirectory(addlib)
 
 
add_executable(cppproject main.cpp)
#生成一个可执行的文件
 
target_link_libraries(cppproject addliblibrary)

