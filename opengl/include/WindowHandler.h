#include "IWindowHandler.h"
#include <GLFW/glfw3.h>

class WindowHandler : public IWindowHandler
{
private:
    GLFWwindow *_window;
public:
    WindowHandler(/* args */);
    ~WindowHandler();
    void CreateWindow(const char *title);
};
