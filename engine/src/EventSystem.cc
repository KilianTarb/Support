#include "EventSystem.h"

EventSystem::EventSystem() { 
    _handler = new EventHandler();
}

EventSystem::~EventSystem() { }

/**
 * Callback invoked when the engine runs into an error.
 */
void EventSystem::SubscribeErrorEvent(EngineErrorCallback callback) {
    _libraryErrorCallback = callback;
    _handler->RegisterErrorEvent(_libraryErrorCallback);
}
