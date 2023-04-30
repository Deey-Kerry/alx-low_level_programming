#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - a function that counts looped lists
 * @head: first node of the linked list
 * Return: looped list
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *last, *first;
	size_t value = 1;

	if (!head || !head->next)
		return (0);

	last = head->next;
	first = (head->next)->next;

	for (; first != NULL;)
	{
		if (last == first)
		{
			last = head;
			for (; last != first;)
			{
				value++;
				last = last->next;
				first = first->next;
			}

			last = last->next;
			for (; last != first;)
			{
				value++;
				last = last->next;
			}

			return (value);
		}

		last = last->next;
		first = (first->next)->next;
	}

	return (0);
}
/**
 * free_listint_safe - a function that frees a listint_t list
 * @h: free lists with loop
 * Return: size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	size_t value, idx;

	value = looped_listint_count(*h);

	if (value == 0)
	{
		while (h != NULL && *h != NULL)
		{
			current = (*h)->next;
			free(*h);
			*h = current;
			value++;
		}
	}

	else
	{
		idx = 0;

		while (idx < value)
		{
			current = (*h)->next;
			free(*h);
			*h = current;
			idx++;
		}

		*h = NULL;
	}

	h = NULL;

	return (value);
}
