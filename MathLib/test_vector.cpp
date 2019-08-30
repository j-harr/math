#include "catch.hpp"
#include "vector.h"

TEST_CASE("My First Case")
{
	REQUIRE(5 + 6 == 11);
}

TEST_CASE("Vector Constructor")
{
	Vector vector;
	REQUIRE(vector.gimme1() == 1);
}