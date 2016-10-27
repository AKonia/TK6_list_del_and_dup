cmake_minimum_required(VERSION 2.8)
project(lists_tasks)

include_directories(../include)

file(GLOB sources "*.cpp")
file(GLOB headers "*.h*") 
 
add_executable(../bin/listexe  "${sources}" "${headers}")
