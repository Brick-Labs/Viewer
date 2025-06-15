message("GLFW")
add_subdirectory(glfw)
message("Renderer")
add_subdirectory(Renderer)

target_link_libraries(${PROJECT_NAME} PRIVATE glfw Renderer::Renderer)