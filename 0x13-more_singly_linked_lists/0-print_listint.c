#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * print_listint - a function that prints all the elements of a
 * listint_t list
 * @h: pointer to the nodes
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t value = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		value++;
	}

	return (value);
}
