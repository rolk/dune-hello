# The dune-hello library
lib_LTLIBRARIES = libdunehello.la

libdunehello_la_SOURCES =

# Dummy C++ source to cause C++ linking.
nodist_EXTRA_libdunehello_la_SOURCES = dummy.cpp

# Collect constituent parts into hello library.
libdunehello_la_LIBADD = \
   ../dune/hello/libdunehello.la

include $(top_srcdir)/am/global-rules
