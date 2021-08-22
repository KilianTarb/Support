#include "EngineInitalizer.h"
#include "WindowManager.h"

/**
 * Entry point for the engine's context and configurations.
 */
class Engine
{
private:
    IEngineInitalizer *_engine_init;
    WindowManager *_window_manager;
public:
    Engine(/* args */);
    ~Engine();
    bool Init();
    void Start();
    bool Stop();
};
