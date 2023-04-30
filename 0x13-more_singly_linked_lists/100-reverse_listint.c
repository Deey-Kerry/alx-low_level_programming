#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: first node on a linked list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first;
	listint_t *last = NULL;

	if (!head || *head == NULL)
		return (NULL);

	while ((*head)->next != NULL)
	{
		first = (*head)->next;
		(*head)->next = last;
		last = *head;
		*head = first;
	}

	(*head)->next = last;

	return (*head);
}
