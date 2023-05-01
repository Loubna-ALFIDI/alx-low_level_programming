#include "lists.h"

/**
 * sum_listint -  return the sum of all the data (n) of a listint_t linked list
 * @head: listint_t
 * Return: int, sum of data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
