#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char alp[26] = {'a', 'b', 'c', 'd', 'e', 'e', 'f', 'g', 'h', 'i', 'j',
	 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
	 'y', 'z'};
	char ALP[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
	'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

	while (i < 26)
	{
		putchar(alp[i]);
		i++;
	}
	while (i < 26)
	{
		putchar(ALP[i]);
		i++;
	}
	putch('\n');
	return (0);
}
