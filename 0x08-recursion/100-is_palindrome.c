#include "main.h"
#include <string.h>

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: char
 * Return: int
 */
int is_palindrome(char *s)
{
	char *e = strrev(s);

	if (*s == *e)
		return (1);
	else
		return (0);
}
