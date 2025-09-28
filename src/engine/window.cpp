#include "engine/window.h"
#include <iostream>

std::list<Engine::Window *> Engine::Window::windows;

Engine::Window::Window(const int width, const int height, const bool fullscreen, const char* title)
    : width(width),
      height(height),
      fullscreen(fullscreen),
      title(title)
{
    std::cout << "Initializing Window." << std::endl;

    // Make GLFW Window
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
    windowHandle = glfwCreateWindow(width, height, title, NULL, NULL);
    if (!windowHandle) {
        std::cout << "- Failed to create window." << std::endl;
        glfwTerminate();
        return;
    }

    // Make the current context be the window that was just created
    glfwMakeContextCurrent(windowHandle);

    // Set callback for changing window size
    // glfwSetWindowSizeCallback(windowHandle, resizeCallback);

    // Set mouse mode to be captured
    // glfwSetInputMode(windowHandle, GLFW_CURSOR, GLFW_CURSOR_DISABLED);

    // Set mouse position to center
    // glfwSetCursorPos(windowHandle, 0, 0);

    // Set clear color
    // glClearColor(1.0, 0.0, 0.0, 1.0);

    // Add to the list of windows
    windows.push_back(this);
}

Engine::Window::~Window()
{
    std::cout << "Destroying Window." << std::endl;

    // Destroy window in GLFW
    glfwDestroyWindow(windowHandle);

    // Remove from the list of windows
    windows.remove(this);
}
