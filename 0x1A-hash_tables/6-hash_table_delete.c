#include "hash_tables.h"
/**
 * hash_table_delete - function
 * @ht: the hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *aux, *aux2;

	if (!ht || !ht->array || !ht->size)
		return;

	while (i < ht->size)
	{
		aux = ht->array[i];
		while (aux)
		{
			aux2 = aux;
			aux = aux->next;
			free(aux2->key);
			free(aux2->value);
			free(aux2);
		}
		i++;
	}
	free(aux);
	free(ht->array);
	ht->array = NULL;
	free(ht);
}
