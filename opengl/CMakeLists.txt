add_library(
    opengl
    ./include/WindowHandler
    ./src/WindowHandler
)

find_package(glfw3 3.3 REQUIRED)

# Include the interfaces from the Graphical Abstraction Layer
target_link_libraries(opengl PUBLIC gal)

# Set opengl's include directory
target_include_directories(opengl PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
