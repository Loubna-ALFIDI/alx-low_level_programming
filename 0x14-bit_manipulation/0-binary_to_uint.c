#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @b: const char *, 0 and 1
 * Return: unsigned int, the converted number, or 0 if b is not binary or null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int u = 0, i = 0;

	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
				return (0);
		u = 2 * u + (b[i] - '0');
		i++;
	}
	return (u);
}
