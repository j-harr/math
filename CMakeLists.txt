cmake_minimum_required ( VERSION 3.11...3.15 )

project( JMath
	VERSION 0.1
	DESCRIPTION "Jacob's Math Library"
	LANGUAGES CXX )

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME )
	set(C MAKE_CXX_EXTENSIONS OFF )
	set_property( GLOBAL PROPERTY USE_FOLDERS ON )
	include(CTest)
	find_package(Doxygen)
	if(Doxygen_FOUND)
		add_subdirectory(docs)
	else()
		message(STATUS "Doxygen not found, not building docs")
	endif()
endif()

include(FetchContent)
if( ${CMAKE_VERSION} VERSION_LESS 3.14 )
	include( cmake/add_FetchContent_MakeAvailable.cmake )
endif()

add_subdirectory( src )
#add_subdirectory( apps )

if(( CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME OR MODERN_CMAKE_BUILD_TESTING) AND BUILD_TESTING )
	add_subdirectory( tests )
endif()
