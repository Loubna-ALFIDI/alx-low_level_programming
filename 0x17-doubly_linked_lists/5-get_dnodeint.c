#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: first node
 * @index: the index of the node, starting from 0
 * Return: nth node , if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	tmp = head;
	while (index > 0)
	{
		if (tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
		index--;
	}
	return (tmp);
}
