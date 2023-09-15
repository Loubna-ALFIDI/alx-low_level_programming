#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data n of a dlistint_t linked list.
 * @head: first node
 * Return: sum of data, if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (0);
	}
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
