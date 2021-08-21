#include "WindowHandler.h"

class WindowManager
{
private:
    IWindowHandler *_handler;
public:
    WindowManager();
    ~WindowManager();
    void StartWindow(const char *title);
};
