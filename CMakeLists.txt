cmake_minimum_required(VERSION 3.30)
project(glad LANGUAGES C)

set(CMAKE_C_STANDARD_REQUIRED true)
set(CMAKE_C_STANDARD 23)

set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib/)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin/)

set(GLAD_SOURCE source/glad.c)

if(LINUX)
    set(GLAD_SOURCE ${GLAD_SOURCE} source/glad_glx.c source/glad_egl.c)
elseif(WIN32)
    set(GLAD_SOURCE ${GLAD_SOURCE} source/glad_wgl.c)
endif()

add_library(glad SHARED ${GLAD_SOURCE})
target_include_directories(glad PUBLIC include/)
