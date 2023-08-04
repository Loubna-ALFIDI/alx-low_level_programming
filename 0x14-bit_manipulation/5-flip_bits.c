#include "main.h"
/**
 * flip_bits - returns the number of bits needed to flip to
 * get from one number to another.
 * @n: first number
 * @m: second number
 * Return: num of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int aide;
	unsigned long int bit;

	aide = 0;
	bit = m ^ n;
	while (bit)
	{
		aide += bit & 1;
		bit >>= 1;
	}
	return (aide);
}
