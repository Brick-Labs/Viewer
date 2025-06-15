add_subdirectory(Renderer)

target_link_libraries(${PROJECT_NAME} PRIVATE Renderer::Renderer)