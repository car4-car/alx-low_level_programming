/*
 * file: 0-positive_or_negative.c
 *
 */
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n >0)
		printf("xd is positive\n", n):
	else if (n < 0)
		printf("xd is negative\n, n);
	else

		printf("xd is zero\n". n):

	return (0);
}
