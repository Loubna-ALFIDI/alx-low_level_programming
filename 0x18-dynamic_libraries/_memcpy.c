#include "main.h"
/**
 * _memcpy - check the code
 *@dest: parametre
 *@src: parametre
 *@n: parametre
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
