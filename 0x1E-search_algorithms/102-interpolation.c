#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of
 * integers using the Interpolation search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: return the first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t a, x, y;

	if (array == NULL)
		return (-1);
	for (x = 0, y = size - 1; y >= x;)
	{
		a = x + (((double)(y - x) / (array[y] - array[x])) * (value - array[x]));
		if (a < size)
			printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", a);
			break;
		}
		if (array[a] == value)
			return (a);
		if (array[a] > value)
			y = a - 1;
		else
			x = a + 1;
	}
	return (-1);
}
