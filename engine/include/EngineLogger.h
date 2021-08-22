#include "ILogger.h"
#include <iostream>

class EngineLogger : public ILogger
{
private:
    void _printToStdout(const char *text);
public:
    EngineLogger();
    ~EngineLogger();
    void LogInfo(const char *text);
    void LogWarn(const char *text);
    void LogError(const char *text);
    void LogFatal(const char *text);
}; 
