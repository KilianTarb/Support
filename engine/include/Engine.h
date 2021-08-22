#include "EngineInitalizer.h"
#include "WindowManager.h"
#include "EngineLogger.h"

/**
 * Entry point for the engine's context and configurations.
 */
class Engine
{
private:
    EngineLogger *_logger;
    IEngineInitalizer *_engine_init;
    WindowManager *_window_manager;
public:
    Engine(/* args */);
    ~Engine();
    bool Init();
    void Start();
    bool Stop();
};
