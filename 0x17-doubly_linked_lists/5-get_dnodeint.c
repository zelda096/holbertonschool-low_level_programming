#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * @head: pointer to head
 * @index: index
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cur = head;

	while (cur && index)
	{
		index--;
		cur = cur->next;
	}
	if (cur)
		return (cur);
	return (NULL);
}
