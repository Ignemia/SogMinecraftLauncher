add_library(components STATIC login/login.cpp config/config.cpp)
add_subdirectory(gui)
target_link_libraries(MinecraftLauncher gui)
target_link_libraries(MinecraftLauncher components)

