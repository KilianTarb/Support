#include "EngineEvents.h"

void EngineEvents::_error_callback(int error, const char* description) {
    std::cout << "[ENGINE ERROR] " << error << " " << description << std::endl;
}

/**
 * Set a callbeck for when the GLFW lib runs into an exception.
 * @TODO Actually call the parameter when there is an error.
 */
void EngineEvents::SetErrorCallback(EngineErrorCallback callback) {
    // _error_callback will be a static method that calls ^ this parameter.
    // For now, it just writes to stdout. Although, that might be what we want
    // to further enable decoupling.
    glfwSetErrorCallback(_error_callback);
}
