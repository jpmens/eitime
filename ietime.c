#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <getopt.h>

/*
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <jp@mens.de> wrote this file.  As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can buy me a beer in return.   Jan-Piet Mens
 * ----------------------------------------------------------------------------
 */

#define DAY (60 * 60 * 24)

int main(int argc, char **argv)
{
	time_t tics = time(NULL);
	long days = 30L;
	struct tm *tm;
	int c, hour = 0, min = 0, sec = 0;
	bool zero = false;
	extern int optind;
	char *progname = *argv;

	while ((c = getopt(argc, argv, "z")) != EOF) {
		switch (c) {
			case 'z':
				zero = true;
				break;
			default:
				fprintf(stderr, "Usage: %s [-z] [+/- days]\n", progname);
				return 1;
		}
	}

	argc -= optind - 1;
	argv += optind - 1;
	if (argc == 2) {
		days = atol(argv[1]);
	}

	tics += (days * DAY);

	if ((tm = gmtime(&tics)) == NULL) {
		perror("gmtime");
		return -1;
	}

	if (!zero) {
		hour = tm->tm_hour;
		min  = tm->tm_min;
		sec  = tm->tm_sec;
	}
	printf("%04d%02d%02d%02d%02d%02d\n",
		tm->tm_year + 1900,
		tm->tm_mon + 1,
		tm->tm_mday,
		hour,
		min,
		sec);

	return 0;
}
