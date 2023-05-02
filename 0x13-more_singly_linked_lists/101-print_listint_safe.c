#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: listint_t *
 * Return: the number of nodes in the list, size_t
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	const listint_t *next;
	size_t n = 0;

	if (head == NULL)
		exit(98);
	current = head;
	while (current != NULL)
	{
		n++;
		printf("[%p] %d\n", (void *) current, current->n);
		next = current->next;
		/* check if next pointer is pointing to a previous node */
		if (next >= current)
			break;
		current = next;
	}
	/* check if we exited the loop prematurely */
    	if (current != NULL && next >= current)
	{
		printf("-> [%p] %d\n", (void *) current, current->n);
		exit(98);
    	}
    	return (n);
}
