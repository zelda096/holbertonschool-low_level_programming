#include "lists.h"
/**
 * add_node - function that adds a new node
 * @head: pointer to pointer to list_t list
 * @str: string to copy to new node
 * Return: address or NULL
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int c;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (c = 0; str[c] != '\0'; c++)
		;
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = c;
	new->next = *head;
	*head = new;
	return (*head);
}
