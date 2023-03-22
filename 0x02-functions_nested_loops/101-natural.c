#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int i, sum = 0;

	i = 1;
	while (i % 3 == 0 || i % 5 == 0)
	{
		sum += i;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
