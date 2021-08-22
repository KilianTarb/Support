#include "WindowHandler.h"

/**
 * Manages the application's Window state.
 */
class WindowManager
{
private:
    IWindowHandler *_handler;
public:
    WindowManager();
    ~WindowManager();
    void StartWindow(const char *title);
};
