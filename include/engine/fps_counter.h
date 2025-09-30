#ifndef FBTF__ENGINE__FPS_COUNTER_H
#define FBTF__ENGINE__FPS_COUNTER_H 

#include "glfw3.h"

namespace Engine {
class FpsCounter {
public:
    // Constructors
    FpsCounter();
    FpsCounter(const int bufferSize);

    // Destructor
    ~FpsCounter();

    // Getters
    double runningAverage() const {
        double average = 0;
        for (int i = 0; i < this->bufferSize; i++) {
            average += this->bufferArray[i];
        }
        return 1.0 / (average / this->bufferSize);
    }

    void recordFrame() {
        this->bufferArray[this->bufferOffset] = glfwGetTime();
        this->bufferOffset = (this->bufferOffset + 1) % this->bufferSize;
        glfwSetTime(0.0);
    }

private:
    int bufferSize;
    int bufferOffset;
    double* bufferArray;
};
} // namespace Engine

#endif