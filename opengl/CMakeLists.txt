add_library(
    opengl
    ./include/EngineInitalizer
    ./src/EngineInitalizer
    ./include/EngineEvents
    ./src/EngineEvents
    ./include/WindowHandler
    ./src/WindowHandler
)

# Find OpenGL-GLFW lib and add to target
find_package(glfw3 3.3 REQUIRED)
target_link_libraries(opengl PUBLIC glfw)

# Include the interfaces from the Graphical Abstraction Layer
target_link_libraries(opengl PUBLIC gal)

# Set opengl's include directory
target_include_directories(opengl PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
