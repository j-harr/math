cmake_minimum_required ( VERSION 3.13 )

project( Math CXX )

set( Math_VERSION_MAJOR 0 )
set( Math_VERSION_MINOR 1 )

#Add compiler warnings
if(UNIX)
	add_compile_options( -Wall -Wextra -Wpedantic)
endif(UNIX)

add_library( MathLib "" )
add_executable( tests )

add_subdirectory( MathLib )
add_subdirectory( test )

target_include_directories( tests PUBLIC test PUBLIC MathLib )


#target_link_libraries( tests MathLib )

