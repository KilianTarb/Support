#include "GLFW/glfw3.h"
#include "functional"
#include "IEngineInitalizer.h"
#include "EngineEvents.h"

class EngineInitalizer : public IEngineInitalizer
{
private:

public:
    EngineInitalizer(/* args */);
    ~EngineInitalizer();
    bool Init();
    bool Stop();
    void SetErrorCallback(std::function<void(int error, const char* description)> callback);
};
