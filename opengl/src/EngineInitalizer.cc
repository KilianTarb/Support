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
