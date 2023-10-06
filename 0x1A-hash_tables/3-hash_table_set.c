#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key of the element
 * @value: value of the element
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	char *current;
	hash_node_t *node;

	if (ht == NULL || *key == '\0' || key == NULL || value == NULL)
		return (0);
	current = strdup(value);
	if (current == NULL)
	{
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = current;
			return (1);
		}

	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(current);
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = current;
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
