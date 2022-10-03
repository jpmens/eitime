
CFLAGS = -Wall

all: eitime

eitime: eitime.c

install: eitime
	install -m511 eitime ~/bin/eitime

clean:
	rm -f *.o
clobber: clean
	rm -f eitime
