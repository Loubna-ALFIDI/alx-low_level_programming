#include "main.h"
#include <stdio.h>

/**
 * _atoi - check the code
 * @s: parametre
 * Return: Always 0.
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
 * main - check the code
 * @argc: parametre
 * @argv: parametre
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int c;


	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = _atoi(argv[1]);
		b = _atoi(argv[2]);
		c = a * b;
		printf("%d\n", c);
	}
	return (0);
}
