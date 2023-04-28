#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: new node, list_l **
 * @str: its value, const char *
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *l, *current = *head;

	l = malloc(sizeof(list_t));
	if (!l)
		return (NULL);
	l->str = strdup(str);
	l->len = strlen(str);
	l->next = NULL;
	if (!*head)
	{
		*head = l;
		return (l);
	}
	while (current->next)
		current = current->next;
	current->next = l;
	return (l);
}
