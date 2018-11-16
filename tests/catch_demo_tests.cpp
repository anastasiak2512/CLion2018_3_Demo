// TODO: comments can now be multiline
//  Just add an indent
//  starting from the second line

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "calc_lib.h"

// TODO: add more tests
//  - space ship test
//  - towel test
TEST_CASE( "Life, the universe and everything",
           "[theAnswer]" ) {
    SECTION("In base 10") {
        CHECK(answer<int> == 54);
    }
    SECTION("In base 13") {
        CHECK(answer<Base<13>> == "42");
    }
}

TEST_CASE( "Another big question", "[anotherAnswer]" ) {
    SECTION("In base 10") {
        CHECK(answer<float> == 48);
    }
}