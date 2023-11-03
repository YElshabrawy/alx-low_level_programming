#include "hash_tables.h"
/**
 * hash_table_delete - del ht
 * @ht: hash table
 * Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *next;
	unsigned long i;

	if (!ht || !ht->array || ht->size == 0)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			next = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
