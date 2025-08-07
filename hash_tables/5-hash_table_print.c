#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table pointer.
 * @key: key string.
 * Return: value associated with key, or NULL if not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}
