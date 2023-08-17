#include "lists.h"
/**
 * free_dlistint - a function that frees a dlistint_t list
 * @head: pointer to head
 * Return: freed list
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
