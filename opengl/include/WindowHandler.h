#include "IWindowHandler.h"
#include <GLFW/glfw3.h>

/**
 * Class for handling the GLFW Window.
 */
class WindowHandler : public IWindowHandler
{
private:
    GLFWwindow *_window;
public:
    WindowHandler(/* args */);
    ~WindowHandler();
    void CreateWindow(const char *title);
};
