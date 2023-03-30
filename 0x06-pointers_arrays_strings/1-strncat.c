 #include "main.h"
/**
 * _strncat - check the code
 * @dest: parametre
 * @src: parametre
 * @n: parametre
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int j, i = 0;

	while (dest[i] != '\0')
		i++;
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
