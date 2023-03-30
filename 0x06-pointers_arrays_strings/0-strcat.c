#include "main.h"

/**
 * _strcat - concatonates two strings
 * @dest: is a parameter
 * @src: is a parameter
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*dest)
	{
		++dest;
		i++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
		j++;
	}
	return (dest);
}
