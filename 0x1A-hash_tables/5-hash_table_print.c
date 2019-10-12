#include "hash_tables.h"
/**
 * hash_table_print - prints the elements of a hash table
 * @ht: pointer to hash table
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *aux;
	unsigned long i = 0;
	int f = 0;

	if (!ht)
		return;
	printf("{");
	while (i <= ht->size)
	{
		aux = ht->array[i];
		while  (aux)
		{
			if (f)
				printf(", ");
			printf("'%s': '%s'", aux->key, aux->value);
			f++;
			aux = aux->next;
		}
		i++;
	}
	printf("}\n");
}
