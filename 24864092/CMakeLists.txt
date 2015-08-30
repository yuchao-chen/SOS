cmake_minimum_required (VERSION 2.8.8)
project (NaQt)
find_package (Qt5Core REQUIRED)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -march=native -mtune=native -std=c++11")
set (NaQt_SOURCES
    ${PROJECT_SOURCE_DIR}/main.cpp
    ${PROJECT_SOURCE_DIR}/NetworkAnalyzer.cpp
)
set (NaQt_HEADERS
    ${PROJECT_SOURCE_DIR}/NetworkAnalyzer.h
)
qt5_wrap_cpp (
    NaQt_HEADERS_MOC ${NaQt_HEADERS}
)
add_executable (
    naqt
    ${NaQt_SOURCES}
    ${NaQt_HEADERS_MOC}
)
qt5_use_modules (
    naqt
    Widgets
    Network
)
