#include "hash_tables.h"

/**
 * hash_table_print - Prints all the elements of a hash table
 * Return: Nothing
 * @ht: Hash Table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *tmp;
	int c = 0;

	if (!ht)
		;
	else
	{
		printf("{");
		for (idx = 0; idx < ht->size; idx++)
		{
			tmp = ht->array[idx];
			while (tmp)
			{
				if (c != 0 && (ht->array)[idx])
					printf(", ");
				printf("'%s': ", (tmp->key));
				printf("'%s'", (tmp->value));
				tmp = tmp->next;
				c = 1;
			}
		}
		printf("}\n");
	}
}
