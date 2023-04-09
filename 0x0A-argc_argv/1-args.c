#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: int
 * @argv: char*
 * Return: 0
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
