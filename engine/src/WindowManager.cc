#include "WindowManager.h"

WindowManager::WindowManager() {
    _handler = new WindowHandler();
}

WindowManager::~WindowManager() {

}

/**
 * Creates a new Window
 */
void WindowManager::StartWindow(const char *title) {
    _handler->CreateWindow(title);
}