#include <stdio.h>
#include <time.h>
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
	/* your code goes there */
	if (n > 0)
		printf(n, "%d is positive\n");
	if (n == 0)
		printf(n, "%d is zero\n");
	if (n < 0)
		printf(n, "%d is negative\n");
	return (0);
}
