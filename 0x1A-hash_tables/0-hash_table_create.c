#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash  table.
 * @size: THe size of the array.
 * Return: If an error occurs - NULL. or a pointer newhash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *x;
	unsigned long int y;

	x = malloc(sizeof(hash_table_t));
	if (x == NULL)
		return (NULL);

	x->size = size;
	x->array = malloc(sizeof(hash_node_t *) * size);
	if (x->array == NULL)
		return (NULL);
	for (y = 0; y < size; a++)
		x->array[a] = NULL;
	return (y);
}
