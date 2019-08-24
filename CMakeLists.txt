cmake_minimum_required ( VERSION 3.8 )

project( Math CXX )

set( Math_VERSION_MAJOR 0 )
set( Math_VERSION_MINOR 1 )
include_directories(src)
link_directories(src)
add_subdirectory( src )

#Add compiler warnings
add_compile_options( -Wall -Wextra -Wpedantic)



add_executable( MathTest mathtest.cpp )

target_link_libraries( MathTest Vector )
