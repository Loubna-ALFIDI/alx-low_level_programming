#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints naturel numbers to 98
 * @n: is a parameter
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i != 98)
			printf(", ");
	}
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	printf("\n");
}
