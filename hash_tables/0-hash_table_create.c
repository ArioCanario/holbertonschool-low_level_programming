#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * Return: Pointer to the hash table in success, NULL if it fails
 * @size: Size of the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **node;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	node = malloc(size * sizeof(node));
	if (!node)
	{
		free(table);
		return (NULL);
	}
	table->array = node;
	return (table);
}
