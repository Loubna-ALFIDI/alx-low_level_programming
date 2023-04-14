#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: int
 * @max: int
 * Return: int*
 */
int *array_range(int min, int max)
{
	int *p;
	int i = 0, n;

	if (min > max)
		return (NULL);
	n = max - min;
	p = malloc((n + 1) * sizeof(int));
	if (!p)
		return (NULL);
	while (i <= n)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
