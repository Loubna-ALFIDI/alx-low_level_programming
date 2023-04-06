#include "main.h"

/**
 * _print_rev_recursion - check the code
 * @s: parametrr
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (!*s)
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
