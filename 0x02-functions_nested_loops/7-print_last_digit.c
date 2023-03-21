#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: is a parameter
 * Return: int
 */
int print_last_digit(int n)
{
	_putchar(n % d + '0');
	return (n % 10);
}
