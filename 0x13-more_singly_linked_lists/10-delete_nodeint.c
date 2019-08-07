#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 * @head: pointer to first node.
 * @index: given node index.
 * Return: return the address of the new node, or NULL if it failed or
 * if it is not possible to add the new node at index idx.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t;
	listint_t *c;
	unsigned int x;

	if (head == NULL)
		return (-1);
	c = *head;
	for (x = 0; c != NULL; x++)
	{
		if (x == (index - 1) && index != 0)
		{
			t = c->next;
			c->next = t->next;
			t->next = NULL;
			free(t);
			return (1);
		}
		else if (index == 0)
		{
			t = *head;
			*head = t->next;
			t->next = NULL;
			free(t);
			return (1);
		}
		c = c->next;
	}
	return (-1);
}
