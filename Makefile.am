# Copyright (C) 2015 Caroline Willis
# first attempt at setting up own dejagnu test stuff

AUTOMAKE_OPTIONS = dejagnu

bin_PROGRAMS = maths
maths_SOURCES = maths.cpp

RUNTESTDEFAULTFLAGS = --tool maths MATHS='pwd'/maths --srcdir $$./testsuite
