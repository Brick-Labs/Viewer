#ifndef VIEWER_H
#define VIEWER_H
#include <GLFW/glfw3.h>
#include <Renderer/Renderer.h>

class Viewer {
   public:
    void run();

   private:
    Renderer::Renderer* pRenderer = nullptr;
    GLFWwindow* window = nullptr;
    const uint32_t WIDTH = 800;
    const uint32_t HEIGHT = 600;
    void initWindow();
    void initRenderer();
    void mainLoop() const;
    void cleanUp() const;
};

#endif  // VIEWER_H
