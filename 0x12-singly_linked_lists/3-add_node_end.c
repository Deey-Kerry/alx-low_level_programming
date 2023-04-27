#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - a function that adds a new node at the end
 * of a list_t list
 * @head: first node
 * @str: string to be duplicated
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	char *dup;
	int len;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	dup = strdup(str);
	if (!dup)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	new->str = dup;
 	new->len = len;
 	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (new);
}
