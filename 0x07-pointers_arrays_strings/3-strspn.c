#include "main.h"
#include "stdio.h"
/**
 * _strspn - check the code
 * @s: parametre
 * @accept: parametre
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int k;


	k = 0;
	j = 0;
	i = 0;
	while (s[i])
	{
		j = 0;
		k = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
			{
				k = 1;
			}
			j++;
		}
		if (k == 0)
			return (i);
		i++;
	}
	return (i);
}
