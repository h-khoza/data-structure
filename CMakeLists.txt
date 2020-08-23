cmake_minimum_required(VERSION 3.0)
project(output)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

find_package(OpenCV REQUIRED)

add_executable(
  output
  src/main.cpp
  )

#target_link_libraries(output ${OpenCV_LIBS})

 

