# Additional checks needed to build the module
AC_DEFUN([DUNE_HELLO_CHECKS],
[
        OPM_BOOST_BASE
        AX_BOOST_SYSTEM
        AX_BOOST_UNIT_TEST_FRAMEWORK
        OPM_DYNLINK_BOOST_TEST
])

# Additional checks needed to find the module
AC_DEFUN([DUNE_HELLO_CHECK_MODULE],
[
        DUNE_CHECK_MODULES([dune-hello],
                           [hello/hello.hpp],
                           [Dune::Hello::Hello h;])
])
