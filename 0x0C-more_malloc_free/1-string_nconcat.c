#include "main.h"
#include <stdlib.h>
/**
 * __strlen - returns the length of a given string
 * @s: the string
 * Return: the length of given string
 */
int __strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
/**
 * _strcpy - copies a string from src to dest
 * @dest: the string to copy to
 * @src: the string to copy from
 * @i: the index to start from
 * Return: dest the string the has src content
 */
void _strcpy(char *dest, char *src, unsigned int i)
{
	int j;

	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
}
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
	unsigned int i = 0;
	int l1;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	l1 = __strlen(s1);
	p = malloc(l1 + n + 1);
	if (!p)
		return (NULL);
	_strcpy(p, s1, 0);
	while (i < n)
	{
		p[l1] = s2[i];
		l1++;
		i++;
	}
	p[l1] = '\0';
	return (p);
}
