#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: head of list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *currrent = h;
	size_t node_count = 0;

	while (currrent)
	{
		currrent = currrent->next;
		node_count++;
	}
	return (node_count);
}
