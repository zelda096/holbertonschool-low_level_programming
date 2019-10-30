#include "sort.h"
/**
 * change_nodes - change nodes
 * @x: first node
 * @y: second node
 * Return: none
 */
void change_nodes(listint_t *x, listint_t *y)
{
	if (x->prev)
		x->prev->next = y;
	if (y->next)
		y->next->prev = x;
	x->next = y->next;
	y->prev = x->prev;
	x->prev = y;
	y->next = x;
}
/**
 * insertion_sort_list - perform an incremental sorting using insertion
 * sort method
 * @list: list to be sorted
 * Return: none
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *a, *b;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	a = (*list)->next;
	while (a)
	{
		b = a;
		a = a->next;
		while (b && b->prev)
		{
			if (b->prev->n > b->n)
			{
				change_nodes(b->prev, b);
				if (b->prev == NULL)
					*list = b;
				print_list((const listint_t *)*list);
			}
			else
				b = b->prev;
		}
	}
}
