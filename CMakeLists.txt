cmake_minimum_required(VERSION 3.0.0)
set (CMAKE_CXX_STANDARD 14)
#set(CMAKE_CXX_FLAGS "-Wall -fPIC")
#relocatio(CMAKE_POSITION_INDEPENDENT_CODE ON)

project(untitled VERSION 0.1 LANGUAGES CXX)

#list(APPEND CMAKE_PREFIX_PATH "~/Qt/5.12.3/gcc_64")
#set(Qt5_DIR ~/Qt/5.12.3/gcc_64/lib/cmake/Qt5)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
#find_package(Qt5Core)
#find_package(Qt5Widgets REQUIRED)
find_library(Qt5Core libQt5Core.so.5 libs/Qt5)
find_library(Qt5Widgets libQt5Widgets.so.5 libs/Qt5 REQUIRED)
set(SRC
    borderlayout.cpp
    window.cpp
    dialog.cpp
    MyLabelWidget.cpp
    MyLabelWidget.h
    Counter.cpp
    Counter.h
    )
set(HEAD
    dialog.h
    window.h
    borderlayout.h
    include/wobjectdefs.h
    include/wobjectimpl.h
    )

list(APPEND CMAKE_CXX_FLAGS " -fPIC")
list(APPEND COMEPILE_OPTION -D_QT5)
list(APPEND LINKLIBS
    ${PROJECT_SOURCE_DIR}/libs/Qt5/libQt5Widgets.so.5
    ${PROJECT_SOURCE_DIR}/libs/Qt5/libQt5Core.so.5
    ${PROJECT_SOURCE_DIR}/libs/Qt5/libQt5Gui.so.5
    ${PROJECT_SOURCE_DIR}/libs/Qt5/libQt5XcbQpa.so.5
    ${PROJECT_SOURCE_DIR}/libs/Qt5/platforms/libqxcb.so
    )
include_directories(
	include/Qt5
	include/Qt5/QtCore
	include/Qt5/QtGui
	include/Qt5/QtWidgets
)
set(TARGETS)
list(APPEND TARGETS ${PROJECT_NAME})  
add_executable(${PROJECT_NAME} "main.cpp" ${SRC} ${HEAD})

#qt5_use_modules(${PROJECT_NAME} Widgets)
#qt5_wrap_cpp(include/window.h window.cpp)
target_link_libraries(${PROJECT_NAME} "${Qt5Core}" "${Qt5Widgets}")
target_include_directories(${PROJECT_NAME}
  PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/include)
macro(display_elements
	DISPLAY_MESSAGEke
	LIST_TO_DISPLAY)
    message("[ ${DISPLAY_MESSAGE} ]")
    foreach(_DISPLAY_ELEMENT ${LIST_TO_DISPLAY})
	message(STATUS ${_DISPLAY_ELEMENT})
    endforeach()
endmacro()

display_elements("Linker Flags" "${LINKLIBS}")
