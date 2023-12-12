#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: your function must return -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a, j, s;

	if (array == NULL || size == 0)
		return (-1);
	s = sqrt(size);
	for (a = j = 0; j < size && array[j] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		a = j;
		j += s;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", a, j);
	j = j < size - 1 ? j : size - 1;
	for (; a < j && array[a] < value; a++)
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
	printf("Value checked array[%ld] = [%d]\n", a, array[a]);

	return (array[a] == value ? (int)a : -1);
}
