#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node
 * @h: double pointer to head
 * @idx: index to insert
 * @n: number of node
 * Return: node inserted
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cur = *h;
	dlistint_t *nNode;
	size_t sz = 0;

	if (!h)
		return (NULL);
	if (!idx)
		return (add_dnodeint(h, n));
	while (cur)
	{
		sz++;
		cur = cur->next;
	}
	if (sz < idx)
		return (NULL);
	if (sz == idx)
		return (add_dnodeint_end(h, n));
	cur = *h;
	while (--idx)
		cur = cur->next;
	nNode = malloc(sizeof(dlistint_t));
	if (!nNode)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	nNode->n = n;
	nNode->next = cur->next;
	cur->next->prev = nNode;
	nNode->prev = cur;
	cur->next = nNode;
	return (nNode);
}
