cmake_minimum_required (VERSION 3.6)
project(TestBot)

add_executable(main main.cpp)
add_subdirectory(sleepy-discord)

target_link_libraries(main sleepy-discord)