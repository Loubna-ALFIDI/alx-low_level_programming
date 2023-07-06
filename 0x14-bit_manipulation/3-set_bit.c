#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: parametre
 * @index: parametre
 * Return: 1 || 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;

	if (index > 63)
		return (-1);
	b = 1UL << index;
	*n |= b;
	return (1);
}
