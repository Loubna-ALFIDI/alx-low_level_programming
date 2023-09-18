#include "main.h"
/**
 *_strcat - check the code
 *@dest: parametre
 *@src: parametre
 *Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int j, i = 0;

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
