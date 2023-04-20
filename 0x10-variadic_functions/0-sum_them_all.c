#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - the sum of all its parameters.
 * @n: const unsigned int
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sm = 0;
	va_list ap;

	if (!n)
		return (0);
	va_list(ap, n);
	for (i = n; i != 0; i = var_arg(ap, unsigned int))
		sum += i;
	var_end(ap);
	return (sum);
}
