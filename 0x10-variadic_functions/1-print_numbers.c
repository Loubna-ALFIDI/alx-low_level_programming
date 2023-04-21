#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @seperator: const char*
 * @n: const unsigned int
 * @...: args
 * Return void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	if (!separator)
		separator = "";
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if ( i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

