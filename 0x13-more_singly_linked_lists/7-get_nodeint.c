#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head :listint_int *
 * @index: unsigned int
 * Return: listint_int *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (!head)
		return (0);
	if (index == 0)
		return (head);
	return (get_nodeint_at_index(head->next, index - 1));
}
