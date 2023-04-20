#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: char*
 * @f: char*
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;
	f(name);
}
