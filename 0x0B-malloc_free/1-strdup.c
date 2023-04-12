#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: char*
 * Return: char*
 */
char *_strdup(char *str)
{
	char *p;
	int i;

	p = malloc(strlen(str));
	if (!str || !p)
		return (NULL);
	for (i = 0; i < strlen(str); i++)
		p[i] = str[i];
	return (p);
}
