cmake_minimum_required(VERSION 3.0.0)

project(untitled VERSION 0.1 LANGUAGES CXX)

list(APPEND CMAKE_PREFIX_PATH "~/Qt/5.12.3/gcc_64")
#set(Qt5_DIR ~/Qt/5.12.3/gcc_64/lib/cmake/Qt5)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5Core)
find_package(Qt5Widgets REQUIRED)

set(SRC
    borderlayout.cpp
    borderlayout.h
    window.cpp
    window.h
    dialog.cpp
    dialog.h
    )
set(TARGETS)
list(APPEND TARGETS ${PROJECT_NAME})  
add_executable(${PROJECT_NAME} "main.cpp" ${SRC})

qt5_use_modules(${PROJECT_NAME} Widgets)
target_link_libraries(${PROJECT_NAME} Qt5::Core)
