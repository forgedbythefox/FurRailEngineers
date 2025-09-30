#include "engine/fps_counter.h"

Engine::FpsCounter::FpsCounter() : FpsCounter(64) {}

Engine::FpsCounter::FpsCounter(const int bufferSize)
    : bufferSize(bufferSize)
    , bufferOffset(0)
{
    this->bufferArray = new double[bufferSize];
    for (int i = 0; i < bufferSize; i++) {
        this->bufferArray[i] = 0;
    }

    glfwSetTime(0.0);
}

Engine::FpsCounter::~FpsCounter()
{
    delete this->bufferArray;
    this->bufferArray = nullptr;
}
