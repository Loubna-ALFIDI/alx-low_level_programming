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
	int *p, i = 0, n;

	if (main > max)
		return (NULL);
	n = max - min;
	p = malloc(n * sizeof(int));
	if (!p)
		return (NULL);
	while (i < n)
	{
		p[i] = min++;
		i++;
	}
	return (p);
}
