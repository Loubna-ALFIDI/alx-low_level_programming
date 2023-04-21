#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: const char* const
 * @...: args
 * Return: void
 */
void print_all(const char * const format, ...)
{
	const char *f = format;
	va_list ap;
	char *s;

	va_start(ap, format);
	while (*f)
	{
		switch (*f)
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char*);
				if (!s)
					printf("(nil)");
				else
					printf("%s", s);
				break;
			default:
				break;
		}
		++f;
		if (format && (*f == 'c' || *f == 'i' || *f == 'f' || *f == 's'))
			printf(", ");
	}
	va_end(ap);
	printf("\n");
}
