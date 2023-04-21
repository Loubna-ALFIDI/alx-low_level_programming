#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: const char*
 * @n: const unsigned int
 * @...: args
 * Return void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *s;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char*);
		if (!s)
			printf("(nil)");
		else
			printf("%s", s);
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
