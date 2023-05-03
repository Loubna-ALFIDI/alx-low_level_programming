#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: listint_t *
 * Return:  the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *l;
	int d;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		d = *h > (*h)->next;
		if (d > 0)
		{
			l = (*h)->next;
			free(*h);
			*h = l;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}
	*h = NULL;
	return (count);
}
