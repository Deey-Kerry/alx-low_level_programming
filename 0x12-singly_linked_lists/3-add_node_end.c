#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of
 * a list_t list
 * @head: first node
 * @str: string
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last = *head;
	unsigned int len = 0;

	for (len = 0; str[len];)
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (last->next)
		last = last->next;

	last->next = new;

	return (new);
}
