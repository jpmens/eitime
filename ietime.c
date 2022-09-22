#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

	if (argc == 2) {
		days = atol(argv[1]);
	}

	tics += (days * DAY);

	if ((tm = gmtime(&tics)) == NULL) {
		perror("gmtime");
		return -1;
	}

	printf("%04d%02d%02d%02d%02d%02d\n",
		tm->tm_year + 1900,
		tm->tm_mon + 1,
		tm->tm_mday,
		0, 			// tm->tm_hour
		0, 			// tm->tm_min
		0); 			// tm->tm_sec

	return 0;
}
