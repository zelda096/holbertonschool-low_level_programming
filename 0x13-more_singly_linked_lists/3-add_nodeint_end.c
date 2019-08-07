#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to firtst node.
 * @n: given int to be added.
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x;
	listint_t *t;

	x = malloc(sizeof(listint_t));
	if (x == NULL)
		return (NULL);
	x->n = n;
	x->next = NULL;

	if (*head == NULL)
		*head = x;
	else
	{
		t = *head;
		while (t->next != NULL)
			t = t->next;
		t->next = x;
	}
	return (x);
}
