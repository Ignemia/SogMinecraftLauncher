cmake_minimum_required(VERSION 3.16)
project(MinecraftLauncher)
set(CMAKE_CXX_STANDARD 20)

set(CMAKE_BINARY_DIR ${PROJECT_SOURCE_DIR}/build)

find_package(SFML 2.5 COMPONENTS graphics network REQUIRED)

set(CMAKE_CURRENT_BINARY_DIR ${CMAKE_BINARY_DIR})
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR})
    message(FATAL_ERROR "In-source builds are not allowed.")
endif()


set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})
add_subdirectory(src)

target_link_libraries(MinecraftLauncher sfml-graphics sfml-network)