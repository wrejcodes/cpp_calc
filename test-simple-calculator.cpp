#include "catch.hpp"
#include "Calculator.h"

TEST_CASE("A calculator stores the result of the last operation"){
	SECTION("A new calculator should have a result of 0"){
		Calculator calc;

		REQUIRE(calc.getResult() == 0.0);
	}
}

TEST_CASE("A calculator can add subtract multiply and divide"){
	Calculator calc;
	SECTION("a calculator can add"){
		calc.add(3,5);
		REQUIRE(calc.getResult() == 8);
	}
	// SECTION("a calculator can subtract"){

	// }
}
