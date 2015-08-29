cmake_minimum_required (VERSION 2.8)

project (QQCS)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -march=native -mtune=native -std=c++11 -Wall -Wextra")

find_package (Qt5Core   REQUIRED)

set (
    QQCS_SOURCES
    ${PROJECT_SOURCE_DIR}/main.cpp
    ${PROJECT_SOURCE_DIR}/MainWidget.cpp
    ${PROJECT_SOURCE_DIR}/QtWidget.cpp
    ${PROJECT_SOURCE_DIR}/QuickWidget.cpp
)

set (
    QQCS_HEADERS
    ${PROJECT_SOURCE_DIR}/MainWidget.h
    ${PROJECT_SOURCE_DIR}/QtWidget.h
    ${PROJECT_SOURCE_DIR}/QuickWidget.h
)

qt5_wrap_cpp (
    QQCS_HEADERS_MOC ${QQCS_HEADERS}
)

set (QQCS_RESOURCES
    ${PROJECT_SOURCE_DIR}/resources/resources.qrc
)
qt5_add_resources (
    QQCS_RESOURCES_RCC ${QQCS_RESOURCES}
)

add_executable (
    qqcs
    ${QQCS_SOURCES}
    ${QQCS_HEADERS_MOC}
    ${QQCS_RESOURCES_RCC}
)

qt5_use_modules (
    qqcs
    Core
    Widgets
    Quick
)
