#
# Created by gmakemake (Ubuntu Sep  7 2011) on Tue Oct  9 20:15:24 2012
#

#
# Definitions
#

.SUFFIXES:
.SUFFIXES:	.a .o .c .C .cpp .s .S
.c.o:
		$(COMPILE.c) $<
.C.o:
		$(COMPILE.cc) $<
.cpp.o:
		$(COMPILE.cc) $<
.S.s:
		$(CPP) -o $*.s $<
.s.o:
		$(COMPILE.cc) $<
.c.a:
		$(COMPILE.c) -o $% $<
		$(AR) $(ARFLAGS) $@ $%
		$(RM) $%
.C.a:
		$(COMPILE.cc) -o $% $<
		$(AR) $(ARFLAGS) $@ $%
		$(RM) $%
.cpp.a:
		$(COMPILE.cc) -o $% $<
		$(AR) $(ARFLAGS) $@ $%
		$(RM) $%

CC =		gcc
CXX =		g++

RM = rm -f
AR = ar
LINK.c = $(CC) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS)
LINK.cc = $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(LDFLAGS)
COMPILE.c = $(CC) $(CFLAGS) $(CPPFLAGS) -c
COMPILE.cc = $(CXX) $(CXXFLAGS) $(CPPFLAGS) -c
CPP = $(CPP) $(CPPFLAGS)
########## Default flags (redefine these with a header.mak file if desired)
CXXFLAGS =	-ggdb
CFLAGS =	-ggdb
CLIBFLAGS =	-lm
CCLIBFLAGS =	
########## End of default flags


CPP_FILES =	ArrayStack.cpp LinkedStack.cpp stacktest.cpp
C_FILES =	
PS_FILES =	
S_FILES =	
H_FILES =	ArrayStack.h LinkedStack.h Stack.h
SOURCEFILES =	$(H_FILES) $(CPP_FILES) $(C_FILES) $(S_FILES)
.PRECIOUS:	$(SOURCEFILES)
OBJFILES =	ArrayStack.o LinkedStack.o 

#
# Main targets
#

all:	stacktest 

stacktest:	stacktest.o $(OBJFILES)
	$(CXX) $(CXXFLAGS) -o stacktest stacktest.o $(OBJFILES) $(CCLIBFLAGS)

#
# Dependencies
#

ArrayStack.o:	ArrayStack.h Stack.h
LinkedStack.o:	LinkedStack.h Stack.h
stacktest.o:	ArrayStack.h LinkedStack.h Stack.h

#
# Housekeeping
#

Archive:	archive.tgz

archive.tgz:	$(SOURCEFILES) Makefile
	tar cf - $(SOURCEFILES) Makefile | gzip > archive.tgz

clean:
	-/bin/rm $(OBJFILES) stacktest.o core 2> /dev/null

realclean:        clean
	-/bin/rm -rf stacktest 
