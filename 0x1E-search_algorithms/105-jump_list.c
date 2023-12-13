#include "search_algos.h"
/**
  * jump_list -  Searches for a value in a sorted array
  * @list: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for
  * Return: value or -1
  */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t stp = 0, stp_size;
	listint_t *node, *jmp;

	if (list == NULL || size == 0)
		return (NULL);

	stp_size = sqrt(size);
	for (node = jmp = list; jmp->index + 1 < size && jmp->n < value;)
	{
		node = jmp;
		for (stp += stp_size; jmp->index < stp; jmp = jmp->next)
		{
			if (jmp->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jmp->index, jmp->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jmp->index);

	for (; node->index < jmp->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
