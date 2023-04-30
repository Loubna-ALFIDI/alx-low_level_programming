#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: const list_l
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t l = 0;

	while (h)
	{
		h = h->next;
		l++;
	}
	return (l);
}
