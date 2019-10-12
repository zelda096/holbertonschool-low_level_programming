#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print - function
 * @ht: constant
 * Return: None
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *a = NULL;
	unsigned long int c = 0;
	int flag = 0;

	if (!ht)
		return;
	printf("{");
	for (c = 0; c < ht->size; c++)
	{
		if (ht->array[c])
		{
			a = ht->array[c];
			while (a)
			{
				if (flag)
				{
					printf(", ");
				}
				printf("'%s': '%s'", a->key, a->value);
				flag = 1;
				actual = a->next;
			}
		}
	}
	printf("}\n");
}
