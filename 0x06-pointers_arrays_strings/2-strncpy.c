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
	int i = 0, j = 0;

	while (dest)
	{
		dest++;
		i++;
	}
	while (src && j < n)
	{

