#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head of a list
 * @idx: index of new data
 * @n: data
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *current;
	unsigned int i = 0;

	node = malloc(sizeof(listint_t));
	if (!node || !head)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	current = *head;
	for (i = 0; i < idx - 1 && current; i++)
		current = current->next;
	if (!current)
		return (NULL);
	node->next = current->next;
	current->next = node;
	return (node);
}
