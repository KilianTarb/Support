#include "EventHandler.h"

EventHandler::EventHandler() { }
EventHandler::~EventHandler() { }

void EventHandler::RegisterErrorEvent(std::function<void(int error, const char* description)> callback) { }