#include "main.h"

/**
 * rev_string - reverses a string
 * @s: is a patarmeter
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, l = 0;
	char c;

	while (s[i++])
		l++;
	for (i = l - 1; i >= l / 2; i--)
	{
		c = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = c;
	}
}
