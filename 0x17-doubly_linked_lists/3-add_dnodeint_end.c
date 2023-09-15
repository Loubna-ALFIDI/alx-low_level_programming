#include "lists.h"

/**
 * add_dnodeint_end - dds a new node at the end of a dlistint_t list.
 * @head: head of list
 * @n: data
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *current;

	node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!node)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	if (!*head)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}
	current = *head;
	while (current->next)
	{
		current = current->next;
	}
	current->next = node;
	node->prev = current;
	return (node);
}
