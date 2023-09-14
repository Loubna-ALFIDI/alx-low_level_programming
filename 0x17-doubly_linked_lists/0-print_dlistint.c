#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: head of list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *currrent = h;
	size_t node_count = 0;

	while (currrent)
	{
		printf("%d\n", currrent->n);
		currrent = currrent->next;
		node_count++;
	}
	return (node_count);
}
