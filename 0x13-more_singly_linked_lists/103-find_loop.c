#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * find_listint_loop - a function that finds the loop in a linked list
 * @head: first node of linked list
 * Return: loop in linked list
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *last, *first;

	if (!head || !head->next)
		return (NULL);

	last = head->next;
	first = (head->next)->next;

	for (; first != NULL;)
	{
		if (last == first)
		{
			last = head;

			for (; last != first;)
			{
				last = last->next;
				first = first->next;
			}

			return (last);
		}

		last = last->next;
		first = (first->next)->next;
	}

	return (NULL);
}
