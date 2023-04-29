#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: first node
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *last;
	int value;

	if (*head == NULL)
		return (0);

	last = *head;
	value  = (*head)->n;
	*head = (*head)->next;

	free(last);

	return (value);
}
