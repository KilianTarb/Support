#include <functional>

class IEventHandler
{
public:
    IEventHandler();
    ~IEventHandler();
    void RegisterErrorEvent(std::function<void(int error, const char* description)> callback);
};
