#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Discription: the variable n is positive or negative
 *
 * Return:0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		prinf("%i is positive\n", n);
	else if (n == 0)
		prinf("%i is zero\n", n);
	else
		prinf("%i is negative\n", n);
	return (0);
}
