#include "main.h"

/**
 *print_square - check the code
 *@size:parametre
 *Return: Always 0.
 */
void print_square(int size)
{
	int j, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
