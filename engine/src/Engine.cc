#include "Engine.h"

Engine::Engine() { 
    _engine_init = new EngineInitalizer();
    _window_manager = new WindowManager();
}

Engine::~Engine() { }

bool Engine::Init() { 
    _engine_init->SetErrorCallback({});
    return _engine_init->Init();
}

void Engine::Start() {
    _window_manager->StartWindow("Support");
}
