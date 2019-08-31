set(HEADER_LIST "${JMath_SOURCE_DIR}/include/jmath/vector.hpp")

add_library( vector_lib vector.cpp ${HEADER_LIST} )

target_include_directories( vector_lib PUBLIC ../include )

#target_link_libraries( vector_lib PRIVATE Boost::boost )

target_compile_features( vector_lib PUBLIC cxx_std_11 )

source_group( TREE "${PROJECT_SOURCE_DIR}/include" 
                PREFIX "Header Files" 
                FILES ${HEADER_LIST} )