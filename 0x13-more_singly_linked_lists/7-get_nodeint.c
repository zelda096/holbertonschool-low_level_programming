#include "lists.h"
/**
 * get_nodeint_at_index - get the given node index in a listin_t list.
 * @head: pointer to first node.
 * @index: node index looked.
 * Return:  returns the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *c = NULL;

	if (head == NULL)
		return (NULL);
	c = head;
	for (i = 0; c != NULL; i++)
	{
		if (index == 0)
			return (c);
		c = c->next;
		if (i == (index - 1) && index != 0)
		{
			return (c);
		}
	}
	return (NULL);
}
