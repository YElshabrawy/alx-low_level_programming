#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

void print_hash(hash_table_t *ht)
{
	unsigned long i;
	hash_node_t *current;

	for(i = 0; i < ht->size; i++){
		printf("%lu\t", i);
		current = ht->array[i];
		while (current)
		{
			printf("%s",current->key);
			if (current -> next)
				printf (" -> ");
			current = current->next;
		}
		printf("\n");
	}
}

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(128);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "betty2", "cool");
    hash_table_set(ht, "hetairas", "c1");
    hash_table_set(ht, "mentioner", "vc3");
	print_hash(ht);
    return (EXIT_SUCCESS);
}
