#include "lists.h"
/**
 * delete_dnodeint_at_index - a function that deletes the node at
 * index index of a dlistint_t linked list
 * @head:head pointer
 * @index:position of node
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int a = 0;
	dlistint_t *h1;
	dlistint_t *h2;

	h1 = *head;
	if (h1 != NULL)
	{
		while (h1->prev != NULL)
			h1 = h1->prev;
	}
	while (h1 != NULL)
	{
		if (a == index)
		{
			if (a == 0)
			{
				*head = h1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h2->next = h1->next;
			if (h1->next != NULL)
				h1->next->prev = h2;
			}
		free(h1);
		return (1);
		}
	h2 = h1;
	h1 = h1->next;
	a++;
	}
	return (-1);
}
