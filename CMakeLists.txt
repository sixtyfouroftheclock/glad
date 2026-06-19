cmake_minimum_required(VERSION 3.30)
project(glad LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED true)
set(CMAKE_C_EXTENSIONS false)

set(GLAD_SOURCE source/gl.c source/egl.c)

find_package(X11 QUIET)

set(GLEXT_INCLUDE ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(static_glext STATIC ${GLAD_SOURCE})
target_include_directories(static_glext PUBLIC ${GLEXT_INCLUDE})

add_library(glext SHARED ${GLAD_SOURCE})
target_include_directories(glext PUBLIC ${GLEXT_INCLUDE})

if(X11_FOUND)
    list(APPEND GLAD_SOURCE source/glx.c)
    set_target_properties(static_glext PROPERTIES POSITION_INDEPENDENT_CODE ON)
    target_link_libraries(static_glext PUBLIC X11 GL)
elseif(WIN32)
    list(APPEND GLAD_SOURCE source/wgl.c)
    target_link_libraries(static_glext PUBLIC opengl32)
else()
    message(FATAL_ERROR)
endif()

target_compile_definitions(glext PRIVATE GLAD_API_CALL_EXPORT_BUILD PUBLIC GLAD_API_CALL_EXPORT)
target_compile_definitions(static_glext PRIVATE GLAD_API_CALL_EXPORT_BUILD PUBLIC GLAD_API_CALL_EXPORT)
