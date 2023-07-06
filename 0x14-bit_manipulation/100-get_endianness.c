#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int a;
	char *b = (char *) &a;

	if (*b)
		return (1);
	else
		return (0);
}
