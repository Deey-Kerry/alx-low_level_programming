#include "lists.h"
#include <stdio.h>

/**
 * listint_len - a function that returns the number of elements in a
 * linked listint_t list.
 * @h: pointer to const listint_t
 * Return: number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	for (; h != NULL; h = h->next)
	{
		nodes++;
	}

	return (nodes);
}
