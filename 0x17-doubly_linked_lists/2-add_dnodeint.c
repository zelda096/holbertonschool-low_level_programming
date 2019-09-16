#include "lists.h"

/**
 * add_dnodeint - new node at the beginning
 * @head: double pointer to head
 * @n: value
 * Return: pointer of node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nNode;
	dlistint_t *tmp = *head;

	nNode = malloc(sizeof(dlistint_t));
	if (!nNode)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	nNode->n = n;
	nNode->prev = NULL;

	if (tmp == NULL)
	{
		*head = nNode;
		nNode->next = NULL;
		return (nNode);
	}
	nNode->next = tmp;
	tmp->prev = nNode;
	*head = nNode;
	return (nNode);
}
