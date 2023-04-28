#include "lists.h"

/**
 * printf_message - prints message before main
 *
 * Return: void
 */
void print_message(void) __attribute__((constructor));

void print_message(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
