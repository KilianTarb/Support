#include "EngineInitalizer.h"

EngineInitalizer::EngineInitalizer() { }
EngineInitalizer::~EngineInitalizer() { }

/**
 * Makes the GLFW initalisation call.
 * @return bool If the init was successfull.
 */
bool EngineInitalizer::Init() {
    return glfwInit();
}

/**
 * Terminates the GLFW library by clearing up resources.
 * @return bool Returns after the call has finished.
 */
bool EngineInitalizer::Stop() {
    glfwTerminate();
    return true;
}

void EngineInitalizer::SetErrorCallback(EngineErrorCallback callback) {
    EngineEvents::SetErrorCallback(callback);
}
