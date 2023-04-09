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
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check
 * @str:parametre
 * Return: Always 0
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
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
	int i;

	if (argc < 1)
	{
		return (0);
	}
	else
	{
		i = 1;
		b = 0;
		while (i < argc)
		{
			if (!check_num(argv[i]))
			{
				printf("Error\n");
				return (0);
			}
			else
			{
				a = _atoi(argv[i]);
				b += a;
			}
			i++;
		}
	}
	printf("%d\n", b);
	return (0);
}
