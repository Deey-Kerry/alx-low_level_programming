#include "search_algos.h"
/**
 * advanced_binary_recursive - searches for a value in a sorted array
 * of integers
 * @array: pointer to the first element of the array to search in
 * @left: first index
 * @right: second index
 * @value: value to search for
 * Return: value or -1
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t a;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (a = left; a < right; a++)
		printf("%d, ", array[a]);
	printf("%d\n", array[a]);

	a = left + (right - left) / 2;
	if (array[a] == value && (a == left || array[a - 1] != value))
		return (a);
	if (array[a] >= value)
		return (advanced_binary_recursive(array, left, a, value));
	return (advanced_binary_recursive(array, a + 1, right, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of
 * integers using the Interpolation search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: return the first index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
