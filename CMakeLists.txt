cmake_minimum_required(VERSION 3.8)
project(OEP-ettrafto)

set(CMAKE_CXX_STANDARD 14)

add_executable(Style-Me main.cpp game.h game.cpp character.h character.cpp inventory.h inventory.cpp activeItems.h activeItems.cpp item.h item.cpp)
