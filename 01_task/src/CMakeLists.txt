cmake_minimum_required(VERSION 4.1)

add_executable(01_task main.cpp ${MY_INCLUDE_DIR}/tools.h)
target_include_directories(01_task PUBLIC ${MY_INCLUDE_DIR})