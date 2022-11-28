#include "hash_tables.h"

/**
 *
 *
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tmp;

	if (!ht)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	if (!(ht->array)[idx])
		return (NULL);
	tmp = (ht->array)[idx];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
