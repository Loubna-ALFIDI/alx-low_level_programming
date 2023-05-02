#include "lists.h"

/**
 * looped_listint - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint(const listint_t *head)
{
	const listint_t *prev, *suiv;
	size_t count = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	prev = head->next;
	suiv = (head->next)->next;

	while (suiv)
	{
		if (prev == suiv)
		{
			prev = head;
			while (prev != suiv)
			{
				count++;
				prev = prev->next;
				suiv = suiv->next;
			}

			prev = prev->next;
			while (prev != suiv)
			{
				count++;
				prev = prev->next;
			}

			return (count);
		}

		prev = prev->next;
		suiv = (suiv->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: listint_t *
 * Return: the number of nodes in the list, size_t
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count, index = 0;

	count = looped_listint(head);
	if (count == 0)
	{
		for (; head != NULL; count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < count; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (count);
}
