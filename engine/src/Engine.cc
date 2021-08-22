#include "Engine.h"

Engine::Engine() { 
    _engine_init = new EngineInitalizer();
    _window_manager = new WindowManager();
    _logger = new EngineLogger();
}

/**
 * Destroy the Engine Object. Will also call `Engine::Stop()` to clear resources
 * @see Engine::Stop()
 */
Engine::~Engine() {
    _engine_init->Stop();
}

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

/**
 * Stops engine and clears up resources.
 * @return bool Once the engine has stopped.
 */
bool Engine::Stop() {
    return _engine_init->Stop();
}
