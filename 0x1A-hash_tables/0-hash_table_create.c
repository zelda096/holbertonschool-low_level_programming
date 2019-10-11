#include "hash_tables.h"

/**
* hash_table_create - function
* *@size: size
* Description: if fails return null
* Return: * to the hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned long int c;

	if (size == 0)
		return (NULL);

	new = malloc(sizeof(hash_table_t));

	if (new == NULL)
		return (NULL);

	new->array = malloc(sizeof(hash_node_t *) * size);

	if (new->array == NULL)
		return (NULL);

	for (c = 0; c < size; c++)
	{
		new->array[c] = NULL;
	}

	new->size = size;

	return (new);
}
