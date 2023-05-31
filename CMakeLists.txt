cmake_minimum_required(VERSION 3.25)
project(MinecraftLauncher)

set(CMAKE_CXX_STANDARD 23)

add_executable(MinecraftLauncher main.cpp login.cpp login.h config.cpp config.h)

add_subdirectory(utils)
