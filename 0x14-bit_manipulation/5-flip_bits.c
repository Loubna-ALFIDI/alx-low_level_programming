#include "main.h"

/**
 * flip_bits - returns number of bits to flip to get from one number to another
 * @n: parametre
 * @m: parametre
 * Return: num of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a;
	unsigned long int bit;

	a = 0;
	bit = m ^ n;
	while (bit)
	{
		a += bit & 1;
		bit >>= 1;
	}
	return (a);
}
