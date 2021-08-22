/**
 * Base class for loggers.
 */
class ILogger
{
public:
    /**
     * Log general information.
     * 
     * @param text Text to print. 
     */
    virtual void LogInfo(const char *text) = 0;

    /**
     * Log warnings that are non-critical to the process runtime.
     * 
     * @param text Text to print. 
     */
    virtual void LogWarn(const char *text) = 0;

    /**
     * Log critical errors that can affect the process runtime.
     * 
     * @param text Text to print. 
     */
    virtual void LogError(const char *text) = 0;

    /**
     * Log fatal erros that cause the process to die.
     * 
     * @param text Text to print. 
     */
    virtual void LogFatal(const char *text) = 0;
};
