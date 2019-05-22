cmake_minimum_required(VERSION 3.0.0)

project(untitled VERSION 0.1 LANGUAGES CXX)

set(Qt5_DIR ~/Qt/5.12.3/gcc_64/lib/cmake/Qt5)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5 COMPONENTS REQUIRED Core Gui Widgets)

add_executable(${PROJECT_NAME} "main.cpp")

target_link_libraries(${PROJECT_NAME} Qt5::Core)
