#include "main.h"

/**
 * _strcat - concatonates two strings
 * @dest: is a parameter
 * @src: is a parameter
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int j, i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
