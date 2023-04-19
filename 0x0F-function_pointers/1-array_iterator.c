#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that executes a function given as a parameter
 * @array: to store similar data types
 * @size: size of the array
 * @action: pointe to a function
 * Return: array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (!array || !action)
	{
		return;
	}
	x = 0;

	while (x < size)
	{
		action(array[x]);
		x++;
	}
}
