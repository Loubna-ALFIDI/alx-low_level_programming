#include "lists.h"

/**
 * free_list - frees a list
 * @head: list_t
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *l;

	while (head)
	{
		l = head->next;
		free(head->str);
		free(head);
		head = l;5-free_listint2.c
	}
}
