#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - a function that adds a new node at the beginning
 * of a list_t list
 * @str: string that needs to be duplicated
 * @head: first node
 * Return: list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len = 0;
	char *dup;

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
	new->next = *head;

	*head = new;
	return (new);
}
