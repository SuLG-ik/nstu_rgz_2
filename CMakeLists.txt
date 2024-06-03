cmake_minimum_required(VERSION 3.28)
project(rgz2)

set(CMAKE_CXX_STANDARD 17)

add_executable(rgz2 main.cpp
        ComputerEquipment.cpp
        ComputerEquipment.h
        Monitor.cpp
        Monitor.h
        Keyboard.cpp
        Keyboard.h)
