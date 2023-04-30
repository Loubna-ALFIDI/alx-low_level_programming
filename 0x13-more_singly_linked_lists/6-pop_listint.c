#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *  and returns the head node’s data (n).
 * @head: listint_t **
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;

	if (!temp)
		return (0);
	(*head) = (*head)->next;
	free(temp);
	return ((*head)->n);
}
