#include "hash_tables.h"
/**
 * hash_table_delete - function
 * @ht: hash table
 * Return: None
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *a = NULL, *p = NULL;
	unsigned long int c = 0;

	if (!ht)
		return;
	if (ht->array)
	{
		for (c = 0; c < ht->size; c++)
		{
			if (ht->array[c])
			{
				a = ht->array[c];
				while (a)
				{
					p = a;
					free(p->key);
					free(p->value);
					free(p);
					a = a->next;
				}
			}
		}
		free(ht->array);
	}
	free(ht);
}
