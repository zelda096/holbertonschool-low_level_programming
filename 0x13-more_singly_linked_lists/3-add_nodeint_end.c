#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to firtst node.
 * @n: given int to be added.
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n;
	listint_t *t;

	n = malloc(sizeof(listint_t));
	if (n == NULL)
		return (NULL);
	n->n = n;
	n->next = NULL;

	if (*head == NULL)
		*head = n;
	else
	{
		t = *head;
		while (t->next != NULL)
			t = t->next;
		t->next = n;
	}
	return (n);
}
