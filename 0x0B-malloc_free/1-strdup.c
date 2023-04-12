#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: char*
 * Return: char*
 */
char *_strdup(char *str)
{
	char *p;
	int l = 0, i;

	if (!str)
		return (NULL);
	while (str[l])
		l++;
	p = malloc(l + 1);
	if (!p)
		return (NULL);
	for (i = 0; i < l; i++)
		p[i] = str[i];
	return (p);
}
