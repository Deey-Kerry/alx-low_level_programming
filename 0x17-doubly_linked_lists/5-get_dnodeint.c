#include "lists.h"
/**
 * *get_dnodeint_at_index - a function that returns the nth node of
 * a dlistint_t linked list
 * @head:head pointer
 * @index: position of node
 * Return: nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a = 0;
	dlistint_t *temp;

	if (!head)
		return (NULL);
	temp = head;
	while (temp)
	{
		if (index == a)
			return (temp);
		a++;
		temp = temp->next;
	}
	return (NULL);
}
