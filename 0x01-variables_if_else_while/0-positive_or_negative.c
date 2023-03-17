#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return : Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
		n = rand() - RAND_MAX / 2;
		if (n > 0)
			printf(n, "%d is positive\n");
		if (n == 0)
			printf(n, "%d is zero\n");
		if (n < 0)
			printf(n, "%d is negative\n");
		return (0);
}
