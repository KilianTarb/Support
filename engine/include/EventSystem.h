#include "EventHandler.h"

typedef std::function<void(int error, const char* description)> EngineErrorCallback;

/**
 * Class containing the means to subscribe to different engine events.
 */
class EventSystem
{
private:
    IEventHandler *_handler;
    EngineErrorCallback _libraryErrorCallback;
public:
    EventSystem(/* args */);
    ~EventSystem();
    void SubscribeErrorEvent(EngineErrorCallback callback);
};
