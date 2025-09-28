#pragma once

#include <list>
#include "glad/vulkan.h"
#include "glfw3.h"

namespace Engine {
    class Window {
    public:
        // Constructor
        Window(int width, int height, bool fullscreen, const char *title);

        // Destructor
        ~Window();

        // Getters
        [[nodiscard]] GLFWwindow* getGLFWWindowHandle() const
        {
            return windowHandle;
        }

    private:
        static std::list<Window *> windows;
        /**
         * Height of the window in pixels.
         */
        int height;
        /**
         * Width of the window in pixels.
         */
        int width;
        /**
         * Flag to indicate whether the window is in fullscreen mode.
         */
        bool fullscreen;
        /**
         * Text to display in the title of the window.
         */
        const char *title;
        /**
         * Pointer to the actual window instance.
         */
        GLFWwindow* windowHandle;

    };
}
