#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	char a;

	a = 'a';
	while (a <= 'z' && a != 'q' && a != 'e')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);

}
