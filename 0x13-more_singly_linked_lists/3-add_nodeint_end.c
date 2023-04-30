#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: new node, listint_l **
 * @n: its value, const int
 * Return: new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *l, *current = *head;

	l = malloc(sizeof(listint_t));
	if (!l)
		return (NULL);
	l->n = n;
	l->next = NULL;
	if (!*head)
	{
		*head = l;
		return (l);
	}
	while (current->next)
		current = current->next;
	current->next = l;
	return (l);
}
