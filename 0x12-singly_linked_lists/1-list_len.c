#include "lists.h"
/**
 * list_len - entry point
 * @h: pointing pointer to the nex node
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t c;

	c = 0;
	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}
