cmake_minimum_required(VERSION 3.22.3)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(MyProject VERSION 1.0)

add_executable(${PROJECT_NAME} src/main.cpp src/nth.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)




