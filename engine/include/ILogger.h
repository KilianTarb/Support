class ILogger
{
public:
    virtual void LogInfo(const char *text) = 0;
    virtual void LogWarn(const char *text) = 0;
    virtual void LogError(const char *text) = 0;
    virtual void LogFatal(const char *text) = 0;
};
