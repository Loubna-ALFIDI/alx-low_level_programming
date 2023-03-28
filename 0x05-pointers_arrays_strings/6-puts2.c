#include "main.h"

/**
 * puts2 - prints every other character
 * @str: is a parameter
 * Return: void
 */
void puts2(char *str)
{
	int i, l = 0;

	while (str[l])
		l++;
	for (i = 0; i < l; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
