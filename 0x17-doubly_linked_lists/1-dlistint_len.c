#include "lists.h"

/**
 * dlistint_len - the number of elements
 * @h: pointer to node/head
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *cur = h;
	size_t sz = 0;

	while (cur)
	{
		sz++;
		cur = cur->next;
	}
	return (sz);
}
