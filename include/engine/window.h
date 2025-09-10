#pragma once

namespace Engine {
    class Window {
    public:
        // Constructor
        Window(int height, int width, bool fullscreen, const char *title);

        // Destructor
        ~Window();

    private:
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
    };
}
