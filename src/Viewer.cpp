#include "Viewer.h"

#include <GLFW/glfw3.h>
#include <Renderer/Renderer.h>

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
    initRenderer();
    mainLoop();
    cleanUp();
}

void Viewer::initWindow() {
    glfwInit();

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    window = glfwCreateWindow(WIDTH, HEIGHT, "Viewer", nullptr, nullptr);
}

void Viewer::initRenderer() {
    uint32_t glfwExtensionCount = 0;
    const char** glfwExtensions = glfwGetRequiredInstanceExtensions(&glfwExtensionCount);

    pRenderer = new Renderer::Renderer("Viewer", {0, 0, 1}, glfwExtensionCount, glfwExtensions);
}

void Viewer::mainLoop() const {
    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();
    }
}

void Viewer::cleanUp() const {
    delete pRenderer;

    glfwDestroyWindow(window);

    glfwTerminate();
}