#include <functional>

class IEngineInitalizer
{
public:
    virtual bool Init() = 0;
    virtual bool Stop() = 0;
    virtual void SetErrorCallback(std::function<void(int error, const char* description)> callback) = 0;
};
