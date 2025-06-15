#ifndef VIEWER_H
#define VIEWER_H
#include "GLFW/glfw3.h"

class Viewer {
   public:
    void run();

   private:
    GLFWwindow* window;
    const uint32_t WIDTH = 800;
    const uint32_t HEIGHT = 600;
    void initWindow();
    void initVulkan();
    void mainLoop();
    void cleanUp();
};

#endif  // VIEWER_H
