#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: const list_t
 * Return: size_t, number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)");
		else
		{
			printf("[%u] %s", h->len, h->str);
			h = h->next;
			n++;
		}
	}
	return (n);
}
