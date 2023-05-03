#include "lists.h"

/**
 * find_listint_loop -  finds the loop in a linked list.
 * @head: listint_t *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *prev = head, *suiv = head;

	if (!head)
		return (NULL);
	while (prev && suiv && suiv->next)
	{
		suiv = suiv->next->next;
		prev = prev->next;
		if (suiv == prev)
		{
			prev = head;
			while (prev != suiv)
			{
				prev = prev->next;
				suiv = suiv->next;
			}
			return (suiv);
		}
	}
	return (NULL);
}
