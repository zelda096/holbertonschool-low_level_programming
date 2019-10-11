#include "hash_tables.h"
/**
 * hash_table_create - function
 * @size: size
 * Return: a pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *Hash = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (Hash == NULL)
	{
		return (NULL);
	}
	Hash->size = size;
	Hash->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);

	if (Hash->array == NULL)
	{
		free(Hash);
		return (NULL);
	}
	return (Hash);
}
