#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, b, c, sum;

	a = 1;
	b = 2;
	c = 0;
	sum = 2;
	while (b <= 4000000)
	{
		c = a + b;
		if (c % 2 == 0)
		{
			sum += c;
		}
		a = b;
		b = c;
	}
	printf("%d\n", sum);
	return (0);
}
