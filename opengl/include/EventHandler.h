#include "IEventHandler.h"

class EventHandler : public IEventHandler
{
private:
    /* data */
public:
    EventHandler(/* args */);
    ~EventHandler();
    void RegisterErrorEvent(std::function<void(int error, const char* description)> callback);
};
