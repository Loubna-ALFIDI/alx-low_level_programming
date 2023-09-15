#include "lists.h"

/**
 * add_dnodeint - returns the number of elements in a linked dlistint_t list.
 * @head: head of list
 * @n: data
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!node)
	{
		return (NULL);
	}
	node->n = n;
	node->prev = NULL;
	node->next = *head;
	if (*head)
	{
		(*head)->prev = node;
	}
	*head = node;
	return (node);
}
