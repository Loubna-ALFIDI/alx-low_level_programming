#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t
 * @h: const listint_t
 * Return: size_t, number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
