#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: is a parameter
 * @s2: is a parameter
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			i = 1;
		s1++;
		s2++;
	}
	if (i == 0)
		return (0);
	else
		return (1);

}
