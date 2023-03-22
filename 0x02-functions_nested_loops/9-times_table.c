#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, l, d, u;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			l = i * j;
			if (l > 9)
			{
				u = l % 10;
				d = (l - u) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(l + '0');
			}
		}
		_putchar('\n');
	}
}
