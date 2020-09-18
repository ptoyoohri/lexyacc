
#### BEGIN LOCAL RULES ####

PACK_NAME	= cbec

LOCALDEFS	=

#DESTDIR		= ../../..

#  INSTALL_FILES        Should be in the form "source destination" in quotes.
#INSTALL_FILES   = "cebc.h $(DESTDIR)/inc" 

# Additional set of files and/or directories to be recursively removed when
# `make clean' is run.
#CLEAN_THESE = "$(DESTDIR)/inc/cbec.h" 

# generate files during install_files phase, otherwise
# it will cause race condition when executing "make -j 10" on LINUX
#install: install_pack_lib

AUTO_HEADER_SOURCES	= cbec_yacc.cpp cbec_yacc.h cbec_lex.cpp

cbec_yacc.cpp cbec_yacc.h : cbec_yacc.y
	bison -d -p cbec_ -o cbec_yacc.cpp cbec_yacc.y
	if (test -f cbec_yacc.hpp) ; then mv cbec_yacc.hpp cbec_yacc.cpp.h ; fi
	#bison -dvt -p cbec_ -o cbec_yacc.cpp cbec_yacc.y
	mv cbec_yacc.cpp.h cbec_yacc.h

cbec_lex.cpp : cbec_yacc.h cbec_lex.l
	flex -Pcbec_ -ocbec_lex.cpp cbec_lex.l

clean:
	rm cbec_yacc.h cbec_yacc.cpp cbec_lex.cpp

HDRS    = cbec.h \
		  cbec_int.h \
		  cbec_kw.h \
		  cbec_yacc.h
SRCS    = cbec.cpp \
		  cbec_lex.cpp \
		  cbec_yacc.cpp
OBJS    = cbec$(POLY_OBJ) \
		  cbec_lex$(POLY_OBJ) \
		  cbec_yacc$(POLY_OBJ)

all: cbec.h cbec_int.h cbec_kw.h cbec_yacc.h cbec.cpp cbec_lex.cpp cbec_yacc.cpp
	g++ cbec.cpp cbec_lex.cpp cbec_yacc.cpp -o cbec

# DO NOT DELETE THIS LINE -- make depend depends on it.

