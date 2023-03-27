#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: is a parameter
 * Return: int
 */
int _strlen(char *s)
{
	int l;

	l = 0;
	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
