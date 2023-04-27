#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list -  a function that frees a list_t list
 * @head: first node
 * Return: list
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
		free(head->str);
		free(head);
	}
}
