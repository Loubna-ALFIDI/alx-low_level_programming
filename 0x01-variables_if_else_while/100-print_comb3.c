#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <<= 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{

			k = i * 10 + j;
			if (k > 0)
			{
				putchar(',');
				putchar(' ');
			}

			putchar((k / 10) + '0');
			putchar((k % 10) + '0');
		}
	}
	putchar('\n');
	return (0);
}
