#include "main.h"
#include <stdio.h>
/**
 * _strstr - check the code
 * @haystack: parametre
 * @needle: parametre
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
				break;
			j++;
		}
		if (!needle[j])
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}
