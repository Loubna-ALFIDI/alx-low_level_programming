#include <stdio.h>
#include "main.h"
/**
 *_puts - check the code
 *@str: parametre
 *Return: Always 0.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
