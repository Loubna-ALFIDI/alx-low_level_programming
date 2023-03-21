#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int d = 0;

	while (d < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		d++;
	}
}
