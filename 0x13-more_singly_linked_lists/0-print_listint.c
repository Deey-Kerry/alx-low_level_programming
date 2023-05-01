#include "lists.h"
#include <stdio.h>
/**
 * print_listint - a function that prints all the elements of a
 * listint_t list
 * @h: pointer to const listint_t
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; h = h->next)
	{
		nodes++;
		printf("%d\n", h->n);
	}

	return (nodes);
}

