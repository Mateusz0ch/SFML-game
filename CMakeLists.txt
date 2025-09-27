cmake_minimum_required(VERSION 3.10)
project(SFML_Game)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find SFML
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

# Add executable
add_executable(sfml-game main.cpp src/Game.cpp)

target_include_directories(sfml-game PRIVATE
    inc/)
# Link SFML libraries
target_link_libraries(sfml-game sfml-graphics sfml-window sfml-system)
