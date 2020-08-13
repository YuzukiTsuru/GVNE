cmake_minimum_required(VERSION 3.17)
project(GVNE)
set(CMAKE_CXX_STANDARD 17)

# GLFW & GLAD Header
if (CMAKE_BUILD_TYPE STREQUAL Debug)
    ADD_DEFINITIONS(-DDEBUG)
    include_directories(lib/GLAD-3.3/GLAD-3.3-Debug/include/)
    add_library(glad lib/GLAD-3.3/GLAD-3.3-Debug/src/glad.c)
else ()
    include_directories(lib/GLAD-3.3/GLAD-3.3-Release/include/)
    add_library(glad lib/GLAD-3.3/GLAD-3.3-Release/src/glad.c)
endif ()

include_directories(
        lib/glfw-3.3.2/include/
        lib/icecream-cpp/
)

add_subdirectory(lib/glfw-3.3.2 EXCLUDE_FROM_ALL)

if (MSVC)
    set(ICON Resources/Application.rc)
else ()
    set(ICON "")
endif ()

add_executable(GVNE src/gvne.cpp ${ICON})
target_link_libraries(GVNE glfw glad)