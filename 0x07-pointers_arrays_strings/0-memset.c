#include "main.h"

/**
 * _memset - check the code
 *@s: parametre
 *@b: parametre
 *@n: parametre
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
