#include "lists.h"
/**
 * print_dlistint - a function that prints all the elements
 * of a dlistint_t list
 * @h: pointer to the head
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int calculate;

	calculate = 0;

	if (h == NULL)
		return (calculate);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d/n", h->n);
		calculate++;
		h = h->next;
	}
	return (calculate);
}
