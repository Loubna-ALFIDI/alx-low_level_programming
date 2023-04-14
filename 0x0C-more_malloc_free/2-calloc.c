#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: void *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	void *p;

	if (!nmemb || !size)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	i = 0;
	while (p[i] < nmemb)
	{
		p[i] = 0;
		i++
	}
	return (p);
}
