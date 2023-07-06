cmake_minimum_required(VERSION 3.5)
project(HackerRank)

# Set the source files for your project
file(GLOB SOURCES "src/*.cpp" "main.cpp")

# Add an executable target for your project
add_executable(HackerRank ${SOURCES})

# Specify include directories for the target
target_include_directories(HackerRank PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Optional: Set any additional compiler flags
# For example, to enable C++17
target_compile_features(HackerRank PUBLIC cxx_std_17)
