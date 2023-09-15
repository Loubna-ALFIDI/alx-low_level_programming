#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a list
 * @head: head of the list
 * @index: index of the node to delete
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (!tmp)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next)
			tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}
	while (index > 0 && tmp)
	{
		tmp = tmp->next;
		index--;
	}
	if (!tmp)
		return (-1);
	if (tmp->prev)
		tmp->prev->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
