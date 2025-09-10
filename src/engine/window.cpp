#include "engine/window.h"
#include <iostream>

Engine::Window::Window(int height, int width, bool fullscreen, const char* title)
    : height(height),
      width(width),
      fullscreen(fullscreen),
      title(title)
{
    std::cout << "Initializing Window." << std::endl;
}

Engine::Window::~Window()
{
    std::cout << "Destroying Window." << std::endl;
}