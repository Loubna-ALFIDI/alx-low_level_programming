#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: is a parameter
 * @src: is a parameter
 * @i: is a parameter
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (j < n && src[i] != '\0')
	{
		dest[i = src[i]];
		i++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		i++;
	}
	return (dest);
}
