cmake_minimum_required(VERSION 3.25)
project(MinecraftLauncher)
set(CMAKE_CXX_STANDARD 23)

if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR})
    message(FATAL_ERROR "In-source builds are not allowed.")
endif()

find_package(SFML 2.5 COMPONENTS graphics network REQUIRED)

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)

set(CMAKE_CURRENT_BINARY_DIR ${CMAKE_BINARY_DIR})
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})
add_subdirectory(src)

target_link_libraries(MinecraftLauncher sfml-graphics sfml-network)
