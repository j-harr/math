cmake_minimum_required ( VERSION 3.8 )

project( Math )

set( Math_VERSION_MAJOR 0 )
set( Math_VERSION_MINOR 1 )

configure_file(
    "${PROJECT_SOURCE_DIR}/MathConfig.h.in"
    "${PROJECT_BINARY_DIR}/MathConfig.h"
)

include_directories( "${PROJECT_BINARY_DIR}" )

#Add compiler warnings
add_compile_options( -Wall -Wextra -Wpedantic)

add_executable( MathTest mathtest.cpp )
