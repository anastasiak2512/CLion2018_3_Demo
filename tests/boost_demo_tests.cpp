// Quick Documentation popup (Ctrl+Q on Windows/Linux, F1 on macOS)
// provides an easy way to understand the code that will be substituted
// after the preprocessor pass.
// When called on a macro, it shows the final macro replacement.
// In v2018.3 this replacement is formatted and has keywords highlighted.

#define BOOST_TEST_MAIN
#define BOOST_TEST_MODULE module1
#include <boost/test/included/unit_test.hpp>

#define MY_ONE 1

BOOST_AUTO_TEST_SUITE(demo_suite)

    BOOST_AUTO_TEST_CASE(test_equal_1)
    {
        BOOST_CHECK_EQUAL(MY_ONE, 1);
    }

    BOOST_AUTO_TEST_CASE(test_equal_word)
    {
        char *name = new char[4];
        name[1] = 't';
        name[2] = 'e';
        name[3] = 's';
        name[4] = 't';

        BOOST_CHECK_EQUAL(name, "test");
    }

BOOST_AUTO_TEST_SUITE_END()