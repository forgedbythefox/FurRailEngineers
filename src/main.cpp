#include <iostream>

#include "engine/window.h"
#include "engine/fps_counter.h"

int main()
{
    if (!glfwInit()) {
        std::cout << "Failed to initialize GLFW." << std::endl;
        return 1;
    }

    const auto window = new Engine::Window(640, 480, false, "Hello World");
    const auto fpsCounter = new Engine::FpsCounter();

    while (!glfwWindowShouldClose(window->getGLFWWindowHandle())) {
        glfwSwapBuffers(window->getGLFWWindowHandle());

        // calculate FPS
        fpsCounter->recordFrame();
        window->setWindowTitle(
            ("FPS: " + std::to_string(fpsCounter->runningAverage())).c_str());

        glfwPollEvents();
    }

    glfwTerminate();

    delete window;
    delete fpsCounter;
    return 0;
}