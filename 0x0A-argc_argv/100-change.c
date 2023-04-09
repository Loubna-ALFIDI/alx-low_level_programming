#include "main.h"
#include <stdio.h>

/**
 * _atoi - check the code
 * @s: char *
 * Return: int
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}
		if (isi == 1)
		{
			break;
		}
		c++;
	}
	ni *= min;
	return (ni);
}
/**
 * main - entry point
 * @argc: int
 * @argv: char *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a;
	int coins[] = {25, 10, 5, 2, 1};
	int i;
	int result;

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}
	a = _atoi(argv[1]);
	result = 0;
	if (a < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && a >= 0; i++)
	{
		while (a >= coins[i])
		{
			result++;
			a -= coins[i];
		}
	}
	printf("%d\n", result);
	return (0);
}
