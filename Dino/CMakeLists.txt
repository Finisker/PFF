cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

project(Dino)

add_executable(Dino src/main.cpp src/Entity.cpp include/Entity.h src/Dino.cpp include/Dino.h src/Bird.cpp include/Bird.h src/Cactus.cpp include/Cactus.h src/Scene.cpp include/Scene.h)