cmake_minimum_required(VERSION 3.22.0)

set(CMAKE_CXX_STANDARD 17)

project (Doubly_linked_list_test)

add_subdirectory(../Catch2 Catch2_build)
add_executable(Test test.cpp Doubly_linked_list.cpp)
target_link_libraries(Test PRIVATE Catch2::Catch2)