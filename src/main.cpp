#include <iostream>
#include "engine/window.h"

int main()
{
    Engine::Window* window = new Engine::Window(100, 200, false, "Hello World");

    auto lang = "C++";
    std::cout << "G'day and welcome to " << lang << "!\n";

    delete window;
    return 0;
}