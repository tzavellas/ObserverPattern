cmake_minimum_required(VERSION 3.0.0)
project(observer VERSION 0.1.0)

include_directories(include)    # directory of header files

file(GLOB SOURCES "src/*.cpp" "include/*.hpp")  # directory of source files

add_executable(observer ${SOURCES}) # observer is the name of the executable