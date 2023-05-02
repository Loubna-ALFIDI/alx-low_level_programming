#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index index of a listint_t list
 * @head: listint_t **
 * @index: unsigned int
 * Return: int, 1 in success, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current, *node;

	if (!head)
		return (-1);
	if (index == 0)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	current = *head;
	while (i < index  && current)
	{
		current = current->next;
		i++;
	}
	node = current->next;
	current->next = current->next;
	free(node);
	return (1);
}
