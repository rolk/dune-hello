# Additional checks needed to build the module
AC_DEFUN([DUNE_HELLO_CHECKS],
[
])

# Additional checks needed to find the module
AC_DEFUN([DUNE_HELLO_CHECK_MODULE],
[
        DUNE_CHECK_MODULES([dune-hello],
                           [hello/hello.hpp],
                           [Dune::Hello::Hello h;])
])
