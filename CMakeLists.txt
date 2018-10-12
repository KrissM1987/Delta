cmake_minimum_required(VERSION 3.12)
project(InstrukcjaZlozona C)

set(CMAKE_C_STANDARD 99)

add_executable(InstrukcjaZlozona main.c)
target_link_libraries(InstrukcjaZlozona m)