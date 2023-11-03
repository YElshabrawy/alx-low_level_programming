#include "hash_tables.h"
/**
 * hash_table_set - adds a new entry to the table
 * @ht: hash table
 * @key: key string
 * @value: value string
 * Return: 1 on success, 0 on failure
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *current;
	unsigned long idx;
	char *newVal;

	if (!key || !ht || !ht->array || ht->size == 0 || strlen(key) == 0 || !value)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	current = ht->array[idx];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			newVal = strdup(value);
			if (!newVal)
				return (0);
			free(current->value);
			current->value = newVal;
			return (1);
		}
		current = current->next;
	}
	/* If it does not exist, create it*/
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	if (!node->key || !node->value)
	{
		if (node->key)
			free(node->key);
		free(node);
		return (0);
	}
	node->next = NULL;
	/* Place it */
	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
