#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *_strlen - returns the length of a given string
 *@s: the string
 *Return: the length of given string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 *_create_array - creates an array of chars.
 *
 *@size: the size of the memory to allocate.
 *
 *Return: the array created.
 */


char *_create_array(unsigned int size)
{
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (!array)
		return (NULL);
	return (array);
}
/**
 *argstostr - concatenates the arguments to string
 *@ac: the number of arguments
 *@av: the arguments
 *Return: return the string
 */
char *argstostr(int ac, char **av)
{
	int len;
	char *string;
	int i;
	int j;
	int index_string;
	int index;

	i = 0;
	len = 0;
	index_string = 0;
	j = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		len += _strlen(av[i]);
		i++;
	}
	string = malloc(sizeof(char) * len + (ac + 1));
	if (!string)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		index = 0;
		while (av[j][index])
		{
			string[index_string] = av[j][index];
			index_string++;
			index++;
		}
		j++;
		string[index_string] = '\n';
		index_string++;
		i++;
	}
	return (string);
}
