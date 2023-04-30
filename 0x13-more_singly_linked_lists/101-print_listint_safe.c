#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - function can print lists with a loop
 * @head: first node of linked list
 * Return: looped list
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *last, *first;
	size_t value = 1;

	if (head == NULL || head->next == NULL)
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
 * print_listint_safe - a function that prints a listint_t linked list
 * @head: first node on the linked list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t value, idx = 0;

	value = looped_listint_len(head);

	if (value == 0)
	{
		for (; head != NULL; value++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (idx = 0; idx < value; idx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (value);
}
