#include "hash_tables.h"
/**
 * *hash_table_get - entry point
 * @ht: hash table
 * @key: the key
 * Description: return NULL if not found
 * Return: the val associated with the elem
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int in = 0;
	hash_node_t *a = NULL;

	if (!key || !strcmp(key, "") || (ht == NULL))
		return (NULL);

	if (ht->array == NULL)
		return (NULL);

	in = hash_djb2((const unsigned char *)key) % ht->size;

	a = ht->array[in];
	while (a)
	{
		if (!strcmp(a->key, key))
			return (a->value);
		a = a->next;
	}
	return (NULL);
}
