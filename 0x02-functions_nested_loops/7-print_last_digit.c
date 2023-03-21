#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: is a parameter
 * Return: int
 */
int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
	{
		_putchar(-l + '0');
		return (-l);
	}
	else
	{
		_putchar(l + '0');
		return (l);
	}
}
