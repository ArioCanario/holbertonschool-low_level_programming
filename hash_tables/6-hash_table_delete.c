#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * Return: Nothing
 * @ht: Hash Table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int c;
	hash_node_t *d, *tmp = NULL;

	if (!ht)
		return;
	for (c = 0; c < ht->size; c++)
	{
		d = ht->array[c];
		while (d)
		{
			tmp = d->next;
			free(d);
			d = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
