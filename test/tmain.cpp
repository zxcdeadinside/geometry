#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this
                          // in one cpp file
#include "../src/input.h"
#include "../src/intersection.h"
#include "catch.h"

TEST_CASE("Check entered parameters", "[input]")
{
    double x1 = 3, y1 = 4, x2 = 6, y2 = 7, x3 = 2, y3 = 8;
    REQUIRE(triangle_par(x1, y1, x2, y2, x3, y3) == 1);

    double x0 = 6, y0 = 5, rad = 2;
    REQUIRE(circle_par(x0, y0, rad) == 1);
}

TEST_CASE("Check intersections of figures", "[intersections]")
{
}