#include "catch.hpp"
#include "Calculator.h"

SCENARIO("A calculator stores the result of the last operation "){
	GIVEN("a new calculator object"){
		Calculator calc;
		WHEN("before an operation is performed"){
			THEN("the stored result should be 0.00"){
				REQUIRE(calc.lastAnswer() == 0.0);
			}
		}
		AND_WHEN("addition is performed"){
			calc.add(2,5);
			THEN("The result should be stored"){
				REQUIRE(calc.lastAnswer() == 7);
			}
		}
		AND_WHEN("subtraction is performed"){
			calc.sub(5,3);
			THEN("the result should be stored"){
				REQUIRE(calc.lastAnswer() == 2);
			}
		}
		AND_WHEN("multiplication is performed"){
			calc.mult(3,5);
			THEN("the result should be stored"){
				REQUIRE(calc.lastAnswer() == 15);
			}
		}
		AND_WHEN("division is performed"){
			calc.div(3,1);
			THEN("the result should be stored"){
				REQUIRE(calc.lastAnswer() == 3);
			}
		}
	}
}

SCENARIO("A calculator can add numbers"){
	GIVEN("A calulator can add two numbers"){
		Calculator calc;
		WHEN("add is called with two numbers"){
			THEN("calculator should give the correct result"){
				REQUIRE(calc.add(3,5) == 8);
				REQUIRE(calc.add(2,-4) == -2);
				REQUIRE(calc.add(3.4, 8.2) == 11.6);
				REQUIRE(calc.add(3.1, 2.25) == 5.35);
			}
		}
	}
}