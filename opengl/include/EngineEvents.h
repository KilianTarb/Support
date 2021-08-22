#include <GLFW/glfw3.h>
#include <functional>
#include <iostream>

typedef std::function<void(int error_code, const char* description)> EngineErrorCallback;

/**
 * Class containing and initalising GLFW's event callbacks.
 */
class EngineEvents
{
private:
    static EngineErrorCallback _engine_error_callback;
    static void _error_callback(int error_code, const char* description);
public:
    static void SetErrorCallback(EngineErrorCallback callback);
};
