#include "EngineLogger.h"

EngineLogger::EngineLogger() { }
EngineLogger::~EngineLogger() { }

void EngineLogger::LogInfo(const char *text) {
    std::cout << "[ENGINE INFO] " << text << std::endl;
}

void EngineLogger::LogWarn(const char *text) {
    std::cout << "[ENGINE WARN] " << text << std::endl;
}

void EngineLogger::LogError(const char *text) {
    std::cout << "[ENGINE ERROR] " << text << std::endl;
}

void EngineLogger::LogFatal(const char *text) {
    std::cout << "[ENGINE FATAL] " << text << std::endl;
}