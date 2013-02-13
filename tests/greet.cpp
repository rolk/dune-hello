#include <config.h>

/* --- Boost.Test boilerplate --- */
#if HAVE_DYNAMIC_BOOST_TEST
#define BOOST_TEST_DYN_LINK
#endif

#define NVERBOSE  // Suppress own messages when throw()ing

#define BOOST_TEST_MODULE Greet
#include <boost/test/unit_test.hpp>

/* --- our own headers --- */
#include <dune/hello/hello.hpp>

struct HelloSetup {
   Dune::Hello::Hello h;
};

BOOST_FIXTURE_TEST_SUITE(Greet, HelloSetup)

BOOST_AUTO_TEST_CASE(sayHello)
{
   BOOST_REQUIRE (h () == 42);
}

BOOST_AUTO_TEST_SUITE_END()
