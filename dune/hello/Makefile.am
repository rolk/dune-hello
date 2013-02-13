SUBDIRS = .

hellodir = $(includedir)/dune/hello
hello_HEADERS = hello.hpp

noinst_LTLIBRARIES = libdunehello.la

libdunehello_la_SOURCES = hello.cpp

libdunehello_la_CPPFLAGS = $(AM_CPPFLAGS) $(DUNE_CPPFLAGS)
libdunehello_la_LDFLAGS  = $(DUNE_LDFLAGS)

include $(top_srcdir)/am/global-rules

