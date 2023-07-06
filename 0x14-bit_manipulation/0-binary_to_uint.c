#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number to an
 * unsigned int
 * @b: is a pointer pointing to a string of 0 and 1 characters
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int kd = 0;
	int q = 0;

	if (b == NULL)
		return (0);

	while (b[q] != '\0')
	{
		if (b[q] < '0' || b[q] > '1')
			return (0);

		kd  = 2 * kd + (b[q] - '0');
		q++;
	}

	return (kd);
}
