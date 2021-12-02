cmake_minimum_required(VERSION 3.16)

project(Dino)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_executable(Dino src/main.cpp src/Entity.cpp include/Entity.h src/Bird.cpp include/Bird.h src/Wall.cpp include/Wall.h src/Dinosaur.cpp include/Dinosaur.h src/Floor.cpp include/Floor.h)