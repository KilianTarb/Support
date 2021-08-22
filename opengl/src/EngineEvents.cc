#include "EngineEvents.h"

void EngineEvents::_error_callback(int error, const char* description) {
    std::cout << "[ENGINE ERROR] " << error << " " << description << std::endl;
    EngineErrorCallback _engine_error_callback();
}

/**
 * Set a callbeck for when the GLFW lib throws an exception.
 */
void EngineEvents::SetErrorCallback(EngineErrorCallback callback) {
    EngineErrorCallback _engine_error_callback = callback;
    glfwSetErrorCallback(_error_callback);
}
