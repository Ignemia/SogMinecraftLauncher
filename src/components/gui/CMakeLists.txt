add_library(gui index.cpp color/color.cpp) #checkbox/checkbox.cpp button/button.cpp textbox/textbox.cpp)

# Enable CMake testing support
enable_testing()

# Add the executable for the test along with the implementation file
add_executable(gui_test color/test.cpp color/color.cpp)

# Find and import GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Link the test executable with GTest and pthread
target_link_libraries(gui_test ${GTEST_LIBRARIES} pthread)