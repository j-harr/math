#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <jmath/vector.hpp>

TEST_CASE( "Vector Constructor", "[vector]" ) {
    Vector<int> *a = new Vector<int>();
    REQUIRE( a->size() == 0 );

    Vector<int> *b = new Vector<int>(0);
    REQUIRE( b->size() == 0 );

    Vector<int> c(3);
    REQUIRE( c.size() == 3 );

    REQUIRE_THROWS_AS(Vector<int>(-1), std::invalid_argument);
}