#
# Makefile for the SPY ala Alberto Fit
#
SHELL = /bin/sh

#include $(NOMADSRC)/Rules/Nomad.versions

INCLUDES = .

F_SOURCES=$(wildcard *.F)
F_SRCS=$(notdir $(F_SOURCES))
FOBJS=$(F_SRCS:%.F=%.o)

mains = main.o
OBJS = $(filter-out $(mains),$(FOBJS))

LOCPATH = 
CERNPATH= -L$(CERN)/pro/lib
LIBPATH = $(LOCPATH) $(CERNPATH)

FFLAGS  += -g
LDFLAGS += -g

#
# To select what kind of fit we're going to do:
#
#FFLAGS += -DSTANDARDFIT 

link_F = g77

default: main

main: main.o $(OBJS)
	$(RM) $@
	$(link_F) $(LDFLAGS) -o $@ $@.o \
	$(OBJS) \
	$(LIBPATH) `cernlib pawlib graflib packlib mathlib kernlib`


depend:
	makedepend -f My.Make.depends -I $(INCLUDES) *.F

include My.Make.depends
