#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: unsigned long int
 * @index:  index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (index > 63)
		return (-1);
	b = (n >> index) & 1;
	return (b);
}
