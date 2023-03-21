#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			l = i * j;
			_putchar(l + '0');
			
		}
		_putchar(',');
		_putchar(' ');
	}
}

