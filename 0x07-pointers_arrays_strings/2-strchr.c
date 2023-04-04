#include "main.h"
#include <stddef.h>
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
	while (s[i])
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
