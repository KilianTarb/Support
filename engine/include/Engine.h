#include "EngineInitalizer.h"
#include "WindowManager.h"

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
