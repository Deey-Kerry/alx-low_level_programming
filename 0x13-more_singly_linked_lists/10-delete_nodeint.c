#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the node at
 * index index of a listint_t linked list
 * @head: first node on a linked list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *current = *head;
	unsigned int value;

	if (!current)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (value = 0; value < (index - 1); value++)
	{
		if (current->next == NULL)
			return (-1);

		current = current->next;
	}

	tmp = current->next;
	current->next = tmp->next;
	free(tmp);
	return (1);
}
