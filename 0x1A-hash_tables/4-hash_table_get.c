#include "hash_tables.h"
/**
 * hash_table_get - retrives value
 * @ht: hash table
 * @key: key
 * Return: Value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long idx;

	if (!key || !ht || !ht->array || ht->size == 0 || strlen(key) == 0)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	current = ht->array[idx];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}
