#include "main.h"
/**
 * _strlen_recursion - length of a string.
 * @s: string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * checker - check if s is palindrome.
 * @s: string base address.
 * @i: left index.
 * @j: rigth index.
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int checker(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (checker(s, i + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: string
 * Return: int
 */
int is_palindrome(char *s)
{
	return (checker(s, 0, _strlen_recursion(s) - 1));
}
