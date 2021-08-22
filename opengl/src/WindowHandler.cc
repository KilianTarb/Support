#include "WindowHandler.h"

WindowHandler::WindowHandler() { }

WindowHandler::~WindowHandler() { }

/**
 * Creates the GLFW window and starts the process loop.
 */
void WindowHandler::CreateWindow(const char *title) {
    _window = glfwCreateWindow(640, 480, title, glfwGetPrimaryMonitor(), NULL);
    glfwMakeContextCurrent(_window);
}
