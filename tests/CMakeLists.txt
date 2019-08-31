
FetchContent_Declare(
	catch2
	GIT_REPOSITORY https://github.com/catchorg/Catch2.git
	GIT_TAG v2.9.1
)

FetchContent_MakeAvailable(catch2)

add_executable( testlib testlib.cpp )

target_compile_features( testlib PRIVATE cxx_std_17 )

target_link_libraries( testlib PRIVATE vector_lib Catch2::Catch2 )

add_test( NAME testlibtest COMMAND testlib )