cmake_minimum_required(VERSION 3.1)

project(GVNE LANGUAGES CXX)

# Set Your Own QT Library Path (Can use absolute or relative paths)
set(Qt5_DIR ~/SDK/QT/5.9.7/clang_64/lib/cmake/Qt5/)

# Set CMAKE Options For QT And QML
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set CMAKE Output Dir
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_HOME_DIRECTORY}/Build/Debug)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_HOME_DIRECTORY}/Build/Release)

# Find QT Lib
find_package(Qt5 COMPONENTS Core Quick REQUIRED)

# Use Include Files
include_directories(Src/Headers)

# Load Source Files
aux_source_directory(Src SOURCES)

# Set Build Target
if (CMAKE_HOST_WIN32)
    message("Build On Windows.....")
    add_executable(${PROJECT_NAME} ${SOURCES} "QRC/qml.qrc" ${CMAKE_HOME_DIRECTORY}Resources/Application.rc)
elseif (CMAKE_HOST_APPLE)
    message("Build On MacOS.....")

    # Info.plist configure
    if (EXISTS ${CMAKE_HOME_DIRECTORY}/Config/Info.plist)
        message("Build With Custom plist.....")
    else ()
        message("Build With Default plist.....")
        # Set ICON NAME
        # NOTE: Don't include the path in MACOSX_BUNDLE_ICON_FILE -- this is the property added to Info.plist
        set(MACOSX_BUNDLE_ICON_FILE icon)

        # Mac OS plist File
        set(MACOSX_BUNDLE_BUNDLE_VERSION 0.0.1)
        set(MACOSX_BUNDLE_COPYRIGHT GloomyGhost)
        set(MACOSX_BUNDLE_BUNDLE_NAME ${PROJECT_NAME})
    endif ()
    # Set ICON PATH
    set(ICON Resources/icon.icns)

    # Add to .app file
    set_source_files_properties(${ICON} PROPERTIES MACOSX_PACKAGE_LOCATION Resources)
    add_executable(${PROJECT_NAME} MACOSX_BUNDLE ${ICON} ${SOURCES} "QRC/qml.qrc")

    # Add Plist File if Use custom file
    if (EXISTS ${CMAKE_HOME_DIRECTORY}/Config/Info.plist)
        set_target_properties(${PROJECT_NAME} PROPERTIES MACOSX_BUNDLE_INFO_PLIST ${CMAKE_HOME_DIRECTORY}/Config/Info.plist)
    endif ()
elseif (CMAKE_HOST_UNIX)
    message("Work In Process")
endif ()

target_compile_definitions(${PROJECT_NAME} PRIVATE $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:QT_QML_DEBUG>)
target_link_libraries(${PROJECT_NAME} PRIVATE Qt5::Core Qt5::Quick)
