#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: char*
 * @s2: char*
 * @n: unsigned int
 * Return: char*
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int l1, l2;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	p = malloc(l1 + l2 + 1);
	if (!p)
		return (NULL);
	if (n >= l2)
		strcpy(s1 + l1, s2);
	else
		strncpy(s1 + l1, s2, n);
	return (s1);
}

