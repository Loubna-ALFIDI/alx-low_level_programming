#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: list to be reversed
 * Return: a listint_t *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL, *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return (*head);
}
