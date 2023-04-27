#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - a function that prints all the elements of a list_t
 * list
 * @h: nodes
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t z = 0;

	for (; h; h = h->next)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		z++;
	}
	return (z);
}
