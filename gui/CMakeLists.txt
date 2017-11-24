cmake_minimum_required(VERSION 2.8.11)

project(karorurt_gui)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5Widgets)

add_definitions(-DCONSOLE)

add_executable(rtgui main.cpp)

target_link_libraries(rtgui Qt5::Widgets)
