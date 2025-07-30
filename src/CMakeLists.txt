add_executable(Viewer
        Viewer.cpp
)

if(WIN32)
    set_target_properties(Viewer PROPERTIES WIN32_EXECUTABLE TRUE)
endif()

if (APPLE)
    set_target_properties(Viewer PROPERTIES MACOSX_BUNDLE TRUE)
endif ()