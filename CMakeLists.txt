cmake_minimum_required(VERSION 3.17)

#Estableciendo el proyecto
project(MiProyecto VERSION 1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(googletest)