# -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.
AC_PREREQ([2.50])

DUNE_AC_INIT # gets module version from dune.module file
AM_INIT_AUTOMAKE([foreign])

# Use "silent" rules by default if available in the Automake being used to
# process this setup.  See, e.g.,
#
#   http://www.flameeyes.eu/autotools-mythbuster/automake/silent.html
#
# for details, particularly concerning the backwards compatibility.
#
m4_ifdef([AM_SILENT_RULES], [AM_SILENT_RULES([yes])])

AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_SRCDIR([dune/hello/hello.hpp])
AM_CONFIG_HEADER([config.h])

## Make dune -> . symlink
#DUNE_SYMLINK

# Check all dune-module stuff
DUNE_CHECK_ALL

# Set up flags for automated build system
DUNE_AUTOBUILD_FLAGS

# implicitly set the Dune-flags everywhere
AC_SUBST([AM_CPPFLAGS], '$(DUNE_CPPFLAGS) -I$(top_srcdir)')
AC_SUBST([AM_LDFLAGS], '$(DUNE_LDFLAGS) $(DUNE_LIBS)')

AC_CONFIG_FILES([
  Makefile
  m4/Makefile
  lib/Makefile
  tests/Makefile
  dune/hello/Makefile
  dune-hello.pc
  doc/Makefile
  doc/doxygen/Makefile
  doc/doxygen/Doxyfile
])
AC_OUTPUT

DUNE_SUMMARY_ALL
