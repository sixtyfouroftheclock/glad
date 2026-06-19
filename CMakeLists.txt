cmake_minimum_required(VERSION 4.0)
project(glext LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED true)
set(CMAKE_C_EXTENSIONS false)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(GLEXT_SOURCE source/gl.c source/egl.c)
set(GLEXT_INCLUDE ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(static_glext STATIC ${GLEXT_SOURCE})
target_include_directories(static_glext PRIVATE ${GLEXT_INCLUDE})

add_library(glext SHARED ${GLEXT_SOURCE})
target_include_directories(glext PRIVATE ${GLEXT_INCLUDE})

find_package(X11 QUIET)
if(X11_FOUND)
  list(APPEND GLEXT_SOURCE source/glx.c)
  set_target_properties(static_glext PROPERTIES POSITION_INDEPENDENT_CODE ON)
  target_link_libraries(static_glext PUBLIC X11 GL)
elseif(WIN32)
  list(APPEND GLEXT_SOURCE source/wgl.c)
  target_link_libraries(static_glext PUBLIC opengl32)
else()
  message(FATAL_ERROR)
endif()

target_compile_definitions(glext PRIVATE GLEXT_API_CALL_EXPORT_BUILD PUBLIC GLEXT_API_CALL_EXPORT)
target_compile_definitions(static_glext PRIVATE GLEXT_API_CALL_EXPORT_BUILD PUBLIC GLEXT_API_CALL_EXPORT)

add_executable(glfw_window_test tests/window.c)
target_include_directories(glfw_window_test PRIVATE ${GLEXT_INCLUDE})
target_link_libraries(glfw_window_test PRIVATE glext glfw3)
