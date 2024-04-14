cmake_minimum_required(VERSION 3.12)

project(mb_gui_fps)

file(GLOB_RECURSE SOURCES "src/*.c" "src/**/*.c")

add_library(mb_gui_fps STATIC ${SOURCES})

target_include_directories(mb_gui_fps PUBLIC "include")

set_target_properties(mb_gui_fps PROPERTIES
    OUTPUT_NAME "mb_gui_fps"
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}"
)

foreach(CONFIG_TYPE IN LISTS CMAKE_CONFIGURATION_TYPES)
    string(TOUPPER ${CONFIG_TYPE} CONFIG_TYPE_UPPER)
    set_target_properties(mb_gui_fps PROPERTIES
        ARCHIVE_OUTPUT_DIRECTORY_${CONFIG_TYPE_UPPER} "${CMAKE_SOURCE_DIR}"
        LIBRARY_OUTPUT_DIRECTORY_${CONFIG_TYPE_UPPER} "${CMAKE_SOURCE_DIR}"
        RUNTIME_OUTPUT_DIRECTORY_${CONFIG_TYPE_UPPER} "${CMAKE_SOURCE_DIR}"
    )
endforeach()
