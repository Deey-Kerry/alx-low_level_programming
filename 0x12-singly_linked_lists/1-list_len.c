#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * list_len -  a function that returns the number of elements in a
 * linked list_t list
 * @h: nodes
 * Return: number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	for (x = 0; h; h = h->next)
	{
		x++;
	}
	return (x);
}
