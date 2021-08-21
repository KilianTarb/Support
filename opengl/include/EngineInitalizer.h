#include "IEngineInitalizer.h"
#include "GLFW/glfw3.h"

class EngineInitalizer : public IEngineInitalizer
{
private:
    /* data */
public:
    EngineInitalizer(/* args */);
    ~EngineInitalizer();
    bool Init();
    bool Stop();
};
