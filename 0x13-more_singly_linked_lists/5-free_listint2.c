#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: listint_t
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *l = *head, *a;

	if (head == NULL || *head == NULL)
		return;
	while (*head)
	{
		a = l->next;
		free(l);
		l = a;
	}
	*head = NULL;
}
