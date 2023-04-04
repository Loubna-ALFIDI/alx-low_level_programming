#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - check the code
 * @a: parametre
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	i = 0;
	while (a[i] && i < 8)
	{
		j = 0;
		while (a[i][j] && j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
