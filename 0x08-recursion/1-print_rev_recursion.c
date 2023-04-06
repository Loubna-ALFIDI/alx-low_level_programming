#include "main.h"

/**
 * void _print_rev_recursion(char *s) - check the code
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
