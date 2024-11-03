cmake_minimum_required(VERSION 3.20)
project(consoleLib)

add_subdirectory(subproject3) # must have CMakeLists.txt in this folder
include_directories(subproject3/include)

add_library(${PROJECT_NAME} SHARED ${CMAKE_CURRENT_SOURCE_DIR}/src/Input.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)

target_link_libraries(${PROJECT_NAME} outputLib)
