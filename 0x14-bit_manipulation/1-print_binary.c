#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n : number to be printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int index, aide = 0;
	unsigned long int temp;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (index = 63; index >= 0; index--)
	{
		temp = n >> index;
		if (temp & 1)
		{
			_putchar('1');
			aide++;
		} else if (aide)
			_putchar('0');
	}
	if (!aide)
		_putchar('0');
}
