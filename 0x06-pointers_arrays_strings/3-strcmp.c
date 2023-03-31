#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: is a parameter
 * @s2: is a parameter
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j;

	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	j = s1[i] - s2[i];
	return (j);
}
