#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * @argc: int
 * @argv: char *
 * Return: 0
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
