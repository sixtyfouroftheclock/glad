cmake_minimum_required(VERSION 3.30)
project(glo LANGUAGES C)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED true)
set(CMAKE_C_EXTENSIONS false)

set(GLO_SOURCE source/gl.c source/egl.c)

add_library(glo)
target_include_directories(glo PUBLIC include/)

find_package(X11 QUIET)

if(X11_FOUND)
    list(APPEND GLO_SOURCE source/glx.c)
    set_target_properties(glo PROPERTIES POSITION_INDEPENDENT_CODE ON)
    target_link_libraries(glo PUBLIC X11 GL)
elseif(WIN32)
    list(APPEND GLO_SOURCE source/wgl.c)
    target_link_libraries(glo PUBLIC opengl32 dwmapi)
else()
    message(FATAL_ERROR)
endif()


target_sources(glo PRIVATE ${GLO_SOURCE})

target_compile_definitions(glo PRIVATE GLO_API_CALL_EXPORT_BUILD PUBLIC GLO_API_CALL_EXPORT)
