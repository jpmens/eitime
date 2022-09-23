
CFLAGS = -Wall

all: eitime

eitime: eitime.c

install: eitime
	install -m111 eitime ~/bin/eitime

clean:
	rm -f *.o
clobber: clean
	rm -f eitime
