#include "main.h"

/**
 * print_binary -  prints the binary representation of a number.
 * @n: unsigned long int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int a = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int i = 0;

	while (a > 0)
	{
		if (n & a)
		{
			_putchar('1');
			i = 1;
		} else if (i)
			_putchar('0');
		a >>= 1;
	}
	if (!i)
		_putchar('0');
}
