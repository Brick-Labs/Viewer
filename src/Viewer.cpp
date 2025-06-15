#include "Viewer.h"

#include <GLFW/glfw3.h>
#include <Renderer.h>

#include <iostream>

int main() {
    Viewer app;

    try {
        app.run();
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

void Viewer::run() {
    initWindow();
    initVulkan();
    mainLoop();
    cleanUp();
}

void Viewer::initWindow() {
    glfwInit();

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    window = glfwCreateWindow(WIDTH, HEIGHT, "Viewer", nullptr, nullptr);
}

void Viewer::initVulkan() {}
void Viewer::mainLoop() {
    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();
    }
}
void Viewer::cleanUp() {
    glfwDestroyWindow(window);

    glfwTerminate();
}