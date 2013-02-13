SUBDIRS =

check_PROGRAMS = greet

noinst_PROGRAMS = greet

greet_SOURCES = greet.cpp
greet_LDADD = $(LDADD) ../lib/libdunehello.la

TESTS = $(check_PROGRAMS)

AM_CPPFLAGS += $(DUNEMPICPPFLAGS) $(OPM_BOOST_CPPFLAGS)
AM_LDFLAGS += $(DUNEMPILDFLAGS) $(OPM_BOOST_LDFLAGS)

LDADD = \
 $(DUNE_LIBS) $(BOOST_UNIT_TEST_FRAMEWORK_LIB) \
 $(BOOST_SYSTEM_LIB) $(DUNEMPILIBS)

# don't follow the full GNU-standard
# we need automake 1.5
AUTOMAKE_OPTIONS = foreign 1.5

# pass most important options when "make distcheck" is used
DISTCHECK_CONFIGURE_FLAGS = \
 --with-dune-common=$(DUNE_COMMON_ROOT) \
 CXX="$(CXX)" CC="$(CC)"

include $(top_srcdir)/am/global-rules
