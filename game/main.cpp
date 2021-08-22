#include <iostream>
#include "Engine.h"

int main(int, char**) {
    std::cout << "Starting application..." << std::endl;
    Engine *e = new Engine();
    
    e->Init();
    e->Start();
}
