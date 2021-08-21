#include "WindowHandler.h"

WindowHandler::WindowHandler() {

}

WindowHandler::~WindowHandler() {
    
}

void WindowHandler::CreateWindow(const char *title) {
    _window = glfwCreateWindow(640, 480, "My Title", NULL, NULL);
}
