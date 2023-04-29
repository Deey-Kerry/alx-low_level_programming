#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list
 * @head: first node
 * Return: free listint_t list.
 */
void free_listint2(listint_t **head)
{
	listint_t *last;

	if (!head)
		return;

	while (*head)
	{
		last = (*head)->next;
		free(*head);
		*head = last;
	}

	*head = NULL;
}
