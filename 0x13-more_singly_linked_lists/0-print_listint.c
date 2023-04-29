#include "lists.h"
/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: pointer
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	for (; h; h = h->next)
	{
		nodes++;
		printf("%d\n", h->n);
	}

	return (nodes);
}
