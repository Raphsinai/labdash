cmake_minimum_required(VERSION 3.31)
project(labdash)

set(CMAKE_CXX_STANDARD 20)

find_package(wxWidgets REQUIRED COMPONENTS core base)
include(${wxWidgets_USE_FILE})

add_executable(labdash main.cpp
        App.cpp
        App.h
        MainFrame.cpp
        MainFrame.h
        Dialog.cpp
        Dialog.h
        BLEPanel.cpp
        BLEPanel.h
        Person.cpp
        Person.h)

target_link_libraries(labdash ${wxWidgets_LIBRARIES})