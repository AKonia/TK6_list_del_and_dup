cmake_minimum_required(VERSION 2.6)

include_directories(../include)
include_directories(../gtest)
#link_directories(../lib)

file(GLOB headers "*.h*")
file(GLOB sources "*.cpp")
file(GLOB libraries "../lib/*.a")

set(test_path ../bin/)
add_executable(../bin/test_app ${sources} ${headers})
#if(NOT DEFINED WIN32) 
target_link_libraries(../bin/test_app ${libraries} -pthread)
#endif
