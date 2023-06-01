add_library(SystemLib STATIC system/determinesystem.cpp)
target_link_libraries(MinecraftLauncher SystemLib)
