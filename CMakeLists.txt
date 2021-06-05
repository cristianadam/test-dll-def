cmake_minimum_required(VERSION 3.15)

project(test-dll-def)

add_library(dll SHARED dll.cpp)

if (MSVC)
    target_compile_definitions(dll PRIVATE BUILD_DLL)

    set_property(TARGET dll APPEND_STRING PROPERTY
                 LINK_FLAGS " /DEF:${CMAKE_CURRENT_LIST_DIR}/dll.def")
endif()

add_executable(exe main.cpp)
target_link_libraries(exe PRIVATE dll)

