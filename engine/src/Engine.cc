#include "Engine.h"

Engine::Engine() { 
    _engine_init = new EngineInitalizer();
    _window_manager = new WindowManager();
}

Engine::~Engine() { }

/**
 * Initalises the engine. This must be called before further calls can be made.
 * @return bool If the initalisation was successful.
 */
bool Engine::Init() { 
    _engine_init->SetErrorCallback({});
    return _engine_init->Init();
}

/**
 * Starts the engine's process by creating the window and context.
 */
void Engine::Start() {
    _window_manager->StartWindow("Support");
}
