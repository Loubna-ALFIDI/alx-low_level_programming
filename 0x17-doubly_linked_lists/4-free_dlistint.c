#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: dlistint_t
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
