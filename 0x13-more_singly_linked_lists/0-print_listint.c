#include "lists.h"
/**
 * print_listint - check your code
 * @h: parametre
 *
 * Return: num
 */
size_t print_listint(const listint_t *h)
{

	size_t a = 0;

	if (!h)
			return (0);
	while (h)
	{
		printf("%d\n", h->n);
		a++;
		h = h->next;
	}
	return (a);
}
