
CFLAGS = -Wall

all: ietime

ietime: ietime.c

install: ietime
	install -m111 ietime ~/bin/ietime

clean:
	rm -f *.o
clobber: clean
	rm -f ietime
