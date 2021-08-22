add_library(
    engine
    ./include/Engine.h
    ./src/Engine.cc
    ./include/EngineLogger.h
    ./src/EngineLogger.cc
    ./include/EventSystem.h
    ./src/EventSystem.cc
    ./include/WindowManager.h
    ./src/WindowManager.cc
)

# Include opengl lib
target_link_libraries(engine PUBLIC opengl)

# Set the engine's include directory
target_include_directories(engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
