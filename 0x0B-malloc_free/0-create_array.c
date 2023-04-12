#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes
 *  it with a specific char
 *  @size: unsigned int
 *  @c: char
 *  Return: char *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = malloc(size);
	if (!size || !p)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
