cmake_minimum_required(VERSION 3.6)
project(Middle_School_Mayhem)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Player.cpp Player.hpp Inventory.cpp Inventory.hpp Event.cpp Event.hpp)
add_executable(Middle_School_Mayhem ${SOURCE_FILES} Player.cpp Player.hpp Inventory.cpp Inventory.hpp Event.cpp Event.hpp)