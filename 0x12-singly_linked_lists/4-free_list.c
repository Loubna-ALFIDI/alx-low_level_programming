#include "lists.h"

/**
 * free_list - frees a list
 * @head: list_t
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *l = head;

	while (l)
	{
		lilst_t *temp = l;

		l = l->next;
		free(head);
	}
}
