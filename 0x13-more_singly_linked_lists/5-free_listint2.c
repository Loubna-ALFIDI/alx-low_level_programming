#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: listint_t
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *l;

	if (head == NULL)
		return;
	while (*head)
	{
		l = (*head)->next;
		free(*head);
		*head = l;
	}
	*head = NULL;
}
