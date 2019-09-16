#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node
 * @head: double point to head
 * @index: node to be deleted
 * Return: 1 if perfect, -1 if error
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur = *head;
	size_t sz = 0;

	if (!*head)
		return (-1);
	while (cur)
	{
		sz++;
		cur = cur->next;
	}
	if (sz < index + 1)
		return (-1);
	cur = *head;
	if (!index)
	{
		*head = cur->next;
		if (cur->next)
			cur->next->prev = NULL;
		cur->next = NULL;
		free(cur);
		return (1);
	}
	while (index--)
		cur = cur->next;
	cur->prev->next = cur->next;
	if (cur->next)
		cur->next->prev = cur->prev;
	free(cur);
	return (1);
}
