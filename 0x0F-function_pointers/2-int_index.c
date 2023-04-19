#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - a function that searches for an integer and returns index
 * @array: used to store and manipulate similar data types
 * @size: size of the array
 * @cmp: pointer to the function
 * Return: matched elements
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (array && cmp)
	{
		while (x < size)
		{
			if (cmp(array[x]) != 0)
				return (x);
			x++;
		}
	}

	return (-1);
}
