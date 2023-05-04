#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip to get from n to m.
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int r = n ^ m;
	int count = 0;

	while (r)
	{
		count += r & 1;
		r >>= 1;
	}
	return (count);
}
