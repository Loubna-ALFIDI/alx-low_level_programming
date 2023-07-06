#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: parametre
 * @index: parametre
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (index > 63)
		return (-1);
	b = (n >> index) & 1;
	return (b);
}
