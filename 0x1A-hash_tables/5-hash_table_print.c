#include "hash_tables.h"
/**
 * hash_table_print - prints ht
 * @ht: hash table
 * Return: void
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long i;
	hash_node_t *current;
	int flag = 0;

	if (!ht || !ht->array || ht->size == 0)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		if (current)
		{
			while (current)
			{
				if (flag == 1)
					printf (", ");
				printf("'%s': '%s'",current->key, current->value);
				flag = 1;
				current = current->next;
			}
		}
	}
	printf("}\n");
}
