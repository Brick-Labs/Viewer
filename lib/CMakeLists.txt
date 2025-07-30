message("GLFW")
add_subdirectory(glfw)
message("Renderer")
add_subdirectory(Renderer)

# Check if Logger is already linked, which is always the case because it is linked inside the Renderer
if(NOT TARGET Logger::Logger)
    message("Logger")
    add_subdirectory(Logger)
endif()

target_link_libraries(${PROJECT_NAME} PRIVATE glfw Renderer::Renderer Logger::Logger)