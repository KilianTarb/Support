#include "EngineInitalizer.h"

EngineInitalizer::EngineInitalizer() { }
EngineInitalizer::~EngineInitalizer() { }

bool EngineInitalizer::Init() {
    return glfwInit();
}

bool EngineInitalizer::Stop() {
    glfwTerminate();
    return true;
}

void EngineInitalizer::SetErrorCallback(EngineErrorCallback callback) {
    EngineEvents::SetErrorCallback(callback);
}
