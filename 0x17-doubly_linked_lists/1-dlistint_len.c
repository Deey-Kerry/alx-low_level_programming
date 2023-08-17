#include "lists.h"
/**
 * dlistint_len - a function that returns the number of elements
 * in a linked dlistint_t list.
 * @h: head pointer
 * Return: number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t calculate = 0;

	if (h == NULL)
		return (calculate);
	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		calculate++;
		h = h->next;
	}
	return (calculate);
}
