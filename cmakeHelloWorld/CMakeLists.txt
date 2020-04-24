
#CMake最低版本号要求
cmake_minimum_required(VERSION 2.8)

#最低版本要求
#MAKE_MINIMUM_REQUIRED(VERSION 2.8)

#设置g++编译器
SET(CMAKE_CXX_COMPILER "g++")

#设置工程名
PROJECT(Hello)

#打印消息	            
MESSAGE(STATUS "Project Hello")

#生成可执行文件
ADD_EXECUTABLE(hello hello.cpp)
