#include "main.h"
/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int aide;
	char *bit = (char *) &aide;

	if (*bit)
		return (1);
	else
		return (0);
}
