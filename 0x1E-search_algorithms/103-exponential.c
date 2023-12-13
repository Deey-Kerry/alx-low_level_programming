#include "search_algos.h"
/**
 * _binary_search -  searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @left: first index
 * @right: second index
 * @value: value to search for
 * Return: value or -1
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t a;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (a = left; a < right; a++)
			printf("%d, ", array[a]);
		printf("%d\n", array[a]);

		a = left + (right - left) / 2;
		if (array[a] == value)
			return (a);
		if (array[a] > value)
			right = a - 1;
		else
			left = a + 1;
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of
 * integers using the Interpolation search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: return the first index where value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t a = 0, r;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (a = 1; a < size && array[a] <= value; a = a * 2)
			printf("Value checked array[%ld] = [%d]\n", a, array[a]);
	}

	r = a < size ? a : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", a / 2, r);
	return (_binary_search(array, a / 2, r, value));
}
