#include <iostream>
#include "engine/window.h"

int main()
{
    if (!glfwInit()) {
        std::cout << "Failed to initialize GLFW." << std::endl;
    }

    const auto window = new Engine::Window(640, 480, false, "Hello World");

    auto lang = "C++";
    std::cout << "G'day and welcome to " << lang << "!\n";

    while (!glfwWindowShouldClose(window->getGLFWWindowHandle()))
    {
        glfwPollEvents();
    }

    glfwTerminate();

    delete window;
    return 0;
}