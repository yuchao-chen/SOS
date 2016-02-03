cmake_minimum_required (VERSION 2.8)

project (QSSI)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -march=native -mtune=native -std=c++11 -Wall -Wextra")

find_package (Qt5Widgets REQUIRED)

set (
    QSSI_SOURCES
    ${PROJECT_SOURCE_DIR}/main.cpp
    ${PROJECT_SOURCE_DIR}/MainWidget.cpp
)

set (
    QSSI_HEADERS
    ${PROJECT_SOURCE_DIR}/MainWidget.h
)

qt5_wrap_cpp (
    QSSI_HEADERS_MOC ${QSSI_HEADERS}
)

set (QSSI_RESOURCES
    ${PROJECT_SOURCE_DIR}/resources/resources.qrc
)
qt5_add_resources (
    QSSI_RESOURCES_RCC ${QSSI_RESOURCES}
)

add_executable (
    qssi
    ${QSSI_SOURCES}
    ${QSSI_HEADERS_MOC}
    ${QSSI_RESOURCES_RCC}
)
target_link_libraries (qssi Qt5::Widgets)
