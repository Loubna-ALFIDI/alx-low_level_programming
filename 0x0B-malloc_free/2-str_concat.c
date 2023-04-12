#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: char*
 * @s2: char*
 * Return: char*
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i = 0, j = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[i] && s2[j])
	{
		i++;
		j++;
	}
	p = malloc(i + j + 2);
	if (!p)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';
	return (p);
}
