#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node of a
 * listint_t linked list
 * @head: first node in a linked list
 * @index: position of lists
 * Return:  nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int value;

		for (value = 0; value < index; value++)
		{
			if (!head)
				return (NULL);

			head = head->next;
		}

	return (head);
}
