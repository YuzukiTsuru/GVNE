cmake_minimum_required(VERSION 3.1)

project(GVNE LANGUAGES CXX)

# Set Your Own QT Library Path (Can use absolute or relative paths)
set(Qt5_DIR ~/SDK/QT/5.9.7/clang_64/lib/cmake/Qt5/)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Core Quick REQUIRED)

include_directories(Sources/Headers)

add_executable(${PROJECT_NAME} "Sources/Sources/main.cpp" "QRC/qml.qrc" Sources/Headers/main.h)
target_compile_definitions(${PROJECT_NAME} PRIVATE $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:QT_QML_DEBUG>)
target_link_libraries(${PROJECT_NAME} PRIVATE Qt5::Core Qt5::Quick)
