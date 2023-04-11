#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it
 * @size: size of the array of characters
 * @c: input character
 * Return: array of characters
 */
char *create_array(unsigned int size, char c)
{
	unsigned int area;
	char *memory;

	if (size == 0)
	{
		return (NULL);
	}

	memory = (char *) malloc(size * sizeof(c));
	if (memory == 0)
	{
		return (0);
	}
	else
	{
		area = 0;
		while (area < size)
		{
			*(memory + area) = c;
				area++;
		}
	}
	return (memory);
}
