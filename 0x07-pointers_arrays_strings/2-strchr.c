#include "main.h"
#include <stdio.h>
/**
 * _strchr - check the code
 *@s: parametre
 *@c: parametre
 * Return: char.
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
