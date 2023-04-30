#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list.
 * @head: head of a list, listint_t **
 * @n: const int
 * Return: new element, listint_t *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *l;

	l = (listint_t *)malloc(sizeof(listint_t));
	if (!l)
		return (NULL);
	l->n = n;
	l->next = *head;
	*head = l;
	return (l);
}
