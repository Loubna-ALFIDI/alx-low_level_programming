#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n : parametre
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned long int aide;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 63; i >= 0; i--)
	{
		aide = n >> i;
		if (aide & 1)
		{
			_putchar('1');
			j++;
		} else if (j)
			_putchar('0');
	}
	if (!j)
		_putchar('0');
}
