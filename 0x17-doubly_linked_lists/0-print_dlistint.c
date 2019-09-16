#include "lists.h"

/**
 * print_dlistint - prints all elements of a doubly linked
 * @h: pointer to node/head
 * Return: node
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *cur = h;
	size_t sz = 0;

	while (cur)
	{
		printf("%i\n", cur->n);
		cur = cur->next;
		sz++;
	}
	return (sz);
}
