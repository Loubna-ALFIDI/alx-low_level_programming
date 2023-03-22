#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d", i * j);
			if (j != 9)
				printf(",");

			if (i * j < 7)
				printf(" ");
			printf(" ");
		}
		printf("\n");
	}
}