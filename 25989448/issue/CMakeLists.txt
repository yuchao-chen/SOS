cmake_minimum_required(VERSION 3.0.2)
project(MyProject)

find_package(Qt5Widgets)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_library(mainwindow mainwindow.cpp)
qt5_use_modules(mainwindow Widgets)

add_executable(MyProject main.cpp)
target_link_libraries (MyProject mainwindow)
qt5_use_modules(MyProject Core Gui Widgets)