#include "hash_tables.h"
/**
 *hash_table_set - function
 *@ht: variable
 *@key: variable
 *@value: variable
 *Return: value
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int in, sz;
	hash_node_t *newNode;

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}

	sz = ht->size;
	in = key_index((const unsigned char *)key, sz);
	if (ht->array[in] != NULL && strcmp(ht->array[in]->key, key) == 0)
	{
		ht->array[in]->value = strdup(value);
		return (1);
	}
	else
	{
		newNode = (hash_node_t *)malloc(sizeof(hash_node_t));

		if (newNode == NULL)
		{
			return (0);
		}

		newNode->key = strdup(key);
		newNode->value = strdup(value);
		newNode->next = ht->array[in];
		ht->array[in] = newNode;
		return (1);
	}
}
