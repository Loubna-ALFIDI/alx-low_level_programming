#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: const list_l
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
