#include "lists.h"

/**
 * add_dnodeint_end - adds node to end of doubly linked
 * @head: pointer to node/head
 * @n: integer value
 * Return: pointer to node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nNode;
	dlistint_t *cur = *head;

	nNode = malloc(sizeof(dlistint_t));
	if (!nNode)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	nNode->n = n;
	nNode->next = NULL;

	if (!cur)
	{
		nNode->prev = NULL;
		*head = nNode;
		return (nNode);
	}

	while (cur->next)
	{
		cur = cur->next;
	}
	cur->next = nNode;
	nNode->prev = cur;
	return (nNode);
}
