#include "lists.h"

/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * @head: head of a list, list_t **
 * @str: const char *
 * Return: new list, list_t *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *l;

	l = (list_t *)malloc(sizeof(list_t));
	if (!l)
		return  (NULL);
	l->str = strdup(str);
	l->len = strlen(str);
	l->next = *head;
	*head = l;
	return (l);
}
