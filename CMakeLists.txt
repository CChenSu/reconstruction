cmake_minimum_required(VERSION 3.15)

project(reconstruction LANGUAGES CXX)

include_directories(${CMAKE_ROOT}/3rd/include)
link_directories(${CMAKE_ROOT}/3rd/lib)
add_subdirectory(src)

# add_subdirectory(tests)