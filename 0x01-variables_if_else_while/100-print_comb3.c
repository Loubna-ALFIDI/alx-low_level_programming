#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			k = (i * 10) + j;
			if (k > 1)
			{
				putchar(',');
				putchar(' ');
			}
			 putchar(i + '0');
			 putchar(j + '0');
		}
	}
	putchar('\n');
	return (0);
}
