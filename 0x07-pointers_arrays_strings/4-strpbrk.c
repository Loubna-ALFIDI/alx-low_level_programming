#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - gets the length of a prefix substring.
 * @s: parameter
 * @accept: parameter
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0, k = 0;

	while (s[i])
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
				k = 1;
			j++;
		}
		if (k == 1)
			return (s + i);
		i++;
	}
	return (NULL);
}
