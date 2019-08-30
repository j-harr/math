#include "catch.hpp"
#include <../MathLib/vector.h>

TEST_CASE("Vector Test")
{
	Vector vector;
	REQUIRE(vector.gimme1() == 1);
}