#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: int
 * @height: int
 * Return:int**
 */
int **alloc_grid(int width, int height)
{
	int i, j, **array;

	if (!width || !height || width < 0 || height < 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (!array)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (!array[i])
		{
			for (j = 0; j < i; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
