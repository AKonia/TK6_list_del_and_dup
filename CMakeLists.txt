cmake_minimum_required(VERSION 2.8)
project(list_project)

set(LIST_INCLUDE "${CMAKE_CURRENT_SOURCE_DIR}/include")
set(LIST_BINARIES "${CMAKE_CURRENT_SOURCE_DIR}/bin")
set(LIST_LIBRARIES "${CMAKE_CURRENT_SOURCE_DIR}/lib")

include_directories("${LIST_INCLUDE}" gtest/)

add_subdirectory(samples)
add_subdirectory(gtest)
add_subdirectory(tests)
