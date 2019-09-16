#include "lists.h"

/**
 * sum_dlistint - returns the sum
 * dlistint_t linked list
 * @head: pointer
 * Return: s
 */
int sum_dlistint(dlistint_t *head)
{
	register int s = 0;
	dlistint_t *cur = head;

	while (cur)
	{
		s += cur->n;
		cur = cur->next;
	}
	return (s);
}
